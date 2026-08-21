"""Golden reference model for FP8 E4M3 addition.

Matches the design decisions made for fp_add.sv:
  - no subnormals (values below the smallest normal flush to zero)
  - round-to-nearest-even
  - cancellation to exact zero always encodes as 0x00 (matches fp_add.sv,
    which never produces a negative-zero encoding)

Uses exact rational arithmetic (fractions.Fraction) throughout so the model
itself introduces no rounding error - only real FP8 rounding is applied,
at the single point where a value gets encoded back into 8 bits.
"""

from fractions import Fraction

EXP_BITS = 4
MANT_BITS = 3
BIAS = 7


def decode(bits: int) -> Fraction:
    """8-bit FP8 E4M3 encoding -> exact value."""
    bits &= 0xFF
    sign = (bits >> 7) & 1
    exp = (bits >> 3) & 0xF
    mant = bits & 0x7

    if exp == 0 and mant == 0:
        return Fraction(0)

    value = Fraction(8 + mant, 8) * (Fraction(2) ** (exp - BIAS))
    return -value if sign else value


def encode(value: Fraction) -> int:
    """Exact value -> 8-bit FP8 E4M3 encoding, with RNE rounding."""
    if value == 0:
        return 0x00

    sign = 1 if value < 0 else 0
    mag = -value if sign else value

    # Normalize so 1 <= mag < 2, tracking the unbiased exponent e.
    e = 0
    while mag >= 2:
        mag /= 2
        e += 1
    while mag < 1:
        mag *= 2
        e -= 1

    exp_field = e + BIAS
    if exp_field < 0:
        return 0x00  # below the smallest representable normal -> flush to zero

    frac = mag - 1  # in [0, 1)
    mant_scaled = frac * 8  # in [0, 8), exact
    mant_int = mant_scaled.numerator // mant_scaled.denominator  # floor
    remainder = mant_scaled - mant_int

    round_up = remainder > Fraction(1, 2) or (
        remainder == Fraction(1, 2) and mant_int % 2 == 1
    )
    if round_up:
        mant_int += 1

    if mant_int == 8:  # mantissa rounded up past the top -> bump exponent
        mant_int = 0
        exp_field += 1

    if exp_field > 15:
        # fp_add.sv doesn't handle this yet (exp_r wraps instead of
        # saturating) - saturate to the largest finite value here so the
        # golden model at least has a defined answer; expect real mismatches
        # against the current RTL on these vectors until that's fixed.
        exp_field = 15
        mant_int = 7

    return (sign << 7) | (exp_field << 3) | mant_int


def fp8_add(a_bits: int, b_bits: int) -> int:
    return encode(decode(a_bits) + decode(b_bits))


def to_float(bits: int) -> float:
    return float(decode(bits))


BF16_MANT_BITS = 7
BF16_BIAS = 127


def encode_bf16(value: Fraction) -> int:
    """Exact value -> 16-bit bfloat16 encoding (1 sign, 8 exp, 7 mant), RNE rounding.

    Used as fp_mul.sv's output format: since bf16 has more range and more
    mantissa bits than an E4M3 x E4M3 product needs, encode() here should
    never actually hit its rounding or saturation paths for that use case -
    they're included for a generically-correct reference.
    """
    if value == 0:
        return 0x0000

    sign = 1 if value < 0 else 0
    mag = -value if sign else value

    e = 0
    while mag >= 2:
        mag /= 2
        e += 1
    while mag < 1:
        mag *= 2
        e -= 1

    exp_field = e + BF16_BIAS
    if exp_field < 0:
        return 0x0000  # underflow -> flush to zero

    frac = mag - 1
    mant_scaled = frac * (1 << BF16_MANT_BITS)
    mant_int = mant_scaled.numerator // mant_scaled.denominator
    remainder = mant_scaled - mant_int

    round_up = remainder > Fraction(1, 2) or (
        remainder == Fraction(1, 2) and mant_int % 2 == 1
    )
    if round_up:
        mant_int += 1

    if mant_int == (1 << BF16_MANT_BITS):
        mant_int = 0
        exp_field += 1

    if exp_field > 255:
        exp_field = 255
        mant_int = (1 << BF16_MANT_BITS) - 1  # saturate to max finite

    return (sign << 15) | (exp_field << BF16_MANT_BITS) | mant_int


def fp8_mul(a_bits: int, b_bits: int) -> int:
    return encode_bf16(decode(a_bits) * decode(b_bits))


def decode_bf16(bits: int) -> Fraction:
    """16-bit bfloat16 encoding -> exact value. Matches decode()'s convention:
    no subnormals, exp==0 and mant==0 both zero -> exact zero."""
    bits &= 0xFFFF
    sign = (bits >> 15) & 1
    exp = (bits >> BF16_MANT_BITS) & 0xFF
    mant = bits & ((1 << BF16_MANT_BITS) - 1)

    if exp == 0 and mant == 0:
        return Fraction(0)

    value = Fraction((1 << BF16_MANT_BITS) + mant, 1 << BF16_MANT_BITS) * (
        Fraction(2) ** (exp - BF16_BIAS)
    )
    return -value if sign else value


def bf16_add(a_bits: int, b_bits: int) -> int:
    return encode_bf16(decode_bf16(a_bits) + decode_bf16(b_bits))


def bf16_to_fp8_requant(bits: int) -> int:
    """16-bit bfloat16 -> 8-bit FP8 E4M3, matching the design decisions in
    bfloat16_to_fp8_requant.sv:
      - no subnormals: any input with biased exponent < 121 flushes to +0.0.
        This is a hard cutoff on the *input* exponent, not rounding-aware -
        a value that would round up into the smallest normal is still
        flushed, by design.
      - round-to-nearest-even when truncating the 7-bit bf16 mantissa to 3 bits
      - overflow (whether from a genuinely huge input, or from mantissa
        rounding carrying the encoded exponent past 15) saturates to the
        largest finite E4M3 value (448), sign preserved - this never emits
        the exponent=1111/mantissa=111 bit pattern, which is reserved for NaN

    NOTE: the current RTL's overflow check only tests bit 4 of the rebiased
    exponent (`exp_r_edited[4]`), which is only equivalent to "exp_r_edited
    >= 16" while exp_r_edited < 32. Since bf16's exponent field is 8 bits
    wide (vs. FP8 x FP8 addition, where the rebiased exponent can never
    exceed ~17), a large bf16 input can push exp_r_edited well past 32,
    where that single-bit check silently stops catching overflow. This
    golden model implements the actually-intended "any exp_r_edited >= 16"
    saturation, so expect real mismatches against the current RTL on
    large-exponent vectors until that check is widened.
    """
    bits &= 0xFFFF
    sign = (bits >> 15) & 1
    exp_a = (bits >> 7) & 0xFF
    mant_a = bits & 0x7F

    if exp_a < 121:
        return 0x00

    exp_r = exp_a - 120

    mantissa_lsb = (mant_a >> 4) & 1
    guard = (mant_a >> 3) & 1
    round_bit = (mant_a >> 2) & 1
    sticky = 1 if (mant_a & 0b11) else 0

    round_up = guard and (round_bit or sticky or mantissa_lsb)

    top3 = (mant_a >> 4) & 0x7
    rounded = top3 + (1 if round_up else 0)

    if rounded & 0x8:  # carry out of the 3-bit mantissa
        rounded &= 0x7
        exp_r += 1

    if exp_r >= 16 or (exp_r == 15 and rounded == 7):
        exp_r = 15
        rounded = 6  # saturate to max finite (448), never the NaN pattern

    return (sign << 7) | (exp_r << 3) | rounded


if __name__ == "__main__":
    one = 0b0_0111_000
    two = 0b0_1000_000
    assert fp8_add(one, one) == two, f"1.0+1.0 -> {fp8_add(one, one):#04x}, expected {two:#04x}"

    neg_one = 0b1_0111_000
    assert fp8_add(one, neg_one) == 0x00, f"1.0-1.0 -> {fp8_add(one, neg_one):#04x}, expected 0x00"

    zero = 0x00
    assert fp8_add(one, zero) == one, f"1.0+0 -> {fp8_add(one, zero):#04x}, expected {one:#04x}"

    # 1.0 * 1.0 = 1.0, in bf16: sign=0 exp=127(0111_1111) mant=0000000
    bf16_one = 0b0_01111111_0000000
    assert fp8_mul(one, one) == bf16_one, f"1.0*1.0 -> {fp8_mul(one, one):#06x}, expected {bf16_one:#06x}"

    assert fp8_mul(one, zero) == 0x0000, f"1.0*0 -> {fp8_mul(one, zero):#06x}, expected 0x0000"

    bf16_two = 0b0_10000000_0000000
    assert bf16_add(bf16_one, bf16_one) == bf16_two, (
        f"1.0+1.0 (bf16) -> {bf16_add(bf16_one, bf16_one):#06x}, expected {bf16_two:#06x}"
    )
    bf16_neg_one = bf16_one | 0x8000
    assert bf16_add(bf16_one, bf16_neg_one) == 0x0000, (
        f"1.0-1.0 (bf16) -> {bf16_add(bf16_one, bf16_neg_one):#06x}, expected 0x0000"
    )

    assert bf16_to_fp8_requant(bf16_one) == one, (
        f"requant(1.0) -> {bf16_to_fp8_requant(bf16_one):#04x}, expected {one:#04x}"
    )
    assert bf16_to_fp8_requant(0x0000) == 0x00, "requant(+0.0) should be 0x00"
    assert bf16_to_fp8_requant(0x8000) == 0x00, "requant(-0.0) should be 0x00 (no negative zero)"

    # exp_a=120, max mantissa: true value rounds up to exactly the smallest
    # normal (2^-6), but the hard cutoff flushes it to zero anyway - this
    # locks in that deliberate design choice.
    just_below_cutoff = (120 << 7) | 0x7F
    assert bf16_to_fp8_requant(just_below_cutoff) == 0x00, (
        "requant should hard-flush exp_a=120 to zero even though it would round up"
    )

    # exp_a=135, mantissa rounds 110->111 with no carry: should saturate to
    # 448 (0xFE), not emit the reserved NaN pattern (0xFF).
    nan_boundary = (135 << 7) | 0b1101001
    assert bf16_to_fp8_requant(nan_boundary) == 0x7E, (
        f"requant NaN-boundary case -> {bf16_to_fp8_requant(nan_boundary):#04x}, expected 0x7e"
    )

    # exp_a=152 (~2^25, a large but perfectly ordinary finite bf16 value):
    # correct behavior is saturate to 448. This is the case the current
    # RTL's exp_r_edited[4] check gets wrong (see bf16_to_fp8_requant's
    # docstring) - it's here as a locked-in golden answer, not a claim
    # about what the RTL currently produces.
    large_finite = (152 << 7) | 0x00
    assert bf16_to_fp8_requant(large_finite) == 0x7E, (
        f"requant(~2^25) -> {bf16_to_fp8_requant(large_finite):#04x}, expected 0x7e (saturate)"
    )

    print("golden_model self-check OK")

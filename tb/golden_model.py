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


if __name__ == "__main__":
    one = 0b0_0111_000
    two = 0b0_1000_000
    assert fp8_add(one, one) == two, f"1.0+1.0 -> {fp8_add(one, one):#04x}, expected {two:#04x}"

    neg_one = 0b1_0111_000
    assert fp8_add(one, neg_one) == 0x00, f"1.0-1.0 -> {fp8_add(one, neg_one):#04x}, expected 0x00"

    zero = 0x00
    assert fp8_add(one, zero) == one, f"1.0+0 -> {fp8_add(one, zero):#04x}, expected {one:#04x}"

    print("golden_model self-check OK")

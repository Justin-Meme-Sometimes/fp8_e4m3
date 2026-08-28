SEED_LUT = [1.0 / (1.0 + (i + 0.5) / 8.0) for i in range(8)]
print(SEED_LUT)



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

ENCODED_VALS = []
for i in range(8):
    ENCODED_VALS[i] = encode(SEED_LUT[i])

print(ENCODED_VALS)

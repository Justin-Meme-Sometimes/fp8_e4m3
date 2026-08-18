"""Generate test vectors for bfloat16_add.sv from the golden model.

Unlike FP8 (256 values, 65536 exhaustive pairs), bf16 has 65536 possible
values, so exhaustive all-pairs testing would be ~4.3 billion vectors -
not feasible to simulate. Instead this builds a large random sample plus
targeted vectors aimed at the specific paths the RTL has distinct logic
for: zero inputs, exact cancellation, each cancellation-shift amount,
carry-out, overflow saturation, and underflow flush-to-zero.

Output is one 48-bit hex word per line ({a, b, expected}), meant to be
loaded with $readmemh in tb_bfloat16_add.sv.
"""

import random

from golden_model import bf16_add

OUT_PATH = "tb/vectors_bf16_add.hex"

random.seed(0xB16ADD)


def rand_bf16():
    return random.randrange(0, 1 << 16)


def make_vectors():
    vectors = []

    # Broad random coverage.
    for _ in range(300_000):
        vectors.append((rand_bf16(), rand_bf16()))

    # Same-exponent pairs (random sign/mantissa) - this is what actually
    # exercises multi-bit cancellation in normalize, since that only
    # happens when the two operands are close in magnitude.
    for _ in range(50_000):
        exp = random.randrange(0, 256)
        sign_a = random.randrange(0, 2)
        sign_b = random.randrange(0, 2)
        mant_a = random.randrange(0, 128)
        mant_b = random.randrange(0, 128)
        a = (sign_a << 15) | (exp << 7) | mant_a
        b = (sign_b << 15) | (exp << 7) | mant_b
        vectors.append((a, b))

    # Exact cancellation: every magnitude added to its own negation.
    for mag in range(0x0000, 0x8000):
        vectors.append((mag, mag | 0x8000))

    # Zero-input identity, both directions and both-zero.
    for _ in range(2_000):
        x = rand_bf16()
        vectors.append((0x0000, x))
        vectors.append((x, 0x0000))
    vectors.append((0x0000, 0x0000))
    vectors.append((0x0000, 0x8000))  # zero + "negative zero"
    vectors.append((0x8000, 0x8000))

    # Overflow stress: large-magnitude same-sign pairs near the top of the
    # exponent range.
    for _ in range(10_000):
        sign = random.randrange(0, 2)
        exp_a = random.randrange(240, 255)
        exp_b = random.randrange(240, 255)
        mant_a = random.randrange(0, 128)
        mant_b = random.randrange(0, 128)
        a = (sign << 15) | (exp_a << 7) | mant_a
        b = (sign << 15) | (exp_b << 7) | mant_b
        vectors.append((a, b))

    # Underflow stress: small-exponent, opposite-sign pairs close in
    # magnitude, to hit the flush-to-zero path in the cancellation shift.
    for _ in range(10_000):
        exp_a = random.randrange(0, 10)
        exp_b = random.randrange(0, 10)
        mant_a = random.randrange(0, 128)
        mant_b = random.randrange(0, 128)
        a = (0 << 15) | (exp_a << 7) | mant_a
        b = (1 << 15) | (exp_b << 7) | mant_b
        vectors.append((a, b))

    return vectors


def main():
    vectors = make_vectors()
    with open(OUT_PATH, "w") as f:
        for a, b in vectors:
            expected = bf16_add(a, b)
            f.write(f"{(a << 32) | (b << 16) | expected:012x}\n")
    print(f"wrote {len(vectors)} vectors to {OUT_PATH}")


if __name__ == "__main__":
    main()

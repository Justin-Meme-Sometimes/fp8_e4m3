"""Generate exhaustive fp_8_mul test vectors from the golden model.

Same idea as gen_vectors.py: all 256*256 = 65536 (a, b) pairs, no sampling
needed. Output is one 32-bit hex word per line ({a, b, expected}), where
expected is the 16-bit bf16 result - meant to be loaded with $readmemh in
tb_fp_mul.sv.
"""

from golden_model import fp8_mul

OUT_PATH = "tb/vectors_mul.hex"


def main():
    count = 0
    with open(OUT_PATH, "w") as f:
        for a in range(256):
            for b in range(256):
                expected = fp8_mul(a, b)
                f.write(f"{(a << 24) | (b << 16) | expected:08x}\n")
                count += 1
    print(f"wrote {count} vectors to {OUT_PATH}")


if __name__ == "__main__":
    main()

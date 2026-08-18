"""Generate exhaustive fp_8_add test vectors from the golden model.

FP8 has only 256 possible values, so all 256*256 = 65536 (a, b) input pairs
can be exercised - no need to sample. Output is one 24-bit hex word per line
({a, b, expected}), meant to be loaded with $readmemh in tb_fp_add.sv.
"""

from golden_model import fp8_add

OUT_PATH = "tb/vectors.hex"


def main():
    count = 0
    with open(OUT_PATH, "w") as f:
        for a in range(256):
            for b in range(256):
                expected = fp8_add(a, b)
                f.write(f"{(a << 16) | (b << 8) | expected:06x}\n")
                count += 1
    print(f"wrote {count} vectors to {OUT_PATH}")


if __name__ == "__main__":
    main()

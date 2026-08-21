"""Generate exhaustive bfloat16_to_fp8_requant test vectors from the golden model.

The DUT has a single 16-bit input, so all 65536 possible bf16 bit patterns
can be exercised exhaustively - no sampling needed, same spirit as
gen_vectors.py for fp_8_add. Output is one 24-bit hex word per line
({in_a, expected}), meant to be loaded with $readmemh in
tb_bfloat16_to_fp8_requant.sv.
"""

from golden_model import bf16_to_fp8_requant

OUT_PATH = "tb/vectors_requant.hex"


def main():
    count = 0
    with open(OUT_PATH, "w") as f:
        for in_a in range(1 << 16):
            expected = bf16_to_fp8_requant(in_a)
            f.write(f"{(in_a << 8) | expected:06x}\n")
            count += 1
    print(f"wrote {count} vectors to {OUT_PATH}")


if __name__ == "__main__":
    main()

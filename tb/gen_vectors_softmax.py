"""Generate rows of streaming-softmax test vectors for tb_fp8_softmax.sv.

Each row is 16 real values, fed to the DUT as 4 chunks of 4. Inputs and the
Streaming-computed expected outputs are both quantized to Q8.7 fixed point
(see golden_model_softmax.py) and written as separate $readmemh hex files,
16 lines per row, flattened row-major.
"""

import random

from golden_model_softmax import row_streaming, to_fixed

IN_PATH = "tb/vectors_softmax_in.hex"
EXP_PATH = "tb/vectors_softmax_exp.hex"

random.seed(0)

DIRECTED_ROWS = [
    [0.0] * 16,  # uniform -> flat softmax
    [float(i) for i in range(16)],  # ascending ramp
    [-float(i) for i in range(16)],  # descending (all <= 0, max at i=0)
    [10.0] + [0.0] * 15,  # single huge outlier dominates, rest underflow
    [-5.0] * 15 + [5.0],  # outlier arrives in the last chunk (tests rescale)
]

NUM_RANDOM_ROWS = 50
RANDOM_RANGE = 6.0  # real-valued logits in [-RANDOM_RANGE, RANDOM_RANGE]


def random_rows():
    for _ in range(NUM_RANDOM_ROWS):
        yield [random.uniform(-RANDOM_RANGE, RANDOM_RANGE) for _ in range(16)]


def main():
    rows = DIRECTED_ROWS + list(random_rows())

    with open(IN_PATH, "w") as fin, open(EXP_PATH, "w") as fexp:
        for row in rows:
            expected = row_streaming(row)
            for x in row:
                fin.write(f"{to_fixed(x):04x}\n")
            for y in expected:
                fexp.write(f"{to_fixed(y):04x}\n")

    print(f"wrote {len(rows)} rows ({len(rows) * 16} words) to {IN_PATH} and {EXP_PATH}")


if __name__ == "__main__":
    main()

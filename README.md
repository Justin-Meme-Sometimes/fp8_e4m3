# fp8_e4m3

FP8 (E4M3) floating-point arithmetic units in SystemVerilog, built as components for an FP8 TPU-style matrix-multiply accelerator targeting AI transformer workloads.

Format: 1 sign bit, 4 exponent bits, 3 mantissa bits, bias 7. No subnormals - values below the smallest normal flush to zero.

## Modules

- `src/fp_add.sv` — FP8 E4M3 + FP8 E4M3 -> FP8 E4M3 adder
- `src/fp_mul.sv` — FP8 E4M3 x FP8 E4M3 -> bfloat16 multiplier (wider output so the exact product needs no rounding)
- `src/bfloat16_add.sv` — bfloat16 + bfloat16 -> bfloat16 adder, for accumulating `fp_mul`'s products in a MAC pipeline

## Verification

Each module has a Python golden reference model (`tb/golden_model.py`) checked against a SystemVerilog testbench.

`fp_add`/`fp_mul` operate on 8-bit inputs, so their testbenches are exhaustive - all 65,536 possible input pairs. `bfloat16_add` takes two 16-bit inputs, making exhaustive all-pairs testing infeasible (~4.3 billion pairs); its testbench instead uses a large random sample plus targeted vectors for the paths that differ from the FP8 adder (cancellation-shift amounts, carry-out, overflow saturation, underflow flush-to-zero, zero inputs).

```
./tb/run.sh           # fp_add       (65,536 vectors, exhaustive)
./tb/run_mul.sh        # fp_mul       (65,536 vectors, exhaustive)
./tb/run_bf16_add.sh   # bfloat16_add (~407k vectors, random + targeted)
```

All three currently pass every vector.

## Status

- `fp_add` — done, fully verified
- `fp_mul` — done, fully verified
- `bfloat16_add` — done, fully verified
- TPU systolic array (PE, weight loading, tiling) — in progress

## AI Disclaimer

AI was used in the making of the project, specifically for the testbench generation and debugging. The Architecture for the design and the designs are human made.

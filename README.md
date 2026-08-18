# fp8_e4m3

FP8 (E4M3) floating-point arithmetic units in SystemVerilog, built as components for an FP8 TPU-style matrix-multiply accelerator targeting AI transformer workloads.

Format: 1 sign bit, 4 exponent bits, 3 mantissa bits, bias 7. No subnormals - values below the smallest normal flush to zero.

## Modules

- `src/fp_add.sv` — FP8 E4M3 + FP8 E4M3 -> FP8 E4M3 adder
- `src/fp_mul.sv` — FP8 E4M3 x FP8 E4M3 -> bfloat16 multiplier (wider output so the exact product needs no rounding)

## Verification

Each module has a Python golden reference model (`tb/golden_model.py`) and an exhaustive SystemVerilog testbench that checks all 65,536 possible input pairs against it.

```
./tb/run.sh       # fp_add
./tb/run_mul.sh   # fp_mul
```

Both currently pass all 65,536 vectors.

## Status

- `fp_add` — done, fully verified
- `fp_mul` — done, fully verified
- bf16 adder (for MAC accumulation) — in progress

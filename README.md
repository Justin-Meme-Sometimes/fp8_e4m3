# fp8_e4m3

FP8 (E4M3) and BF16(E8M7) floating-point arithmetic units in SystemVerilog , built as components for a TPU-style Accelerator chip for AI transformer workloads.


FP8 Format: 1 sign bit, 4 exponent bits, 3 mantissa bits, bias 7. 

BF16 Format: 1 sign bit, 8 exponent bits, 7 mantissa bits, bias 15.

No subnormals, values below the smallest normal flush to zero.


## Modules

- `src/fp8_add.sv` — FP8 E4M3 + FP8 E4M3 -> FP8 E4M3 adder
- `src/fp8_mul.sv` — FP8 E4M3 x FP8 E4M3 -> bfloat16 multiplier (wider output so the exact product needs no rounding)
- `src/bfloat16_add.sv` — bfloat16 + bfloat16 -> bfloat16 adder, for accumulating `fp8_mul`'s products in a MAC pipeline
- `src/bfloat16_to_fp8_requant.sv` — bfloat16 -> FP8 E4M3 requantizer, for casting accumulated bfloat16 results back down to FP8

## Verification

Each module has a Python golden reference model (`tb/golden_model.py`) checked against a SystemVerilog testbench.

`fp8_add`/`fp8_mul` operate on 8-bit inputs, so their testbenches are exhaustive - all 65,536 possible input pairs. `bfloat16_to_fp8_requant` has a single 16-bit input, so it's also exhaustive - all 65,536 possible values. `bfloat16_add` takes two 16-bit inputs, making exhaustive all-pairs testing infeasible (~4.3 billion pairs).

```
./tb/run.sh             # fp8_add      (65,536 vectors)
./tb/run_mul.sh         # fp8_mul      (65,536 vectors)
./tb/run_bf16_add.sh    # bfloat16_add (407k vectors)
./tb/run_requant.sh     # bfloat16_to_fp8_requant (65,536 vectors)
```

All four currently pass every vector.

## Status

- `fp8_add` — done, fully verified
- `fp8_mul` — done, fully verified
- `bfloat16_add` — done, fully verified
- `bfloat16_to_fp8_requant` — done, fully verified


## Synthesis

`synth/synth_sky130.sh <top_module> <src.sv...>` runs yosys against the `sky130_fd_sc_hd` standard cell library, producing a gate-level netlist and cell/area report in `synth/out/`.

| Module | Cells | Area (μm²) |
|---|---|---|
| `fp8_add` | 348 | 2,102.0 |
| `fp8_mul` | 99 | 620.6 |
| `bfloat16_add` | 823 | 4,917.2 |
| `bfloat16_to_fp8_requant` | 36 | 214.0 |

## AI Disclaimer

AI was used in the making of the project, specifically for the testbench generation and debugging. The Architecture for the design and the designs are human made.

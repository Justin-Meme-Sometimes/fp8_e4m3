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
- `src/fp8_softmax.sv` — streaming base-2 log-softmax over a 16-element row (see below)

### `fp8_softmax`

Takes a 16-element row as four 4-wide chunks of Q8.7 signed fixed point (16 bits: 1 sign, 8 integer, 7 fraction), one chunk per `valid` cycle, and outputs all 16 values after `x - L`, where `L = max(x) + log2(sum(2^(x - max(x))))`.

- The output is **log2 of the softmax, not the probabilities**. A final `2^out` step (the same split / `exp2_lut` interpolate / shift used inside the unit) is still needed before requantizing to FP8.
- Streaming: running max, and the running sum is rescaled by `2^(old_max - new_max)` whenever the max changes. `log2`/`exp2` use 8-segment linear-interpolation LUTs.
- Fixed point saturates (it does not wrap): `x - max`, `L`, and the output clamp to the 16-bit Q8.7 range. Scores within about 4.0 of +/-256 lose accuracy because `L` itself clamps.
- Expects a gap between rows: the FSM returns to idle after the output is produced, so a new row should not start until the previous row's `out_valid`. Idle cycles between the four chunks of a row are fine.
- Base 2: a natural-log softmax needs the scores scaled by log2(e) upstream.

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

### `fp8_softmax` (cocotb + Verilator)

`fp8_softmax` is checked stage by stage rather than only at the output, so a failure points at the pipeline stage that diverges first. `tb/softmax_golden_stages.py` is a bit-accurate model that records the expected value of every stage; `tb/test_softmax_stages.py` compares each against the RTL (S2 running max through S10 log, then the output).

```
.venv/bin/python tb/run_softmax_stages.py
```

292 rows: directed rows, 215 random rows (+/-6), masked-attention-style rows, all-equal rows at the extremes, and 60 wide-range random rows (+/-20, +/-60, +/-120). Environment knobs:

| Variable | Effect |
|---|---|
| `SOFTMAX_RESET_EACH_ROW=0` | rows back to back with no reset in between |
| `SOFTMAX_MAX_GAP=N` | up to N random idle cycles before each chunk |
| `SOFTMAX_GAP_COMPUTE_STATE=0` | drop `compute_state` during those idle cycles |
| `SOFTMAX_OVERFLOW=1` | add rows where `x - max` exceeds the 16-bit range (checks saturation) |
| `SOFTMAX_ROWS=N` | run only the first N rows |

All configurations pass every stage check.

The test also compares the RTL output against an exact float64 base-2 softmax on the same quantized inputs. Accuracy is `100 * (1 - TV)` where TV is half the total absolute probability difference:

| Rows | Accuracy | Worst log error |
|---|---|---|
| random +/-6 | 99.58% | 3.2 LSB (Q8.7) |
| random +/-20 | 99.62% | 2.0 LSB |
| random +/-60 | 99.73% | 1.7 LSB |
| random +/-120 | 99.80% | 2.3 LSB |
| masked | 99.997% | 0.1 LSB |

The argmax is correct on every row. The probabilities sum to about 1.005 to 1.008. The one weak case is a row of all `+255.0`, where `L` saturates (see above).

## Status

- `fp8_add` — done, fully verified
- `fp8_mul` — done, fully verified
- `bfloat16_add` — done, fully verified
- `bfloat16_to_fp8_requant` — done, fully verified
- `fp8_softmax` — done, verified stage by stage against a bit-accurate model; about 99.6% accurate against exact softmax. Not yet done: the final `2^out` conversion to probabilities, and layer norm.


## Synthesis

`synth/synth_sky130.sh <top_module> <src.sv...>` runs yosys against the `sky130_fd_sc_hd` standard cell library, producing a gate-level netlist and cell/area report in `synth/out/`.

| Module | Cells | Area (μm²) |
|---|---|---|
| `fp8_add` | 348 | 2,102.0 |
| `fp8_mul` | 99 | 620.6 |
| `bfloat16_add` | 823 | 4,917.2 |
| `bfloat16_to_fp8_requant` | 36 | 214.0 |
| `fp8_softmax` | 8,511 | 99,152.6 |

`fp8_softmax` has 2,166 flip-flops (most of them the 16x16-bit row buffer copied through the later stages) and a worst register-to-register path of about 16.7 ns at the typical corner (OpenSTA, 20 ns target, no wire load). It uses `return` in functions, which Yosys's built-in parser rejects, so synthesize it with the `slang` frontend:

```
FRONTEND=slang synth/synth_sky130.sh fp8_softmax src/fp8_softmax.sv
```

## AI Disclaimer

AI was used in the making of the project, specifically for the testbench generation and debugging. The Architecture for the design and the designs are human made.

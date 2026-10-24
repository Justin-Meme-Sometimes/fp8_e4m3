"""Per-pipeline-stage golden trace for fp8_softmax.sv.

Where golden_model_softmax.py only gives final outputs, this produces the
*intermediate* value every pipeline stage is supposed to hold, in the same raw
integer units the RTL registers use, so a testbench can compare stage by stage
and point at the first stage that diverges.

Number formats (the "contract" - edit here if the RTL's intent differs):
  inputs / sub / L / out : Q8.7 signed, 16 bit  (scale 128)
  k                      : sub >> 7  (9-bit signed integer part, <= 0)
  idx, w                 : sub[6:4] (3 bit), sub[3:0] (4 bit) of the fraction
  exp frac (result_s5)   : Q1.10, 2**frac in [1.0, 2.0)   (LUT 0x400 == 1.0)
  shifted / sum          : Q?.10, exp2(sub) = exp_frac >> -k
  log2 frac (result_s10) : Q0.10, log2(mantissa) in [0, 1)  (LUT 0x400 == 1.0)

The exp2/log2 LUT contents are parsed out of src/fp8_softmax.sv itself so the
golden interpolation is bit-accurate against whatever table the RTL carries.
"""

import math
import re
from dataclasses import dataclass, field
from pathlib import Path

RTL_PATH = Path(__file__).resolve().parent.parent / "src" / "fp8_softmax.sv"

Q_IN = 7
SCALE_IN = 1 << Q_IN
Q_LUT = 10
W_BITS = 4
CHUNK = 4
ROW = 16


def _parse_lut(func_name: str) -> list[int]:
    text = RTL_PATH.read_text()
    body = re.search(rf"function automatic[^;]*?{func_name}\(.*?endfunction", text, re.S).group(0)
    entries = re.findall(r"4'd(\d+):\s*return\s*\d+'h([0-9A-Fa-f]+);", body)
    lut = [0] * len(entries)
    for addr, val in entries:
        lut[int(addr)] = int(val, 16)
    return lut


LOG2_LUT = _parse_lut("log2_lut")  # Q0.10, 9 entries
EXP2_LUT = _parse_lut("exp2_lut")  # Q1.10, 9 entries


def wrap16(v: int) -> int:
    v &= 0xFFFF
    return v - (1 << 16) if v & 0x8000 else v


def sat16(v: int) -> int:
    """Saturate an integer to signed 16 bits."""
    return max(-(1 << 15), min((1 << 15) - 1, v))


def quantize(x: float) -> int:
    """Real -> Q8.7 signed int (saturating)."""
    return max(-(1 << 15), min((1 << 15) - 1, round(x * SCALE_IN)))


def exp2_frac_q10(idx: int, w: int) -> int:
    lo, hi = EXP2_LUT[idx], EXP2_LUT[idx + 1]
    return lo + ((w * (hi - lo)) >> W_BITS)


def log2_frac_q10(idx: int, w: int) -> int:
    lo, hi = LOG2_LUT[idx], LOG2_LUT[idx + 1]
    return lo + ((w * (hi - lo)) >> W_BITS)


@dataclass
class ChunkTrace:
    ins: list[int]
    chunk_max: int
    old_max: int
    updated_max: int           # S1/S2: running max including this chunk
    sub: list[int]             # S3: x - updated_max (Q8.7)
    k: list[int]               # S4: integer part
    idx: list[int]             # S4
    w: list[int]               # S4
    exp_frac: list[int]        # S5: Q1.10
    shifted: list[int]         # S6: Q?.10
    sum_real: float            # S7: running sum, as a real number
    sum_q10: float             # S7: same, in raw Q?.10 LSBs


@dataclass
class RowTrace:
    x: list[int]                                  # quantized inputs, Q8.7
    chunks: list[ChunkTrace] = field(default_factory=list)
    final_max: int = 0
    sum_q10: float = 0.0       # S8: final sum, raw Q?.10 LSBs
    one_pos: int = 0           # S9: MSB position of the (integer) sum
    log_idx: int = 0           # S9
    log_w: int = 0             # S9
    log_frac_q10: int = 0      # S10: log2 mantissa interp, Q0.10
    L: int = 0                 # S10: max + log2(sum), Q8.7
    out: list[int] = field(default_factory=list)  # x - L, Q8.7


def trace_row(row_real: list[float]) -> RowTrace:
    x = [quantize(v) for v in row_real]
    tr = RowTrace(x=x)

    m = 0
    s = 0.0  # running sum, real
    for c in range(ROW // CHUNK):
        ins = x[c * CHUNK : (c + 1) * CHUNK]
        cmax = max(ins)
        old = m
        um = cmax if c == 0 else max(m, cmax)

        sub = [sat16(v - um) for v in ins]
        k = [v >> Q_IN for v in sub]                # arithmetic shift == floor
        frac = [v & (SCALE_IN - 1) for v in sub]
        idx = [f >> W_BITS for f in frac]
        w = [f & ((1 << W_BITS) - 1) for f in frac]
        ef = [exp2_frac_q10(i, ww) for i, ww in zip(idx, w)]
        sh = [e >> (-kk) for e, kk in zip(ef, k)]

        if c > 0:
            s *= 2.0 ** ((old - um) / SCALE_IN)     # rescale old sum to new max
        s += sum(v / (1 << Q_LUT) for v in sh)
        m = um

        tr.chunks.append(ChunkTrace(ins, cmax, old, um, sub, k, idx, w, ef, sh, s, s * (1 << Q_LUT)))

    tr.final_max = m
    tr.sum_q10 = s * (1 << Q_LUT)

    s_int = max(1, round(tr.sum_q10))
    tr.one_pos = s_int.bit_length() - 1
    mant7 = ((s_int << Q_IN) >> tr.one_pos) & (SCALE_IN - 1)  # 7 bits after the leading one
    tr.log_idx = mant7 >> W_BITS
    tr.log_w = mant7 & ((1 << W_BITS) - 1)
    tr.log_frac_q10 = log2_frac_q10(tr.log_idx, tr.log_w)

    log2_sum = (tr.one_pos - Q_LUT) + tr.log_frac_q10 / (1 << Q_LUT)  # log2 of real sum
    tr.L = quantize(m / SCALE_IN + log2_sum)
    tr.out = [sat16(v - tr.L) for v in x]
    return tr


if __name__ == "__main__":
    from golden_model_softmax import row_streaming, to_fixed, from_fixed

    row = [0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 2.0, 0.0, 0.0, 0.0]
    t = trace_row(row)
    ref = [to_fixed(v) for v in row_streaming(row)]
    worst = max(abs(wrap16(a) - from_code) for a, from_code in zip(t.out, [wrap16(r) for r in ref]))
    print(f"LUTs parsed: log2={len(LOG2_LUT)} exp2={len(EXP2_LUT)} entries")
    print(f"stage-trace out vs float golden: worst diff {worst} Q8.7 LSBs")
    assert worst <= 8, "stage-trace model disagrees with float golden"
    print("softmax_golden_stages self-check OK")

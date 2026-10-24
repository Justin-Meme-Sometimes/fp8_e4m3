"""cocotb testbench for fp8_softmax: checks every pipeline stage against
softmax_golden_stages.py and reports the FIRST stage that diverges.

Timing model: a snapshot of all watched signals is taken on every falling
edge (before new inputs are driven). A chunk driven at snapshot index d is
captured by the first register stage at the next rising edge, so a signal that
is `lat` register stages deep is visible in snapshot d + lat. If a stage fails
at its nominal latency but matches within +/-SEARCH cycles, the report says so
(a timing/alignment problem rather than a value problem).

Env knobs: SOFTMAX_ROWS (limit #rows), SOFTMAX_RESET_EACH_ROW (default 1).
"""

import os
import random
from dataclasses import dataclass

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge

from softmax_golden_stages import Q_IN, SCALE_IN, W_BITS, RowTrace, log2_frac_q10, trace_row, wrap16

SEARCH = 3
TIMEOUT_CYCLES = 200
NUM_RANDOM_ROWS = 215
RANDOM_RANGE = 6.0
RESET_EACH_ROW = os.environ.get("SOFTMAX_RESET_EACH_ROW", "1") == "1"

DIRECTED_ROWS = [
    [0.0] * 16,
    [float(i) for i in range(16)],
    [-float(i) for i in range(16)],
    [10.0] + [0.0] * 15,
    [-5.0] * 15 + [5.0],
]


# --------------------------------------------------------------------------
# Stage spec: the contract between the RTL and the golden model.
#   signal   : RTL signal name (packed arrays are split into `lanes`)
#   width/signed : how to interpret the raw bits (w/ lane count)
#   per      : "chunk" (checked after every 4-wide chunk) or "row" (once)
#   lat      : register depth after the chunk is driven (chunk stages only)
#   valid    : (row stages) signal whose first rising 1 marks when it's valid
#   tol      : allowed |got - expected| in raw LSBs
#   golden   : fn(RowTrace, chunk_idx) -> list of expected raw values
# --------------------------------------------------------------------------
@dataclass
class Stage:
    name: str
    signal: str
    lanes: int
    width: int
    signed: bool
    per: str
    tol: float
    golden: object
    lat: int = 0
    valid: str = ""
    sel: object = None  # optional slice of lanes to compare


STAGES = [
    Stage("S2 running max", "updated_max_s2", 1, 16, True, "chunk", 0, lambda t, c: [t.chunks[c].updated_max], lat=1),
    Stage("S3 x-max", "sub_result_s3", 4, 16, True, "chunk", 0, lambda t, c: t.chunks[c].sub, lat=2),
    Stage("S4 k (int part)", "k_s4", 4, 9, True, "chunk", 0, lambda t, c: t.chunks[c].k, lat=3),
    Stage("S4 idx", "idx_s4", 4, 4, False, "chunk", 0, lambda t, c: t.chunks[c].idx, lat=3),
    Stage("S4 w", "w_s4", 4, 4, False, "chunk", 0, lambda t, c: t.chunks[c].w, lat=3),
    Stage("S5 exp2(frac) Q1.10", "result_s5", 4, 16, False, "chunk", 1, lambda t, c: t.chunks[c].exp_frac, lat=4),
    Stage("S6 shifted exp Q.10", "shifted_value_s6", 4, 16, False, "chunk", 2, lambda t, c: t.chunks[c].shifted, lat=5),
    Stage("S7 running sum Q.10", "sum_s7", 1, 16, False, "chunk", 8, lambda t, c: [t.chunks[c].sum_q10], lat=6),
    Stage("S8 final sum Q.10", "s8_sum", 1, 16, False, "row", 8, lambda t, c: [t.sum_q10], valid="s8_valid"),
    Stage("S9 one_pos", "one_pos_s9", 1, 16, False, "row", 0, lambda t, c: [t.one_pos], valid="valid_s9"),
    Stage("S9 log idx", "idx_s9", 1, 4, False, "row", 1, lambda t, c: [t.log_idx], valid="valid_s9"),
    Stage("S9 log w", "w_s9", 1, 4, False, "row", 1, lambda t, c: [t.log_w], valid="valid_s9"),
    Stage("S10 log2 frac Q0.10", "result_s10", 1, 16, False, "row", 3, lambda t, c: [t.log_frac_q10], valid="valid_s10"),
    Stage("S10 L=max+log2 Q8.7", "log_and_max", 1, 16, True, "row", 4, lambda t, c: [t.L], valid="valid_s10"),
    Stage("OUT x-L Q8.7", "out", 16, 16, True, "row", 4, lambda t, c: t.out, valid="out_valid"),
]
WATCH = sorted({s.signal for s in STAGES} | {s.valid for s in STAGES if s.valid})


def decode(raw: int, lanes: int, width: int, signed: bool, lane_bits: int) -> list[int]:
    """Split a packed value into `lanes` fields of `width` bits.

    lane_bits is the RTL's declared element size (16 for every packed array
    here); width may be narrower (e.g. k is the low 9 bits of a 16-bit word).
    """
    out = []
    for i in range(lanes):
        v = (raw >> (i * lane_bits)) & ((1 << width) - 1)
        if signed and v & (1 << (width - 1)):
            v -= 1 << width
        out.append(v)
    return out


def lane_bits_for(stage: Stage) -> int:
    # idx_s4/w_s4 are [3:0][3:0] packed (4-bit lanes); everything else 16.
    return 4 if stage.signal in ("idx_s4", "w_s4") else 16


async def snapshot(dut) -> dict:
    snap = {}
    for name in WATCH:
        snap[name] = int(getattr(dut, name).value)
    return snap


def read_stage(snap: dict, st: Stage) -> list[int]:
    return decode(snap[st.signal], st.lanes, st.width, st.signed, lane_bits_for(st))


def compare(got, exp, tol):
    bad = [i for i, (g, e) in enumerate(zip(got, exp)) if abs(g - e) > tol]
    return bad


@dataclass
class Result:
    row: int
    stage: Stage
    chunk: int | None
    ok: bool
    got: list
    exp: list
    note: str = ""


async def reset(dut):
    dut.rst_n.value = 0
    dut.valid.value = 0
    dut.compute_state.value = 0
    dut.clr.value = 0
    dut.con.value = 0
    dut.ins.value = 0
    for _ in range(2):
        await FallingEdge(dut.clk)
    dut.rst_n.value = 1
    await FallingEdge(dut.clk)


def pack_chunk(vals: list[int]) -> int:
    word = 0
    for i, v in enumerate(vals):
        word |= (v & 0xFFFF) << (16 * i)
    return word


async def run_row(dut, row_idx: int, trace: RowTrace) -> list[Result]:
    log: list[dict] = []
    drive_idx: list[int] = []

    # drive 4 chunks, one per cycle, sampling before each drive
    for c in range(4):
        log.append(await snapshot(dut))
        drive_idx.append(len(log) - 1)
        dut.compute_state.value = 1
        dut.valid.value = 1
        dut.ins.value = pack_chunk(trace.x[c * 4 : c * 4 + 4])
        await FallingEdge(dut.clk)
    dut.compute_state.value = 0
    dut.valid.value = 0

    # run until out_valid (or watchdog)
    timed_out = True
    for _ in range(TIMEOUT_CYCLES):
        s = await snapshot(dut)
        log.append(s)
        if s["out_valid"]:
            timed_out = False
            break
        await FallingEdge(dut.clk)
    # a couple of extra cycles so late-settling signals are in the log
    for _ in range(2):
        await FallingEdge(dut.clk)
        log.append(await snapshot(dut))

    results: list[Result] = []
    for st in STAGES:
        if st.per == "chunk":
            for c in range(4):
                exp = st.golden(trace, c)
                n = drive_idx[c] + st.lat
                got = read_stage(log[n], st) if n < len(log) else [None] * st.lanes
                ok = n < len(log) and not compare(got, exp, st.tol)
                note = ""
                if not ok:
                    for off in range(-SEARCH, SEARCH + 1):
                        m = n + off
                        if off and 0 <= m < len(log) and not compare(read_stage(log[m], st), exp, st.tol):
                            note = f"matches at {off:+d} cycle(s) -> timing, not value"
                            break
                results.append(Result(row_idx, st, c, ok, got, exp, note))
        else:
            exp = st.golden(trace, 0)
            if st.name.startswith(("S9", "S10 log2 frac")):
                exp = s9_expected_from_hw_sum(st, trace, log, exp)
            n = next((i for i, s in enumerate(log) if s[st.valid]), None)
            if n is None:
                results.append(Result(row_idx, st, None, False, [None] * st.lanes, exp, f"{st.valid} never asserted"))
                continue
            got = read_stage(log[n], st)
            ok = not compare(got, exp, st.tol)
            note = ""
            if not ok:
                for m in range(n, len(log)):
                    if not compare(read_stage(log[m], st), exp, st.tol):
                        note = f"matches {m - n:+d} cycle(s) after {st.valid}"
                        break
            results.append(Result(row_idx, st, None, ok, got, exp, note))

    if timed_out:
        results.append(Result(row_idx, STAGES[-1], None, False, [], [], f"TIMEOUT: out_valid never asserted in {TIMEOUT_CYCLES} cycles"))
    return results


def s9_expected_from_hw_sum(st, trace, log, default):
    """S9/S10 split the sum into (one_pos, idx, w) and look up log2 of the fraction. Near a power of two a 1-LSB
    sum error flips one_pos, so derive the expected split from the RTL's own
    s8_sum, but only if that sum is within the S8 tolerance of the golden."""
    s8 = next(x for x in STAGES if x.signal == "s8_sum")
    n8 = next((i for i, s in enumerate(log) if s[s8.valid]), None)
    if n8 is None:
        return default
    hw_sum = read_stage(log[n8], s8)[0]
    if abs(hw_sum - trace.sum_q10) > s8.tol:
        return default
    s_int = max(1, hw_sum)
    one_pos = s_int.bit_length() - 1
    mant7 = ((s_int << Q_IN) >> one_pos) & (SCALE_IN - 1)
    return {
        "one_pos_s9": [one_pos],
        "idx_s9": [mant7 >> W_BITS],
        "w_s9": [mant7 & ((1 << W_BITS) - 1)],
        "result_s10": [log2_frac_q10(mant7 >> W_BITS, mant7 & ((1 << W_BITS) - 1))],
    }.get(st.signal, default)


def fmt(v):
    return "-" if v is None else str(v)


def report_first_divergence(row_idx: int, row_results: list[Result], printed: list[int], limit: int = 8):
    """Print the first failing stage (pipeline order, chunk order) for this row."""
    for r in row_results:
        if r.ok:
            continue
        if printed[0] >= limit:
            return
        printed[0] += 1
        where = f"chunk {r.chunk}" if r.chunk is not None else "row"
        cocotb.log.warning(
            f"row {row_idx:2d} FIRST DIVERGENCE at [{r.stage.name}] ({r.stage.signal}, {where}, tol {r.stage.tol})\n"
            f"        got : {[fmt(v) for v in r.got]}\n"
            f"        exp : {[round(v, 2) if isinstance(v, float) else v for v in r.exp]}"
            + (f"\n        note: {r.note}" if r.note else "")
        )
        return


@cocotb.test()
async def softmax_stage_by_stage(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    random.seed(0)
    rows = list(DIRECTED_ROWS) + [
        [random.uniform(-RANDOM_RANGE, RANDOM_RANGE) for _ in range(16)] for _ in range(NUM_RANDOM_ROWS)
    ]
    limit = int(os.environ.get("SOFTMAX_ROWS", len(rows)))
    rows = rows[:limit]

    await reset(dut)

    all_results: list[Result] = []
    printed = [0]
    for ri, row in enumerate(rows):
        if RESET_EACH_ROW and ri:
            await reset(dut)
        trace = trace_row(row)
        res = await run_row(dut, ri, trace)
        all_results += res
        report_first_divergence(ri, res, printed)
        for _ in range(3):
            await FallingEdge(dut.clk)

    # ---- summary: per stage pass counts, pipeline order ----
    lines = [f"\n{'stage':<24}{'signal':<20}{'pass/total':>12}   tol"]
    total_fail = 0
    for st in STAGES:
        rs = [r for r in all_results if r.stage is st]
        ok = sum(r.ok for r in rs)
        total_fail += len(rs) - ok
        mark = "ok  " if ok == len(rs) else "FAIL"
        per_chunk = ""
        if st.per == "chunk":
            per_chunk = "  per-chunk: " + " ".join(
                f"c{c}={sum(r.ok for r in rs if r.chunk == c)}/{sum(1 for r in rs if r.chunk == c)}" for c in range(4)
            )
        lines.append(f"{mark} {st.name:<24}{st.signal:<20}{ok:>6}/{len(rs):<5}  {st.tol}{per_chunk}")
    first_bad = next((st for st in STAGES if any((r.stage is st and not r.ok) for r in all_results)), None)
    lines.append(f"\nrows: {len(rows)}   failing checks: {total_fail}")
    lines.append(f"earliest failing stage in pipeline order: {first_bad.name if first_bad else 'none'}")
    dut._log.info("\n".join(lines))

    assert total_fail == 0, f"{total_fail} stage checks failed; earliest failing stage: {first_bad.name}"

"""Golden reference model for the streaming fp8_softmax.sv log-softmax core.

Mirrors the design decisions in fp8_softmax.sv:
  - ins/out are Q8.7 signed fixed point (16 bits: 1 sign + 8 int + 7 frac,
    scale 128) - matches the [15:7]/[6:4]/[3:0] k/idx/w slicing in the RTL.
  - log2_/exp2_ use the same K=3 (9-entry, N=8 segment) LUT breakpoints the
    RTL's log2_lut/exp2_lut hardcode, just unquantized - the RTL's hardware
    tables round these same math.log2/2**x values to 10/11 fixed bits.
  - algorithm is the standard numerically-stable log-softmax:
    L = max(x) + log2(sum(exp2(x - max(x)))); out = x - L
  - Streaming mirrors the RTL's actual hardware behavior: 4-wide chunks,
    running max, and sum rescale by 2**(old_max-new_max) on a new max.
"""

import math

K = 3
N = 1 << K
LOG_LUT = [math.log2(1 + i / N) for i in range(N + 1)]
EXP_LUT = [2 ** (i / N) for i in range(N + 1)]

Q = 7
SCALE = 1 << Q


def interp(lut, t):
    i = min(int(t), N - 1)
    w = t - i
    return lut[i] + w * (lut[i + 1] - lut[i])


def split(x):
    k = math.floor(math.log2(x))
    return k, x / 2 ** k


def log2_(x):
    k, fr = split(x)
    return k + interp(LOG_LUT, (fr - 1) * N)


def exp2_(x):
    k = math.floor(x)
    return interp(EXP_LUT, (x - k) * N) * 2 ** k


class Streaming:
    """4-wide streaming softmax with running max + rescale, matching the RTL."""

    def __init__(self):
        self.m = None
        self.s = 0.0
        self.buf = []

    def push(self, chunk):
        self.buf += chunk
        lmax = max(chunk)
        if self.m is None:
            self.m = lmax
            self.s = sum(exp2_(x - self.m) for x in chunk)
            return
        nm = max(self.m, lmax)
        if nm > self.m:
            self.s *= 2 ** (self.m - nm)
            self.m = nm
        self.s += sum(exp2_(x - self.m) for x in chunk)

    def finish(self):
        L = self.m + log2_(self.s)
        return [x - L for x in self.buf]


def reference(x):
    m = max(x)
    s = sum(exp2_(xi - m) for xi in x)
    L = m + log2_(s)
    return [xi - L for xi in x]


def to_fixed(value: float) -> int:
    """Real -> Q8.7 signed fixed point, as a 16-bit two's complement code."""
    code = round(value * SCALE)
    code = max(-(1 << 15), min((1 << 15) - 1, code))
    return code & 0xFFFF


def from_fixed(code: int) -> float:
    """16-bit two's complement Q8.7 code -> real."""
    code &= 0xFFFF
    if code & 0x8000:
        code -= 1 << 16
    return code / SCALE


def row_streaming(x):
    """Run x (16 reals) through Streaming in 4-wide chunks, as the RTL does."""
    st = Streaming()
    for i in range(0, len(x), 4):
        st.push(x[i : i + 4])
    return st.finish()


if __name__ == "__main__":
    row = [0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 2.0, 0.0, 0.0, 0.0]
    streamed = row_streaming(row)
    direct = reference(row)
    for a, b in zip(streamed, direct):
        assert abs(a - b) < 1e-9, f"streaming vs direct mismatch: {a} vs {b}"
    print("golden_model_softmax self-check OK")

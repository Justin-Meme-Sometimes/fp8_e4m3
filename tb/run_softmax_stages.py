"""Build fp8_softmax with Verilator and run the cocotb stage-by-stage test.

    .venv/bin/python tb/run_softmax_stages.py
"""

from pathlib import Path

from cocotb.runner import get_runner

TB = Path(__file__).resolve().parent
ROOT = TB.parent


def main():
    runner = get_runner("verilator")
    runner.build(
        sources=[ROOT / "src" / "fp8_softmax.sv"],
        hdl_toplevel="fp8_softmax",
        build_dir=TB / "sim_build_softmax",
        build_args=["--public-flat-rw", "-Wno-fatal", "-Wno-lint", "-Wno-style"],
        waves=True,
        always=True,
    )
    runner.test(
        hdl_toplevel="fp8_softmax",
        test_module="test_softmax_stages",
        test_dir=TB,
        build_dir=TB / "sim_build_softmax",
        waves=True,
    )


if __name__ == "__main__":
    main()

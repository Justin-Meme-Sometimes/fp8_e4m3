#!/usr/bin/env bash
# Synthesize a module against the sky130_fd_sc_hd standard cell library,
# using yosys inside the local iic-osic-tools docker image (same image
# ~/eda/iic-osic-tools/start_shell.sh uses).
#
# Usage: synth/synth_sky130.sh <top_module> <src.sv> [more_src.sv ...]
# Example:
#   synth/synth_sky130.sh bfloat16_to_fp8_requant src/bfloat16_to_fp8_requant.sv
#
# Writes synth/out/<top>.synth.v (gate-level netlist), synth/out/<top>.synth.json,
# and synth/out/<top>.stat.txt (cell/area report) - all sky130_fd_sc_hd cells.

set -e
cd "$(dirname "$0")/.."

TOP="${1:?usage: synth_sky130.sh <top_module> <src.sv> [more_src.sv...]}"
shift
SRCS=("$@")
[ ${#SRCS[@]} -gt 0 ] || { echo "usage: synth_sky130.sh <top_module> <src.sv> [more_src.sv...]"; exit 1; }

DOCKER_IMAGE="hpretl/iic-osic-tools:latest"
LIB="/foss/pdks/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"

mkdir -p synth/out

YOSYS_SCRIPT="
read_verilog -sv ${SRCS[*]}
hierarchy -top ${TOP} -check
synth -top ${TOP}
dfflibmap -liberty ${LIB}
abc -liberty ${LIB}
clean
opt_clean -purge
write_verilog -noattr synth/out/${TOP}.synth.v
write_json synth/out/${TOP}.synth.json
tee -o synth/out/${TOP}.stat.txt stat -liberty ${LIB}
"

docker run --rm \
    -v "$(pwd)":/work -w /work \
    -u "$(id -u)":"$(id -g)" \
    -e IIC_OSIC_TOOLS_QUIET=1 \
    "${DOCKER_IMAGE}" --skip yosys -p "${YOSYS_SCRIPT}"

echo "---"
echo "netlist:  synth/out/${TOP}.synth.v"
echo "stats:    synth/out/${TOP}.stat.txt"

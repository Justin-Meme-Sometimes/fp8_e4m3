#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."

python3 tb/gen_vectors_softmax.py

verilator --binary --timing --trace -Wno-fatal \
    src/fp8_softmax.sv tb/tb_fp8_softmax.sv \
    --top-module tb_fp8_softmax -o tb_fp8_softmax_sim -Mdir tb/obj_dir_softmax

./tb/obj_dir_softmax/tb_fp8_softmax_sim

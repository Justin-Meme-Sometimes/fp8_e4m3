#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."

python3 tb/gen_vectors_requant.py

verilator --binary --timing -Wno-fatal \
    src/bfloat16_to_fp8_requant.sv tb/tb_bfloat16_to_fp8_requant.sv \
    --top-module tb_bfloat16_to_fp8_requant -o tb_requant_sim -Mdir tb/obj_dir_requant

./tb/obj_dir_requant/tb_requant_sim

#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."

python3 tb/gen_vectors_bf16_add.py

verilator --binary --timing -Wno-fatal \
    src/bfloat16_add.sv tb/tb_bfloat16_add.sv \
    --top-module tb_bfloat16_add -o tb_bf16_add_sim -Mdir tb/obj_dir_bf16_add

./tb/obj_dir_bf16_add/tb_bf16_add_sim

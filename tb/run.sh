#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."

python3 tb/gen_vectors.py

verilator --binary --timing -Wno-fatal \
    src/fp_add.sv tb/tb_fp_add.sv \
    --top-module tb_fp_add -o tb_fp_add_sim -Mdir tb/obj_dir

./tb/obj_dir/tb_fp_add_sim

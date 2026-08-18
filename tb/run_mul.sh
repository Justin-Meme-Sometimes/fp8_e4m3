#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."

python3 tb/gen_vectors_mul.py

verilator --binary --timing -Wno-fatal \
    src/fp_mul.sv tb/tb_fp_mul.sv \
    --top-module tb_fp_mul -o tb_fp_mul_sim -Mdir tb/obj_dir_mul

./tb/obj_dir_mul/tb_fp_mul_sim

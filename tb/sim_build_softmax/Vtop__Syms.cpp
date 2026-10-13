// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_fp8_softmax);
    __Vhier.remove(&__Vscope_fp8_softmax, &__Vscope_fp8_softmax__fsm);
    __Vhier.remove(&__Vscope_fp8_softmax, &__Vscope_fp8_softmax__max_count_fsm);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax.configure(this, name(), "fp8_softmax", "fp8_softmax", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_fp8_softmax__fsm.configure(this, name(), "fp8_softmax.fsm", "fsm", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_fp8_softmax__max_count_fsm.configure(this, name(), "fp8_softmax.max_count_fsm", "max_count_fsm", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_fp8_softmax__unnamedblk1.configure(this, name(), "fp8_softmax.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk10.configure(this, name(), "fp8_softmax.unnamedblk10", "unnamedblk10", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk11.configure(this, name(), "fp8_softmax.unnamedblk11", "unnamedblk11", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk12.configure(this, name(), "fp8_softmax.unnamedblk12", "unnamedblk12", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk13.configure(this, name(), "fp8_softmax.unnamedblk13", "unnamedblk13", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk14.configure(this, name(), "fp8_softmax.unnamedblk14", "unnamedblk14", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk15.configure(this, name(), "fp8_softmax.unnamedblk15", "unnamedblk15", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk16.configure(this, name(), "fp8_softmax.unnamedblk16", "unnamedblk16", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk2.configure(this, name(), "fp8_softmax.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk3.configure(this, name(), "fp8_softmax.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk4.configure(this, name(), "fp8_softmax.unnamedblk4", "unnamedblk4", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk5.configure(this, name(), "fp8_softmax.unnamedblk5", "unnamedblk5", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk6.configure(this, name(), "fp8_softmax.unnamedblk6", "unnamedblk6", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk7.configure(this, name(), "fp8_softmax.unnamedblk7", "unnamedblk7", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk8.configure(this, name(), "fp8_softmax.unnamedblk8", "unnamedblk8", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_fp8_softmax__unnamedblk9.configure(this, name(), "fp8_softmax.unnamedblk9", "unnamedblk9", -12, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_fp8_softmax);
    __Vhier.add(&__Vscope_fp8_softmax, &__Vscope_fp8_softmax__fsm);
    __Vhier.add(&__Vscope_fp8_softmax, &__Vscope_fp8_softmax__max_count_fsm);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clr", &(TOP.clr), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"compute_state", &(TOP.compute_state), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"con", &(TOP.con), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"ins", &(TOP.ins), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,1, 63,0);
        __Vscope_TOP.varInsert(__Vfinal,"out", &(TOP.out), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1, 255,0);
        __Vscope_TOP.varInsert(__Vfinal,"out_valid", &(TOP.out_valid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid", &(TOP.valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"MAX_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.fp8_softmax__DOT__MAX_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"W_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.fp8_softmax__DOT__W_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"chunk_max", &(TOP.fp8_softmax__DOT__chunk_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"chunk_max_intermediate_1", &(TOP.fp8_softmax__DOT__chunk_max_intermediate_1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"chunk_max_intermediate_2", &(TOP.fp8_softmax__DOT__chunk_max_intermediate_2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"clk", &(TOP.fp8_softmax__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"clr", &(TOP.fp8_softmax__DOT__clr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"compute_state", &(TOP.fp8_softmax__DOT__compute_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"con", &(TOP.fp8_softmax__DOT__con), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"done_computing", &(TOP.fp8_softmax__DOT__done_computing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"done_find_max", &(TOP.fp8_softmax__DOT__done_find_max), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"done_log_sum", &(TOP.fp8_softmax__DOT__done_log_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"f", &(TOP.fp8_softmax__DOT__f), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"f_frac", &(TOP.fp8_softmax__DOT__f_frac), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"first", &(TOP.fp8_softmax__DOT__first), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"fsm_start", &(TOP.fp8_softmax__DOT__fsm_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"idx", &(TOP.fp8_softmax__DOT__idx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"idx_s4", &(TOP.fp8_softmax__DOT__idx_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1, 15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"idx_s9", &(TOP.fp8_softmax__DOT__idx_s9), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"in_compute_max", &(TOP.fp8_softmax__DOT__in_compute_max), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"in_first", &(TOP.fp8_softmax__DOT__in_first), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"in_log_sum", &(TOP.fp8_softmax__DOT__in_log_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"in_valid", &(TOP.fp8_softmax__DOT__in_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins", &(TOP.fp8_softmax__DOT__ins), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s2", &(TOP.fp8_softmax__DOT__ins_s2), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s3", &(TOP.fp8_softmax__DOT__ins_s3), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s3_sub", &(TOP.fp8_softmax__DOT__ins_s3_sub), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s4", &(TOP.fp8_softmax__DOT__ins_s4), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s5", &(TOP.fp8_softmax__DOT__ins_s5), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s6", &(TOP.fp8_softmax__DOT__ins_s6), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"ins_s7", &(TOP.fp8_softmax__DOT__ins_s7), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"int_sum_s7", &(TOP.fp8_softmax__DOT__int_sum_s7), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,20,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"k_s4", &(TOP.fp8_softmax__DOT__k_s4), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"log_and_max", &(TOP.fp8_softmax__DOT__log_and_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"log_result", &(TOP.fp8_softmax__DOT__log_result), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"max", &(TOP.fp8_softmax__DOT__max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"max_cnt", &(TOP.fp8_softmax__DOT__max_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"max_count_cnt", &(TOP.fp8_softmax__DOT__max_count_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"max_s3", &(TOP.fp8_softmax__DOT__max_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"max_s4", &(TOP.fp8_softmax__DOT__max_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max", &(TOP.fp8_softmax__DOT__old_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max_s2", &(TOP.fp8_softmax__DOT__old_max_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max_s3", &(TOP.fp8_softmax__DOT__old_max_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max_s3_p", &(TOP.fp8_softmax__DOT__old_max_s3_p), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max_s4", &(TOP.fp8_softmax__DOT__old_max_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"old_max_s4_p", &(TOP.fp8_softmax__DOT__old_max_s4_p), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"one_pos", &(TOP.fp8_softmax__DOT__one_pos), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"one_pos_s10", &(TOP.fp8_softmax__DOT__one_pos_s10), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"one_pos_s9", &(TOP.fp8_softmax__DOT__one_pos_s9), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"out", &(TOP.fp8_softmax__DOT__out), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 255,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"out_valid", &(TOP.fp8_softmax__DOT__out_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"prelog_sum", &(TOP.fp8_softmax__DOT__prelog_sum), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"product", &(TOP.fp8_softmax__DOT__product), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"rescale_factor_s7", &(TOP.fp8_softmax__DOT__rescale_factor_s7), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"result_s10", &(TOP.fp8_softmax__DOT__result_s10), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"result_s5", &(TOP.fp8_softmax__DOT__result_s5), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"results_s5", &(TOP.fp8_softmax__DOT__results_s5), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"row_done", &(TOP.fp8_softmax__DOT__row_done), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"rst_n", &(TOP.fp8_softmax__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s5_k", &(TOP.fp8_softmax__DOT__s5_k), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s5_old_max", &(TOP.fp8_softmax__DOT__s5_old_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s5_updated_max", &(TOP.fp8_softmax__DOT__s5_updated_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s6_inc_max_cnt", &(TOP.fp8_softmax__DOT__s6_inc_max_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s6_old_max", &(TOP.fp8_softmax__DOT__s6_old_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s6_updated_max", &(TOP.fp8_softmax__DOT__s6_updated_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_curr_val_stored", &(TOP.fp8_softmax__DOT__s7_curr_val_stored), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_idx", &(TOP.fp8_softmax__DOT__s7_idx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_inc_max_cnt", &(TOP.fp8_softmax__DOT__s7_inc_max_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_k", &(TOP.fp8_softmax__DOT__s7_k), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,8,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_res", &(TOP.fp8_softmax__DOT__s7_res), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_stored_values", &(TOP.fp8_softmax__DOT__s7_stored_values), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,15);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_updated_max", &(TOP.fp8_softmax__DOT__s7_updated_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_valid", &(TOP.fp8_softmax__DOT__s7_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s7_w", &(TOP.fp8_softmax__DOT__s7_w), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s8_stored_values", &(TOP.fp8_softmax__DOT__s8_stored_values), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,15);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s8_sum", &(TOP.fp8_softmax__DOT__s8_sum), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s8_updated_max", &(TOP.fp8_softmax__DOT__s8_updated_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"s8_valid", &(TOP.fp8_softmax__DOT__s8_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"shifted_value_s5", &(TOP.fp8_softmax__DOT__shifted_value_s5), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"shifted_value_s6", &(TOP.fp8_softmax__DOT__shifted_value_s6), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"shifted_value_s7", &(TOP.fp8_softmax__DOT__shifted_value_s7), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"softmax_clr", &(TOP.fp8_softmax__DOT__softmax_clr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"softmax_computing", &(TOP.fp8_softmax__DOT__softmax_computing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"softmax_full", &(TOP.fp8_softmax__DOT__softmax_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"softmax_inc", &(TOP.fp8_softmax__DOT__softmax_inc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"softmax_out", &(TOP.fp8_softmax__DOT__softmax_out), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,15);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"stored_values_s10", &(TOP.fp8_softmax__DOT__stored_values_s10), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,15);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"stored_values_s9", &(TOP.fp8_softmax__DOT__stored_values_s9), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,15);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sub_result_s3", &(TOP.fp8_softmax__DOT__sub_result_s3), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1, 63,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sub_s7", &(TOP.fp8_softmax__DOT__sub_s7), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sub_val", &(TOP.fp8_softmax__DOT__sub_val), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum", &(TOP.fp8_softmax__DOT__sum), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_0", &(TOP.fp8_softmax__DOT__sum_0), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_1", &(TOP.fp8_softmax__DOT__sum_1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s3", &(TOP.fp8_softmax__DOT__sum_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s4", &(TOP.fp8_softmax__DOT__sum_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s5", &(TOP.fp8_softmax__DOT__sum_s5), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s6", &(TOP.fp8_softmax__DOT__sum_s6), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s7", &(TOP.fp8_softmax__DOT__sum_s7), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"sum_s7_pre", &(TOP.fp8_softmax__DOT__sum_s7_pre), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max", &(TOP.fp8_softmax__DOT__updated_max), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max_s10", &(TOP.fp8_softmax__DOT__updated_max_s10), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max_s2", &(TOP.fp8_softmax__DOT__updated_max_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max_s3", &(TOP.fp8_softmax__DOT__updated_max_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max_s4", &(TOP.fp8_softmax__DOT__updated_max_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"updated_max_s9", &(TOP.fp8_softmax__DOT__updated_max_s9), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid", &(TOP.fp8_softmax__DOT__valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s10", &(TOP.fp8_softmax__DOT__valid_s10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s2", &(TOP.fp8_softmax__DOT__valid_s2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s3", &(TOP.fp8_softmax__DOT__valid_s3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s4", &(TOP.fp8_softmax__DOT__valid_s4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s5", &(TOP.fp8_softmax__DOT__valid_s5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s6", &(TOP.fp8_softmax__DOT__valid_s6), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"valid_s9", &(TOP.fp8_softmax__DOT__valid_s9), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"w", &(TOP.fp8_softmax__DOT__w), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"w_s4", &(TOP.fp8_softmax__DOT__w_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1, 15,0);
        __Vscope_fp8_softmax.varInsert(__Vfinal,"w_s9", &(TOP.fp8_softmax__DOT__w_s9), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"clk", &(TOP.fp8_softmax__DOT__fsm__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"clr", &(TOP.fp8_softmax__DOT__fsm__DOT__clr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"compute_state", &(TOP.fp8_softmax__DOT__fsm__DOT__compute_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"current_state", &(TOP.fp8_softmax__DOT__fsm__DOT__current_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"done_find_max", &(TOP.fp8_softmax__DOT__fsm__DOT__done_find_max), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"done_log_sum", &(TOP.fp8_softmax__DOT__fsm__DOT__done_log_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"first", &(TOP.fp8_softmax__DOT__fsm__DOT__first), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"in_compute_max", &(TOP.fp8_softmax__DOT__fsm__DOT__in_compute_max), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"in_log_sum", &(TOP.fp8_softmax__DOT__fsm__DOT__in_log_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"next_state", &(TOP.fp8_softmax__DOT__fsm__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"rst_n", &(TOP.fp8_softmax__DOT__fsm__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__fsm.varInsert(__Vfinal,"start", &(TOP.fp8_softmax__DOT__fsm__DOT__start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__max_count_fsm.varInsert(__Vfinal,"clk", &(TOP.fp8_softmax__DOT__max_count_fsm__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__max_count_fsm.varInsert(__Vfinal,"clr", &(TOP.fp8_softmax__DOT__max_count_fsm__DOT__clr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__max_count_fsm.varInsert(__Vfinal,"en", &(TOP.fp8_softmax__DOT__max_count_fsm__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__max_count_fsm.varInsert(__Vfinal,"out", &(TOP.fp8_softmax__DOT__max_count_fsm__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_fp8_softmax__max_count_fsm.varInsert(__Vfinal,"rst_n", &(TOP.fp8_softmax__DOT__max_count_fsm__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_fp8_softmax__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk10.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk10__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk11.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk11__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk12.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk12__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk13.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk13__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk14.varInsert(__Vfinal,"j", &(TOP.fp8_softmax__DOT__unnamedblk14__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk15.varInsert(__Vfinal,"j", &(TOP.fp8_softmax__DOT__unnamedblk15__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk16.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk16__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk3.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk3__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk4.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk4__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk5.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk5__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk6.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk6__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk7.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk7__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk8.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk8__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_fp8_softmax__unnamedblk9.varInsert(__Vfinal,"i", &(TOP.fp8_softmax__DOT__unnamedblk9__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}

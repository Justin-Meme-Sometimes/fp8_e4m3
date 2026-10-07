// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fp8_softmax.h for the primary calling header

#ifndef VERILATED_VTB_FP8_SOFTMAX___024ROOT_H_
#define VERILATED_VTB_FP8_SOFTMAX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fp8_softmax__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fp8_softmax___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_fp8_softmax__DOT__clk;
        CData/*0:0*/ tb_fp8_softmax__DOT__rst_n;
        CData/*0:0*/ tb_fp8_softmax__DOT__compute_state;
        CData/*0:0*/ tb_fp8_softmax__DOT__clr;
        CData/*0:0*/ tb_fp8_softmax__DOT__valid;
        CData/*0:0*/ tb_fp8_softmax__DOT__out_valid;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__idx_s4;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__w_s4;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s2;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s3;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s4;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s5;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s6;
        CData/*4:0*/ tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt;
        CData/*4:0*/ tb_fp8_softmax__DOT__dut__DOT__max_count_cnt;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__s7_valid;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__s8_valid;
        CData/*3:0*/ tb_fp8_softmax__DOT__dut__DOT__idx;
        CData/*3:0*/ tb_fp8_softmax__DOT__dut__DOT__w;
        CData/*3:0*/ tb_fp8_softmax__DOT__dut__DOT__idx_s9;
        CData/*3:0*/ tb_fp8_softmax__DOT__dut__DOT__w_s9;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s9;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__valid_s10;
        CData/*3:0*/ tb_fp8_softmax__DOT__dut__DOT__max_cnt;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__softmax_inc;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__softmax_full;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__done_log_sum;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__in_log_sum;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__in_compute_max;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__done_computing;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__softmax_computing;
        CData/*0:0*/ tb_fp8_softmax__DOT__dut__DOT__softmax_clr;
        CData/*5:0*/ tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state;
        CData/*5:0*/ tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        QData/*63:0*/ tb_fp8_softmax__DOT__ins;
        SData/*15:0*/ tb_fp8_softmax__DOT__con;
        VlWide<8>/*255:0*/ tb_fp8_softmax__DOT__out;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__max;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s2;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s3_sub;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sub_val;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_0;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_1;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__prelog_sum;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max_s2;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__old_max_s2;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max_s3;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max_s4;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s5_updated_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s5_old_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s6_updated_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s6_old_max;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__sub_result_s3;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__old_max_s3;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__max_s3;
    };
    struct {
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s3;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__old_max_s4;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__max_s4;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__k_s4;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s5;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__results_s5;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__result_s5;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__shifted_value_s5;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__s5_k;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s4;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s5;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s6;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s7;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s6;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s7;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s3;
        QData/*63:0*/ tb_fp8_softmax__DOT__dut__DOT__ins_s4;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s7_updated_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s8_sum;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__s8_updated_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__one_pos;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__f_frac;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__one_pos_s9;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max_s9;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__result_s10;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__one_pos_s10;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__updated_max_s10;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__log_and_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__chunk_max;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1;
        SData/*15:0*/ tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2;
        IData/*31:0*/ tb_fp8_softmax__DOT__errors;
        IData/*31:0*/ tb_fp8_softmax__DOT__max_printed;
        IData/*31:0*/ tb_fp8_softmax__DOT__max_abs_err;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane;
        IData/*31:0*/ tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk10__DOT__i;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk14__DOT__j;
        IData/*31:0*/ tb_fp8_softmax__DOT__dut__DOT__unnamedblk13__DOT__j;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 880> tb_fp8_softmax__DOT__ins_mem;
        VlUnpacked<SData/*15:0*/, 880> tb_fp8_softmax__DOT__exp_mem;
        VlUnpacked<SData/*15:0*/, 16> tb_fp8_softmax__DOT__dut__DOT__s7_stored_values;
        VlUnpacked<SData/*15:0*/, 16> tb_fp8_softmax__DOT__dut__DOT__s8_stored_values;
        VlUnpacked<SData/*15:0*/, 16> tb_fp8_softmax__DOT__dut__DOT__stored_values_s9;
        VlUnpacked<SData/*15:0*/, 16> tb_fp8_softmax__DOT__dut__DOT__stored_values_s10;
        VlUnpacked<SData/*15:0*/, 16> tb_fp8_softmax__DOT__dut__DOT__softmax_out;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf8d86298__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fp8_softmax__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fp8_softmax___024root(Vtb_fp8_softmax__Syms* symsp, const char* v__name);
    ~Vtb_fp8_softmax___024root();
    VL_UNCOPYABLE(Vtb_fp8_softmax___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

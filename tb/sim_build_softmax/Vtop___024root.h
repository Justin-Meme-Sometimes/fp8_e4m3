// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(compute_state,0,0);
        VL_IN8(clr,0,0);
        VL_IN8(valid,0,0);
        VL_OUT8(out_valid,0,0);
        CData/*0:0*/ fp8_softmax__DOT__clk;
        CData/*0:0*/ fp8_softmax__DOT__rst_n;
        CData/*0:0*/ fp8_softmax__DOT__compute_state;
        CData/*0:0*/ fp8_softmax__DOT__clr;
        CData/*0:0*/ fp8_softmax__DOT__valid;
        CData/*0:0*/ fp8_softmax__DOT__out_valid;
        SData/*15:0*/ fp8_softmax__DOT__idx_s4;
        SData/*15:0*/ fp8_softmax__DOT__w_s4;
        CData/*0:0*/ fp8_softmax__DOT__valid_s2;
        CData/*0:0*/ fp8_softmax__DOT__valid_s3;
        CData/*0:0*/ fp8_softmax__DOT__valid_s4;
        CData/*0:0*/ fp8_softmax__DOT__valid_s5;
        CData/*0:0*/ fp8_softmax__DOT__valid_s6;
        CData/*0:0*/ fp8_softmax__DOT__in_valid;
        CData/*4:0*/ fp8_softmax__DOT__s7_curr_val_stored;
        CData/*0:0*/ fp8_softmax__DOT__s7_inc_max_cnt;
        CData/*0:0*/ fp8_softmax__DOT__s6_inc_max_cnt;
        CData/*4:0*/ fp8_softmax__DOT__max_count_cnt;
        CData/*0:0*/ fp8_softmax__DOT__s7_valid;
        CData/*0:0*/ fp8_softmax__DOT__s8_valid;
        CData/*3:0*/ fp8_softmax__DOT__idx;
        CData/*3:0*/ fp8_softmax__DOT__w;
        CData/*3:0*/ fp8_softmax__DOT__idx_s9;
        CData/*3:0*/ fp8_softmax__DOT__w_s9;
        CData/*0:0*/ fp8_softmax__DOT__valid_s9;
        CData/*0:0*/ fp8_softmax__DOT__valid_s10;
        CData/*3:0*/ fp8_softmax__DOT__s7_idx;
        CData/*3:0*/ fp8_softmax__DOT__s7_w;
        CData/*3:0*/ fp8_softmax__DOT__max_cnt;
        CData/*0:0*/ fp8_softmax__DOT__softmax_inc;
        CData/*0:0*/ fp8_softmax__DOT__softmax_full;
        CData/*0:0*/ fp8_softmax__DOT__done_log_sum;
        CData/*0:0*/ fp8_softmax__DOT__done_find_max;
        CData/*0:0*/ fp8_softmax__DOT__in_log_sum;
        CData/*0:0*/ fp8_softmax__DOT__in_compute_max;
        CData/*0:0*/ fp8_softmax__DOT__in_first;
        CData/*0:0*/ fp8_softmax__DOT__row_done;
        CData/*0:0*/ fp8_softmax__DOT__done_computing;
        CData/*0:0*/ fp8_softmax__DOT__fsm_start;
        CData/*0:0*/ fp8_softmax__DOT__first;
        CData/*0:0*/ fp8_softmax__DOT__softmax_computing;
        CData/*0:0*/ fp8_softmax__DOT__softmax_clr;
        CData/*0:0*/ fp8_softmax__DOT__max_count_fsm__DOT__clk;
        CData/*0:0*/ fp8_softmax__DOT__max_count_fsm__DOT__rst_n;
        CData/*0:0*/ fp8_softmax__DOT__max_count_fsm__DOT__en;
        CData/*0:0*/ fp8_softmax__DOT__max_count_fsm__DOT__clr;
        CData/*4:0*/ fp8_softmax__DOT__max_count_fsm__DOT__out;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__clk;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__rst_n;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__start;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__compute_state;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__done_find_max;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__done_log_sum;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__first;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__in_log_sum;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__in_compute_max;
        CData/*0:0*/ fp8_softmax__DOT__fsm__DOT__clr;
        CData/*5:0*/ fp8_softmax__DOT__fsm__DOT__current_state;
    };
    struct {
        CData/*5:0*/ fp8_softmax__DOT__fsm__DOT__next_state;
        CData/*3:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__3__addr;
        CData/*3:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__4__addr;
        CData/*3:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__5__addr;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN64(ins,63,0);
        VL_IN16(con,15,0);
        VL_OUTW(out,255,0,8);
        QData/*63:0*/ fp8_softmax__DOT__ins;
        SData/*15:0*/ fp8_softmax__DOT__con;
        VlWide<8>/*255:0*/ fp8_softmax__DOT__out;
        SData/*15:0*/ fp8_softmax__DOT__max;
        QData/*63:0*/ fp8_softmax__DOT__ins_s2;
        QData/*63:0*/ fp8_softmax__DOT__ins_s3_sub;
        SData/*15:0*/ fp8_softmax__DOT__sub_val;
        SData/*15:0*/ fp8_softmax__DOT__sum_0;
        SData/*15:0*/ fp8_softmax__DOT__sum_1;
        SData/*15:0*/ fp8_softmax__DOT__prelog_sum;
        SData/*15:0*/ fp8_softmax__DOT__sum;
        SData/*15:0*/ fp8_softmax__DOT__updated_max;
        SData/*15:0*/ fp8_softmax__DOT__old_max;
        SData/*15:0*/ fp8_softmax__DOT__updated_max_s2;
        SData/*15:0*/ fp8_softmax__DOT__old_max_s2;
        SData/*15:0*/ fp8_softmax__DOT__updated_max_s3;
        SData/*15:0*/ fp8_softmax__DOT__old_max_s3_p;
        SData/*15:0*/ fp8_softmax__DOT__updated_max_s4;
        SData/*15:0*/ fp8_softmax__DOT__old_max_s4_p;
        SData/*15:0*/ fp8_softmax__DOT__s5_updated_max;
        SData/*15:0*/ fp8_softmax__DOT__s5_old_max;
        SData/*15:0*/ fp8_softmax__DOT__s6_updated_max;
        SData/*15:0*/ fp8_softmax__DOT__s6_old_max;
        QData/*63:0*/ fp8_softmax__DOT__sub_result_s3;
        SData/*15:0*/ fp8_softmax__DOT__old_max_s3;
        SData/*15:0*/ fp8_softmax__DOT__max_s3;
        SData/*15:0*/ fp8_softmax__DOT__sum_s3;
        SData/*15:0*/ fp8_softmax__DOT__old_max_s4;
        SData/*15:0*/ fp8_softmax__DOT__max_s4;
        QData/*63:0*/ fp8_softmax__DOT__k_s4;
        QData/*63:0*/ fp8_softmax__DOT__ins_s5;
        QData/*63:0*/ fp8_softmax__DOT__results_s5;
        QData/*63:0*/ fp8_softmax__DOT__result_s5;
        QData/*63:0*/ fp8_softmax__DOT__shifted_value_s5;
        QData/*63:0*/ fp8_softmax__DOT__s5_k;
        SData/*15:0*/ fp8_softmax__DOT__sum_s4;
        SData/*15:0*/ fp8_softmax__DOT__sum_s5;
        SData/*15:0*/ fp8_softmax__DOT__sum_s6;
        SData/*15:0*/ fp8_softmax__DOT__sum_s7;
        SData/*15:0*/ fp8_softmax__DOT__sum_s7_pre;
        QData/*63:0*/ fp8_softmax__DOT__ins_s6;
        QData/*63:0*/ fp8_softmax__DOT__shifted_value_s6;
        QData/*63:0*/ fp8_softmax__DOT__ins_s7;
        QData/*63:0*/ fp8_softmax__DOT__ins_s3;
        QData/*63:0*/ fp8_softmax__DOT__ins_s4;
        SData/*15:0*/ fp8_softmax__DOT__s7_updated_max;
        SData/*15:0*/ fp8_softmax__DOT__s8_sum;
        SData/*15:0*/ fp8_softmax__DOT__s8_updated_max;
        SData/*15:0*/ fp8_softmax__DOT__one_pos;
        SData/*15:0*/ fp8_softmax__DOT__f;
        SData/*15:0*/ fp8_softmax__DOT__f_frac;
        SData/*15:0*/ fp8_softmax__DOT__one_pos_s9;
    };
    struct {
        SData/*15:0*/ fp8_softmax__DOT__updated_max_s9;
        SData/*15:0*/ fp8_softmax__DOT__result_s10;
        SData/*15:0*/ fp8_softmax__DOT__one_pos_s10;
        SData/*15:0*/ fp8_softmax__DOT__updated_max_s10;
        SData/*15:0*/ fp8_softmax__DOT__log_result;
        SData/*15:0*/ fp8_softmax__DOT__log_and_max;
        SData/*15:0*/ fp8_softmax__DOT__sub_s7;
        SData/*15:0*/ fp8_softmax__DOT__s7_res;
        SData/*15:0*/ fp8_softmax__DOT__rescale_factor_s7;
        SData/*8:0*/ fp8_softmax__DOT__s7_k;
        SData/*15:0*/ fp8_softmax__DOT__chunk_max;
        SData/*15:0*/ fp8_softmax__DOT__chunk_max_intermediate_1;
        SData/*15:0*/ fp8_softmax__DOT__chunk_max_intermediate_2;
        SData/*10:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__3__Vfuncout;
        SData/*10:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__4__Vfuncout;
        SData/*10:0*/ __Vfunc_fp8_softmax__DOT__exp2_lut__5__Vfuncout;
        IData/*31:0*/ fp8_softmax__DOT__shifted_value_s7;
        IData/*31:0*/ fp8_softmax__DOT__product;
        IData/*20:0*/ fp8_softmax__DOT__int_sum_s7;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk10__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk12__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk13__DOT__i;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk15__DOT__j;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk14__DOT__j;
        IData/*31:0*/ fp8_softmax__DOT__unnamedblk16__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 16> fp8_softmax__DOT__s7_stored_values;
        VlUnpacked<SData/*15:0*/, 16> fp8_softmax__DOT__s8_stored_values;
        VlUnpacked<SData/*15:0*/, 16> fp8_softmax__DOT__stored_values_s9;
        VlUnpacked<SData/*15:0*/, 16> fp8_softmax__DOT__stored_values_s10;
        VlUnpacked<SData/*15:0*/, 16> fp8_softmax__DOT__softmax_out;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ fp8_softmax__DOT__MAX_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fp8_softmax__DOT__W_BITS = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

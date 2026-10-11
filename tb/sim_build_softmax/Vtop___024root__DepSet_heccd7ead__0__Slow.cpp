// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->fp8_softmax__DOT__f = 0U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0xeU;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0xdU;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0xcU;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0xbU;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0xaU;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 9U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 8U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 7U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 6U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 5U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 4U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 3U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 2U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 1U;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 1U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 2U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 3U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 4U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 5U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 6U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 7U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 8U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 9U;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xaU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xbU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xcU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xdU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xeU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0xfU;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0x10U;
    vlSelf->fp8_softmax__DOT__fsm__DOT__first = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/juiceboy/fp8_e4m3/src/fp8_softmax.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ins = VL_RAND_RESET_Q(64);
    vlSelf->con = VL_RAND_RESET_I(16);
    vlSelf->compute_state = VL_RAND_RESET_I(1);
    vlSelf->clr = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->out);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__ins = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__con = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__compute_state = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->fp8_softmax__DOT__out);
    vlSelf->fp8_softmax__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__ins_s2 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__ins_s3_sub = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__sub_val = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_0 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_1 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__prelog_sum = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__old_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max_s2 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__old_max_s2 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max_s3 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__old_max_s3_p = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__old_max_s4_p = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s5_updated_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s5_old_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s6_updated_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s6_old_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sub_result_s3 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__old_max_s3 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__max_s3 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_s3 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__old_max_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__max_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__idx_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__w_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__k_s4 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__ins_s5 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__results_s5 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__result_s5 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__shifted_value_s5 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__s5_k = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__sum_s4 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_s5 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_s6 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_s7 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__sum_s7_pre = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__ins_s6 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__shifted_value_s6 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__ins_s7 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__ins_s3 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__ins_s4 = VL_RAND_RESET_Q(64);
    vlSelf->fp8_softmax__DOT__valid_s2 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__valid_s3 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__valid_s4 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__valid_s5 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__valid_s6 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__s7_curr_val_stored = VL_RAND_RESET_I(5);
    vlSelf->fp8_softmax__DOT__s7_inc_max_cnt = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fp8_softmax__DOT__s7_stored_values[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fp8_softmax__DOT__s6_inc_max_cnt = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max_count_cnt = VL_RAND_RESET_I(5);
    vlSelf->fp8_softmax__DOT__s7_updated_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s7_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fp8_softmax__DOT__s8_stored_values[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fp8_softmax__DOT__s8_sum = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s8_updated_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__s8_valid = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__one_pos = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__f = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__f_frac = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->fp8_softmax__DOT__w = VL_RAND_RESET_I(4);
    vlSelf->fp8_softmax__DOT__idx_s9 = VL_RAND_RESET_I(4);
    vlSelf->fp8_softmax__DOT__w_s9 = VL_RAND_RESET_I(4);
    vlSelf->fp8_softmax__DOT__one_pos_s9 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max_s9 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fp8_softmax__DOT__stored_values_s9[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fp8_softmax__DOT__valid_s9 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__result_s10 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__one_pos_s10 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__updated_max_s10 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fp8_softmax__DOT__stored_values_s10[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fp8_softmax__DOT__valid_s10 = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__log_result = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__log_and_max = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fp8_softmax__DOT__softmax_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fp8_softmax__DOT__max_cnt = VL_RAND_RESET_I(4);
    vlSelf->fp8_softmax__DOT__softmax_inc = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__softmax_full = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__done_log_sum = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__done_find_max = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__in_log_sum = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__in_compute_max = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__in_first = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__row_done = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__done_computing = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm_start = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__softmax_computing = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__softmax_clr = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__chunk_max = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__chunk_max_intermediate_1 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__chunk_max_intermediate_2 = VL_RAND_RESET_I(16);
    vlSelf->fp8_softmax__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk14__DOT__j = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk13__DOT__j = 0;
    vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__i = 0;
    vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->fp8_softmax__DOT__fsm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__compute_state = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__done_find_max = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__done_log_sum = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__in_log_sum = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__in_compute_max = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->fp8_softmax__DOT__fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->fp8_softmax__DOT__fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}

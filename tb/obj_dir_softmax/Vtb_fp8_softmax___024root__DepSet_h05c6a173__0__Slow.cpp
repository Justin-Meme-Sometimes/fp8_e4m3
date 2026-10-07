// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fp8_softmax.h for the primary calling header

#include "Vtb_fp8_softmax__pch.h"
#include "Vtb_fp8_softmax___024root.h"

VL_ATTR_COLD void Vtb_fp8_softmax___024root___eval_static(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root___eval_final(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__stl(Vtb_fp8_softmax___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fp8_softmax___024root___eval_phase__stl(Vtb_fp8_softmax___024root* vlSelf);

VL_ATTR_COLD void Vtb_fp8_softmax___024root___eval_settle(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_settle\n"); );
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
            Vtb_fp8_softmax___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fp8_softmax.sv", 19, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fp8_softmax___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__stl(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fp8_softmax___024root___stl_sequent__TOP__0(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_fp8_softmax__DOT__out[0U] = (IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                       [2U] 
                                                                       << 0x10U) 
                                                                      | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [1U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [0U]))));
    vlSelf->tb_fp8_softmax__DOT__out[1U] = ((0xffff0000U 
                                             & vlSelf->tb_fp8_softmax__DOT__out[1U]) 
                                            | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [2U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [1U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [0U]))) 
                                                       >> 0x20U)));
    vlSelf->tb_fp8_softmax__DOT__out[1U] = ((0xffffU 
                                             & vlSelf->tb_fp8_softmax__DOT__out[1U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [5U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [4U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [3U])))) 
                                               << 0x10U));
    vlSelf->tb_fp8_softmax__DOT__out[2U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                         [5U] 
                                                                         << 0x10U) 
                                                                        | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                        [4U]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                        [3U])))) 
                                             >> 0x10U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                            [5U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [4U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [3U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->tb_fp8_softmax__DOT__out[3U] = (IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                       [8U] 
                                                                       << 0x10U) 
                                                                      | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [7U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [6U]))));
    vlSelf->tb_fp8_softmax__DOT__out[4U] = ((0xffff0000U 
                                             & vlSelf->tb_fp8_softmax__DOT__out[4U]) 
                                            | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [8U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [7U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [6U]))) 
                                                       >> 0x20U)));
    vlSelf->tb_fp8_softmax__DOT__out[4U] = ((0xffffU 
                                             & vlSelf->tb_fp8_softmax__DOT__out[4U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [0xbU] 
                                                                           << 0x10U) 
                                                                          | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [0xaU]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [9U])))) 
                                               << 0x10U));
    vlSelf->tb_fp8_softmax__DOT__out[5U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                         [0xbU] 
                                                                         << 0x10U) 
                                                                        | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                        [0xaU]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                        [9U])))) 
                                             >> 0x10U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                            [0xbU] 
                                                                            << 0x10U) 
                                                                           | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [0xaU]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [9U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->tb_fp8_softmax__DOT__out[6U] = (IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                       [0xeU] 
                                                                       << 0x10U) 
                                                                      | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [0xdU]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                      [0xcU]))));
    vlSelf->tb_fp8_softmax__DOT__out[7U] = ((0xffff0000U 
                                             & vlSelf->tb_fp8_softmax__DOT__out[7U]) 
                                            | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                           [0xeU] 
                                                                           << 0x10U) 
                                                                          | vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [0xdU]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                                                          [0xcU]))) 
                                                       >> 0x20U)));
    vlSelf->tb_fp8_softmax__DOT__out[7U] = ((0xffffU 
                                             & vlSelf->tb_fp8_softmax__DOT__out[7U]) 
                                            | (vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out
                                               [0xfU] 
                                               << 0x10U));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr = 0U;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max = 0U;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum = 0U;
    if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                if ((4U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr = 1U;
                }
            }
            if ((3U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__out_valid)))) {
                    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum = 1U;
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
            if ((0x10U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max = 1U;
            }
        }
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max 
        = (0xffffU & (((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10) 
                       + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10)) 
                      + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max)));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state 
        = vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state;
    if ((0U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state 
            = (((IData)(vlSelf->tb_fp8_softmax__DOT__compute_state) 
                & (IData)(vlSelf->tb_fp8_softmax__DOT__valid))
                ? 2U : 0U);
    } else if ((2U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state 
            = ((0x10U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))
                ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state 
            = ((IData)(vlSelf->tb_fp8_softmax__DOT__out_valid)
                ? 4U : 3U);
    } else if ((4U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0U;
    if ((0x8000U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 9U;
    }
    if ((0x100U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 8U;
    }
    if ((0x80U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 7U;
    }
    if ((0x40U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 6U;
    }
    if ((0x20U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 5U;
    }
    if ((0x10U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 4U;
    }
    if ((8U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 3U;
    }
    if ((4U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 2U;
    }
    if ((2U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = 1U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac = 
        (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum), (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos)));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx = (7U 
                                                  & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac) 
                                                     >> 4U));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__w = (0xfU 
                                                & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1 
        = (0xffffU & (VL_GTS_III(16, (0xffffU & (IData)(vlSelf->tb_fp8_softmax__DOT__ins)), 
                                 (0xffffU & (IData)(
                                                    (vlSelf->tb_fp8_softmax__DOT__ins 
                                                     >> 0x10U))))
                       ? (IData)(vlSelf->tb_fp8_softmax__DOT__ins)
                       : (IData)((vlSelf->tb_fp8_softmax__DOT__ins 
                                  >> 0x10U))));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2 
        = (0xffffU & (VL_GTS_III(16, (0xffffU & (IData)(
                                                        (vlSelf->tb_fp8_softmax__DOT__ins 
                                                         >> 0x20U))), 
                                 (0xffffU & (IData)(
                                                    (vlSelf->tb_fp8_softmax__DOT__ins 
                                                     >> 0x30U))))
                       ? (IData)((vlSelf->tb_fp8_softmax__DOT__ins 
                                  >> 0x20U)) : (IData)(
                                                       (vlSelf->tb_fp8_softmax__DOT__ins 
                                                        >> 0x30U))));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max 
        = (((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1) 
            > (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2))
            ? (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1)
            : (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max 
        = ((0U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))
            ? (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max)
            : (((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max) 
                > (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max))
                ? (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max)
                : (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max)));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_1 = 
        (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6) 
                    + (IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                               >> 0x10U))));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_0 = 
        (0xffffU & ((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                             >> 0x20U)) + (IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                                                   >> 0x30U))));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum 
        = (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_0) 
                      + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_1)));
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre 
        = (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum) 
                      + VL_SHIFTR_III(16,16,16, (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7), 
                                      (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max) 
                                                  - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max))))));
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root___eval_stl(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_fp8_softmax___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root___eval_triggers__stl(Vtb_fp8_softmax___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fp8_softmax___024root___eval_phase__stl(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fp8_softmax___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fp8_softmax___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__act(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fp8_softmax.clk or negedge tb_fp8_softmax.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_fp8_softmax.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__nba(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fp8_softmax.clk or negedge tb_fp8_softmax.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_fp8_softmax.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fp8_softmax___024root___ctor_var_reset(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_fp8_softmax__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__ins = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__con = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__compute_state = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_fp8_softmax__DOT__out);
    vlSelf->tb_fp8_softmax__DOT__out_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 880; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__ins_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 880; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__exp_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__errors = 0;
    vlSelf->tb_fp8_softmax__DOT__max_printed = 0;
    vlSelf->tb_fp8_softmax__DOT__max_abs_err = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 0;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3_sub = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_val = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_0 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_1 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s3 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s3 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s5 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s4 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s6 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s7 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 = VL_RAND_RESET_Q(64);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s3 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored = VL_RAND_RESET_I(5);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt = VL_RAND_RESET_I(5);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__w = VL_RAND_RESET_I(4);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s9 = VL_RAND_RESET_I(4);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s9 = VL_RAND_RESET_I(4);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s10 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10 = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_inc = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_full = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__done_log_sum = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__done_computing = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_computing = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2 = VL_RAND_RESET_I(16);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk14__DOT__j = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk13__DOT__j = 0;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state = VL_RAND_RESET_I(6);
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

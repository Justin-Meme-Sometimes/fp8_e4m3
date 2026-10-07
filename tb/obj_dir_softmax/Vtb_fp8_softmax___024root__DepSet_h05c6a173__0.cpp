// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fp8_softmax.h for the primary calling header

#include "Vtb_fp8_softmax__pch.h"
#include "Vtb_fp8_softmax___024root.h"

VlCoroutine Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__0(Vtb_fp8_softmax___024root* vlSelf);
VlCoroutine Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__1(Vtb_fp8_softmax___024root* vlSelf);

void Vtb_fp8_softmax___024root___eval_initial(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0 
        = vlSelf->tb_fp8_softmax__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__rst_n__0 
        = vlSelf->tb_fp8_softmax__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__1(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_fp8_softmax.sv", 
                                           53);
        vlSelf->tb_fp8_softmax__DOT__clk = (1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_fp8_softmax___024root___act_sequent__TOP__0(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___act_sequent__TOP__0\n"); );
    // Body
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
}

void Vtb_fp8_softmax___024root___eval_act(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fp8_softmax___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_fp8_softmax___024root___nba_sequent__TOP__0(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr = 0;
    SData/*10:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr = 0;
    SData/*10:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr = 0;
    SData/*9:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr = 0;
    SData/*9:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr = 0;
    SData/*9:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr;
    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr = 0;
    CData/*4:0*/ __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored;
    __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0;
    __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1;
    __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2;
    __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3;
    __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v1;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v2;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v3;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v4;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v5;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v5 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v6;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v6 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v7;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v7 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v8;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v8 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v9;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v9 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v10;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v10 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v11;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v11 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v12;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v12 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v13;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v13 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v14;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v14 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v15;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v15 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v16;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v16 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v1;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v2;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v3;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v4;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v5;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v5 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v6;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v6 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v7;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v7 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v8;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v8 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v9;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v9 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v10;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v10 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v11;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v11 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v12;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v12 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v13;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v13 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v14;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v14 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v15;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v15 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v16;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v16 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v1;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v2;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v3;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v4;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v5;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v5 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v6;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v6 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v7;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v7 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v8;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v8 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v9;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v9 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v10;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v10 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v11;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v11 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v12;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v12 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v13;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v13 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v14;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v14 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v15;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v15 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v16;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v16 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v1;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v2;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v3;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v4;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v5;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v5 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v6;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v6 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v7;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v7 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v8;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v8 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v9;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v9 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v10;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v10 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v11;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v11 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v12;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v12 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v13;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v13 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v14;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v14 = 0;
    SData/*15:0*/ __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v15;
    __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v15 = 0;
    CData/*0:0*/ __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v16;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v16 = 0;
    CData/*4:0*/ __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt;
    __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt = 0;
    // Body
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v16 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v16 = 0U;
    __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt 
        = vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 = 0U;
    __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored 
        = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v16 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0 = 0U;
    __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v16 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__rst_n)))) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk2__DOT__i = 4U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk8__DOT__i = 4U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk10__DOT__i = 4U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk13__DOT__j = 0x10U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s7 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s3 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s3 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3 = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__out_valid = ((IData)(vlSelf->tb_fp8_softmax__DOT__rst_n) 
                                              && (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10));
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk3__DOT__i = 4U;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk9__DOT__i = 4U;
        }
        if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr)))) {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk11__DOT__i = 4U;
            }
        }
        if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk5__DOT__i = 4U;
            }
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk14__DOT__j = 0x10U;
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid) {
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0U];
            __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0 = 1U;
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v1 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [1U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v2 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [2U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v3 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [3U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v4 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [4U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v5 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [5U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [6U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v7 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [7U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v8 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [8U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [9U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xaU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v11 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xbU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v12 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xcU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v13 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xdU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v14 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xeU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v15 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values
                [0xfU];
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid) {
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0U];
            __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0 = 1U;
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v1 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [1U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v2 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [2U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v3 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [3U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v4 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [4U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v5 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [5U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [6U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v7 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [7U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v8 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [8U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [9U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xaU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v11 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xbU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v12 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xcU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v13 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xdU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v14 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xeU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v15 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values
                [0xfU];
        }
    } else {
        __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v16 = 1U;
        __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v16 = 1U;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v0;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[1U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v1;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[2U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[3U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v3;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[4U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v4;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[5U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v5;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[6U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v6;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[7U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v7;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[8U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v8;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[9U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v9;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xaU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v10;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xbU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v11;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xcU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v12;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xdU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v13;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xeU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v14;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xfU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v15;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s8_stored_values__v16) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[1U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[2U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[3U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[4U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[5U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[6U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[7U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[8U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[9U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xaU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xbU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xcU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xdU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xeU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0xfU] = 0U;
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr) {
            __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt = 0U;
            __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored = 0U;
        } else {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt) {
                __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt 
                    = (0x1fU & ((IData)(4U) + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt)));
            }
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 
                    = (0xffffU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6));
                __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 = 1U;
                __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0 
                    = (0xfU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored));
                __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1 
                    = (0xffffU & (IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 
                                          >> 0x10U)));
                __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored)));
                __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2 
                    = (0xffffU & (IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 
                                          >> 0x20U)));
                __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2 
                    = (0xfU & ((IData)(2U) + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored)));
                __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3 
                    = (0xffffU & (IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 
                                          >> 0x30U)));
                __Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3 
                    = (0xfU & ((IData)(3U) + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored)));
                if ((0x10U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
                    __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored 
                        = (0x1fU & ((IData)(4U) + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored)));
                }
            }
        }
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt 
            = __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt;
    } else {
        __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt 
            = __Vdly__tb_fp8_softmax__DOT__dut__DOT__max_count_cnt;
        __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored = 0U;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[__Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v0;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[__Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v1;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[__Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[__Vdlyvdim0__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__s7_stored_values__v3;
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10) {
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0 = 1U;
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v1 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [1U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v2 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [2U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v3 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [3U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v4 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [4U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v5 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [5U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v6 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [6U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v7 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [7U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v8 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [8U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v9 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [9U] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v10 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xaU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v11 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xbU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v12 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xcU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v13 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xdU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v14 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xeU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v15 
                = (0xffffU & (vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10
                              [0xfU] - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max)));
        }
    } else {
        __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v16 = 1U;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v0;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[1U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v1;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[2U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[3U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v3;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[4U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v4;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[5U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v5;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[6U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v6;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[7U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v7;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[8U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v8;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[9U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v9;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xaU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v10;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xbU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v11;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xcU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v12;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xdU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v13;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xeU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v14;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xfU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v15;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__softmax_out__v16) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[1U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[2U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[3U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[4U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[5U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[6U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[7U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[8U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[9U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xaU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xbU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xcU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xdU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xeU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0xfU] = 0U;
    }
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
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum = 0U;
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state 
            = vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state;
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__w;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx;
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7;
            }
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                = ((0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6) 
                   | (IData)((IData)((0xffffU & VL_SHIFTR_III(16,16,16, 
                                                              (0xffffU 
                                                               & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5)), 
                                                              (0xffffU 
                                                               & (- (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k))))))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                = ((0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6) 
                   | ((QData)((IData)((0xffffU & VL_SHIFTR_III(16,16,16, 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
                                                                           >> 0x10U))), 
                                                               (0xffffU 
                                                                & (- (IData)(
                                                                             (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                                                                              >> 0x10U)))))))) 
                      << 0x10U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                = ((0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6) 
                   | ((QData)((IData)((0xffffU & VL_SHIFTR_III(16,16,16, 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
                                                                           >> 0x20U))), 
                                                               (0xffffU 
                                                                & (- (IData)(
                                                                             (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                                                                              >> 0x20U)))))))) 
                      << 0x20U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 
                = ((0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6) 
                   | ((QData)((IData)((0xffffU & VL_SHIFTR_III(16,16,16, 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
                                                                           >> 0x30U))), 
                                                               (0xffffU 
                                                                & (- (IData)(
                                                                             (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                                                                              >> 0x30U)))))))) 
                      << 0x30U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5;
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7;
        }
        if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr)))) {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt 
                    = ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6) 
                       & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre;
            }
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s9 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s9 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s6 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7 = 0U;
    }
    if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
            if ((3U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__out_valid)))) {
                    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum = 1U;
                }
            }
        }
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10 
                = (0xffffU & (VL_EXTEND_II(16,10, ([&]() {
                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr 
                                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx;
                                {
                                    if (((((((((0U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr)) 
                                               | (1U 
                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                              | (2U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                             | (3U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                            | (4U == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                           | (5U == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                          | (6U == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) 
                                         | (7U == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr)))) {
                                        if ((0U == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0U;
                                            goto __Vlabel1;
                                        } else if (
                                                   (1U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0xaeU;
                                            goto __Vlabel1;
                                        } else if (
                                                   (2U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x14aU;
                                            goto __Vlabel1;
                                        } else if (
                                                   (3U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x1d6U;
                                            goto __Vlabel1;
                                        } else if (
                                                   (4U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x257U;
                                            goto __Vlabel1;
                                        } else if (
                                                   (5U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x2cdU;
                                            goto __Vlabel1;
                                        } else if (
                                                   (6U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x33bU;
                                            goto __Vlabel1;
                                        } else {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0x3a1U;
                                            goto __Vlabel1;
                                        }
                                    } else if ((8U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__addr))) {
                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout = 0U;
                                        goto __Vlabel1;
                                    }
                                    __Vlabel1: ;
                                }
                            }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__3__Vfuncout))) 
                              + VL_SHIFTR_III(16,16,32, 
                                              (0xffffU 
                                               & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w) 
                                                  * 
                                                  (0xffffU 
                                                   & (VL_EXTEND_II(16,10, 
                                                                   ([&]() {
                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr 
                                                        = 
                                                        (0xfU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx)));
                                                    {
                                                        if (
                                                            ((((((((0U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr)) 
                                                                   | (1U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                                  | (2U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                                 | (3U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                                | (4U 
                                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                               | (5U 
                                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                              | (6U 
                                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) 
                                                             | (7U 
                                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr)))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0U;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (1U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0xaeU;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (2U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x14aU;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x1d6U;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (4U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x257U;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (5U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x2cdU;
                                                                goto __Vlabel2;
                                                            } else if (
                                                                       (6U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x33bU;
                                                                goto __Vlabel2;
                                                            } else {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0x3a1U;
                                                                goto __Vlabel2;
                                                            }
                                                        } else if (
                                                                   (8U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__addr))) {
                                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout = 0U;
                                                            goto __Vlabel2;
                                                        }
                                                        __Vlabel2: ;
                                                    }
                                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__4__Vfuncout))) 
                                                      - 
                                                      VL_EXTEND_II(16,10, 
                                                                   ([&]() {
                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr 
                                                        = vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx;
                                                    {
                                                        if (
                                                            ((((((((0U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr)) 
                                                                   | (1U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                                  | (2U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                                 | (3U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                                | (4U 
                                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                               | (5U 
                                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                              | (6U 
                                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) 
                                                             | (7U 
                                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr)))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0U;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (1U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0xaeU;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (2U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x14aU;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x1d6U;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (4U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x257U;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (5U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x2cdU;
                                                                goto __Vlabel3;
                                                            } else if (
                                                                       (6U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x33bU;
                                                                goto __Vlabel3;
                                                            } else {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0x3a1U;
                                                                goto __Vlabel3;
                                                            }
                                                        } else if (
                                                                   (8U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__addr))) {
                                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout = 0U;
                                                            goto __Vlabel3;
                                                        }
                                                        __Vlabel3: ;
                                                    }
                                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__log2_lut__5__Vfuncout))))))), 4U)));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9;
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0U];
            __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0 = 1U;
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v1 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [1U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v2 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [2U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v3 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [3U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v4 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [4U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v5 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [5U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [6U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v7 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [7U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v8 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [8U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [9U];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xaU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v11 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xbU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v12 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xcU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v13 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xdU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v14 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xeU];
            __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v15 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9
                [0xfU];
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s10 = 0U;
        __Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v16 = 1U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10 = 0U;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v0;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[1U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v1;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[2U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[3U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v3;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[4U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v4;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[5U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v5;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[6U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v6;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[7U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v7;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[8U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v8;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[9U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v9;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xaU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v10;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xbU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v11;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xcU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v12;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xdU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v13;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xeU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v14;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xfU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v15;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s9__v16) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[1U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[2U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[3U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[4U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[5U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[6U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[7U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[8U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[9U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xaU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xbU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xcU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xdU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xeU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0xfU] = 0U;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v0;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[1U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v1;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[2U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[3U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v3;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[4U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v4;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[5U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v5;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[6U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v6;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[7U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v7;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[8U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v8;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[9U] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v9;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xaU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v10;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xbU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v11;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xcU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v12;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xdU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v13;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xeU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v14;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xfU] 
            = __Vdlyvval__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v15;
    }
    if (__Vdlyvset__tb_fp8_softmax__DOT__dut__DOT__stored_values_s10__v16) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[1U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[2U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[3U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[4U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[5U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[6U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[7U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[8U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[9U] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xaU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xbU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xcU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xdU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xeU] = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0xfU] = 0U;
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5;
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9 = 0U;
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
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max;
        }
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid 
        = ((IData)(vlSelf->tb_fp8_softmax__DOT__rst_n) 
           && (0x10U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored)));
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr)))) {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max;
            }
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr = 0U;
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
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre 
        = (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum) 
                      + VL_SHIFTR_III(16,16,16, (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7), 
                                      (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max) 
                                                  - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max))))));
    if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                if ((4U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
                    vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr = 1U;
                }
            }
        }
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s4;
            }
            VL_ASSIGNSEL_QI(64,16,0U, vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5, 
                            (0xffffU & (VL_EXTEND_II(16,11, 
                                                     ([&]() {
                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr 
                                        = (0xfU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4));
                                    {
                                        if ((((((((
                                                   (0U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)) 
                                                   | (1U 
                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                  | (2U 
                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                 | (3U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                | (4U 
                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                               | (5U 
                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                              | (6U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                             | (7U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)))) {
                                            if ((0U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x400U;
                                                goto __Vlabel4;
                                            } else if (
                                                       (1U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x45dU;
                                                goto __Vlabel4;
                                            } else if (
                                                       (2U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x4c2U;
                                                goto __Vlabel4;
                                            } else if (
                                                       (3U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x530U;
                                                goto __Vlabel4;
                                            } else if (
                                                       (4U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x5a8U;
                                                goto __Vlabel4;
                                            } else if (
                                                       (5U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x62bU;
                                                goto __Vlabel4;
                                            } else if (
                                                       (6U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x6baU;
                                                goto __Vlabel4;
                                            } else {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x756U;
                                                goto __Vlabel4;
                                            }
                                        } else if (
                                                   (8U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0U;
                                            goto __Vlabel4;
                                        }
                                        __Vlabel4: ;
                                    }
                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout))) 
                                        + VL_SHIFTR_III(16,16,32, 
                                                        (0xffffU 
                                                         & ((0xfU 
                                                             & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4)) 
                                                            * 
                                                            (0xffffU 
                                                             & (VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4)));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x400U;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x45dU;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x530U;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x62bU;
                                                                    goto __Vlabel5;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x6baU;
                                                                    goto __Vlabel5;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x756U;
                                                                    goto __Vlabel5;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0U;
                                                                goto __Vlabel5;
                                                            }
                                                            __Vlabel5: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout))) 
                                                                - 
                                                                VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr 
                                                            = 
                                                            (0xfU 
                                                             & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x400U;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x45dU;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x530U;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x62bU;
                                                                    goto __Vlabel6;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x6baU;
                                                                    goto __Vlabel6;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x756U;
                                                                    goto __Vlabel6;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0U;
                                                                goto __Vlabel6;
                                                            }
                                                            __Vlabel6: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout))))))), 4U))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                = ((0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k) 
                   | (IData)((IData)((0xffffU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4)))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
                = ((0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5) 
                   | (IData)((IData)((0xffffU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4)))));
            VL_ASSIGNSEL_QI(64,16,0x10U, vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5, 
                            (0xffffU & (VL_EXTEND_II(16,11, 
                                                     ([&]() {
                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr 
                                        = (0xfU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                   >> 4U));
                                    {
                                        if ((((((((
                                                   (0U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)) 
                                                   | (1U 
                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                  | (2U 
                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                 | (3U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                | (4U 
                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                               | (5U 
                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                              | (6U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                             | (7U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)))) {
                                            if ((0U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x400U;
                                                goto __Vlabel7;
                                            } else if (
                                                       (1U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x45dU;
                                                goto __Vlabel7;
                                            } else if (
                                                       (2U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x4c2U;
                                                goto __Vlabel7;
                                            } else if (
                                                       (3U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x530U;
                                                goto __Vlabel7;
                                            } else if (
                                                       (4U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x5a8U;
                                                goto __Vlabel7;
                                            } else if (
                                                       (5U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x62bU;
                                                goto __Vlabel7;
                                            } else if (
                                                       (6U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x6baU;
                                                goto __Vlabel7;
                                            } else {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x756U;
                                                goto __Vlabel7;
                                            }
                                        } else if (
                                                   (8U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0U;
                                            goto __Vlabel7;
                                        }
                                        __Vlabel7: ;
                                    }
                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout))) 
                                        + VL_SHIFTR_III(16,16,32, 
                                                        (0xffffU 
                                                         & ((0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4) 
                                                                >> 4U)) 
                                                            * 
                                                            (0xffffU 
                                                             & (VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                 >> 4U)));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x400U;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x45dU;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x530U;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x62bU;
                                                                    goto __Vlabel8;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x6baU;
                                                                    goto __Vlabel8;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x756U;
                                                                    goto __Vlabel8;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0U;
                                                                goto __Vlabel8;
                                                            }
                                                            __Vlabel8: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout))) 
                                                                - 
                                                                VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                >> 4U));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x400U;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x45dU;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x530U;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x62bU;
                                                                    goto __Vlabel9;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x6baU;
                                                                    goto __Vlabel9;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x756U;
                                                                    goto __Vlabel9;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0U;
                                                                goto __Vlabel9;
                                                            }
                                                            __Vlabel9: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout))))))), 4U))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                = ((0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 
                                                          >> 0x10U))))) 
                      << 0x10U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
                = ((0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 
                                                          >> 0x10U))))) 
                      << 0x10U));
            VL_ASSIGNSEL_QI(64,16,0x20U, vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5, 
                            (0xffffU & (VL_EXTEND_II(16,11, 
                                                     ([&]() {
                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr 
                                        = (0xfU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                   >> 8U));
                                    {
                                        if ((((((((
                                                   (0U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)) 
                                                   | (1U 
                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                  | (2U 
                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                 | (3U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                | (4U 
                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                               | (5U 
                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                              | (6U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                             | (7U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)))) {
                                            if ((0U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x400U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (1U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x45dU;
                                                goto __Vlabel10;
                                            } else if (
                                                       (2U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x4c2U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (3U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x530U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (4U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x5a8U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (5U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x62bU;
                                                goto __Vlabel10;
                                            } else if (
                                                       (6U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x6baU;
                                                goto __Vlabel10;
                                            } else {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x756U;
                                                goto __Vlabel10;
                                            }
                                        } else if (
                                                   (8U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        }
                                        __Vlabel10: ;
                                    }
                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout))) 
                                        + VL_SHIFTR_III(16,16,32, 
                                                        (0xffffU 
                                                         & ((0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4) 
                                                                >> 8U)) 
                                                            * 
                                                            (0xffffU 
                                                             & (VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                 >> 8U)));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x400U;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x45dU;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x530U;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x62bU;
                                                                    goto __Vlabel11;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x6baU;
                                                                    goto __Vlabel11;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x756U;
                                                                    goto __Vlabel11;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0U;
                                                                goto __Vlabel11;
                                                            }
                                                            __Vlabel11: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout))) 
                                                                - 
                                                                VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                >> 8U));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x400U;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x45dU;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x530U;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x62bU;
                                                                    goto __Vlabel12;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x6baU;
                                                                    goto __Vlabel12;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x756U;
                                                                    goto __Vlabel12;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0U;
                                                                goto __Vlabel12;
                                                            }
                                                            __Vlabel12: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout))))))), 4U))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                = ((0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 
                                                          >> 0x20U))))) 
                      << 0x20U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
                = ((0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 
                                                          >> 0x20U))))) 
                      << 0x20U));
            VL_ASSIGNSEL_QI(64,16,0x30U, vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5, 
                            (0xffffU & (VL_EXTEND_II(16,11, 
                                                     ([&]() {
                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr 
                                        = (0xfU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                   >> 0xcU));
                                    {
                                        if ((((((((
                                                   (0U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)) 
                                                   | (1U 
                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                  | (2U 
                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                 | (3U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                                | (4U 
                                                   == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                               | (5U 
                                                  == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                              | (6U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) 
                                             | (7U 
                                                == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr)))) {
                                            if ((0U 
                                                 == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x400U;
                                                goto __Vlabel13;
                                            } else if (
                                                       (1U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x45dU;
                                                goto __Vlabel13;
                                            } else if (
                                                       (2U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x4c2U;
                                                goto __Vlabel13;
                                            } else if (
                                                       (3U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x530U;
                                                goto __Vlabel13;
                                            } else if (
                                                       (4U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x5a8U;
                                                goto __Vlabel13;
                                            } else if (
                                                       (5U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x62bU;
                                                goto __Vlabel13;
                                            } else if (
                                                       (6U 
                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x6baU;
                                                goto __Vlabel13;
                                            } else {
                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0x756U;
                                                goto __Vlabel13;
                                            }
                                        } else if (
                                                   (8U 
                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__addr))) {
                                            __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout = 0U;
                                            goto __Vlabel13;
                                        }
                                        __Vlabel13: ;
                                    }
                                }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__0__Vfuncout))) 
                                        + VL_SHIFTR_III(16,16,32, 
                                                        (0xffffU 
                                                         & ((0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4) 
                                                                >> 0xcU)) 
                                                            * 
                                                            (0xffffU 
                                                             & (VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                 >> 0xcU)));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x400U;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x45dU;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x530U;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x62bU;
                                                                    goto __Vlabel14;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x6baU;
                                                                    goto __Vlabel14;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0x756U;
                                                                    goto __Vlabel14;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout = 0U;
                                                                goto __Vlabel14;
                                                            }
                                                            __Vlabel14: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__1__Vfuncout))) 
                                                                - 
                                                                VL_EXTEND_II(16,11, 
                                                                             ([&]() {
                                                        __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr 
                                                            = 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4) 
                                                                >> 0xcU));
                                                        {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)) 
                                                                       | (1U 
                                                                          == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                      | (2U 
                                                                         == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                     | (3U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                    | (4U 
                                                                       == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                   | (5U 
                                                                      == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                  | (6U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) 
                                                                 | (7U 
                                                                    == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x400U;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (1U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x45dU;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (2U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x4c2U;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (3U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x530U;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (4U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x5a8U;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (5U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x62bU;
                                                                    goto __Vlabel15;
                                                                } else if (
                                                                           (6U 
                                                                            == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x6baU;
                                                                    goto __Vlabel15;
                                                                } else {
                                                                    __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0x756U;
                                                                    goto __Vlabel15;
                                                                }
                                                            } else if (
                                                                       (8U 
                                                                        == (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__addr))) {
                                                                __Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout = 0U;
                                                                goto __Vlabel15;
                                                            }
                                                            __Vlabel15: ;
                                                        }
                                                    }(), (IData)(__Vfunc_tb_fp8_softmax__DOT__dut__DOT__exp2_lut__2__Vfuncout))))))), 4U))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
                = ((0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 
                                                          >> 0x30U))))) 
                      << 0x30U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
                = ((0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 
                                                          >> 0x30U))))) 
                      << 0x30U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk7__DOT__i = 4U;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
            = (0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5 
            = (0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
            = (0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
            = (0xffffffffffff0000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
            = (0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5 
            = (0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
            = (0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
            = (0xffffffff0000ffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
            = (0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5 
            = (0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
            = (0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
            = (0xffff0000ffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5 
            = (0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5 
            = (0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5 
            = (0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k 
            = (0xffffffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k);
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk6__DOT__i = 4U;
    }
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))) {
            if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s3;
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3;
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3;
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p 
                    = vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p;
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4 
                    = ((0xff00U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4)) 
                       | ((0x70U & ((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                             >> 0x14U)) 
                                    << 4U)) | (7U & (IData)(
                                                            (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                             >> 4U)))));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4 
                    = ((0xffU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4)) 
                       | ((0x7000U & ((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                               >> 0x34U)) 
                                      << 0xcU)) | (0x700U 
                                                   & ((IData)(
                                                              (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                               >> 0x24U)) 
                                                      << 8U))));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4 
                    = ((0xf000U & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4)) 
                       | ((0xf00U & ((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                              >> 0x20U)) 
                                     << 8U)) | ((0xf0U 
                                                 & ((IData)(
                                                            (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                             >> 0x10U)) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3)))));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4 
                    = ((0xfffU & (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4)) 
                       | (0xf000U & ((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                              >> 0x30U)) 
                                     << 0xcU)));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 
                    = ((0xffffffff00000000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4) 
                       | (IData)((IData)(((0x1ff0000U 
                                           & ((IData)(
                                                      (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                       >> 0x17U)) 
                                              << 0x10U)) 
                                          | (0x1ffU 
                                             & (IData)(
                                                       (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                        >> 7U)))))));
                vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 
                    = ((0xffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4) 
                       | ((QData)((IData)(((0x1ff0000U 
                                            & ((IData)(
                                                       (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                        >> 0x37U)) 
                                               << 0x10U)) 
                                           | (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                                                         >> 0x27U)))))) 
                          << 0x20U));
            }
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4 = 0ULL;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored 
        = __Vdly__tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored;
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s3 
        = ((IData)(vlSelf->tb_fp8_softmax__DOT__rst_n) 
           && (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2));
    if (vlSelf->tb_fp8_softmax__DOT__rst_n) {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3 
            = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p 
            = vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2;
        if (vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max) {
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                = ((0xffffffff00000000ULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3) 
                   | (IData)((IData)(((((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 
                                                 >> 0x10U)) 
                                        - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2)) 
                                       << 0x10U) | 
                                      (0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2) 
                                                  - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2)))))));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 
                = ((0xffffffffULL & vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3) 
                   | ((QData)((IData)(((((IData)((vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 
                                                  >> 0x30U)) 
                                         - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2)) 
                                        << 0x10U) | 
                                       (0xffffU & ((IData)(
                                                           (vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 
                                                            >> 0x20U)) 
                                                   - (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2)))))) 
                      << 0x20U));
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2 
                = vlSelf->tb_fp8_softmax__DOT__valid;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__max;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 
                = vlSelf->tb_fp8_softmax__DOT__ins;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max;
            vlSelf->tb_fp8_softmax__DOT__dut__DOT__max 
                = vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max;
        }
    } else {
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2 = 0ULL;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2 = 0U;
        vlSelf->tb_fp8_softmax__DOT__dut__DOT__max = 0U;
    }
    vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max = 0U;
    if ((0U != (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state))) {
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
}

void Vtb_fp8_softmax___024root___eval_nba(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fp8_softmax___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fp8_softmax___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_fp8_softmax___024root___timing_resume(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8d86298__0.resume("@(posedge tb_fp8_softmax.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fp8_softmax___024root___timing_commit(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8d86298__0.commit("@(posedge tb_fp8_softmax.clk)");
    }
}

void Vtb_fp8_softmax___024root___eval_triggers__act(Vtb_fp8_softmax___024root* vlSelf);

bool Vtb_fp8_softmax___024root___eval_phase__act(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fp8_softmax___024root___eval_triggers__act(vlSelf);
    Vtb_fp8_softmax___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_fp8_softmax___024root___timing_resume(vlSelf);
        Vtb_fp8_softmax___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fp8_softmax___024root___eval_phase__nba(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fp8_softmax___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__nba(Vtb_fp8_softmax___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__act(Vtb_fp8_softmax___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fp8_softmax___024root___eval(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fp8_softmax___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fp8_softmax.sv", 19, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fp8_softmax___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_fp8_softmax.sv", 19, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_fp8_softmax___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_fp8_softmax___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fp8_softmax___024root___eval_debug_assertions(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

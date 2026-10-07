// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fp8_softmax.h for the primary calling header

#include "Vtb_fp8_softmax__pch.h"
#include "Vtb_fp8_softmax__Syms.h"
#include "Vtb_fp8_softmax___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__0(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x785f696eU;
    __Vtemp_1[2U] = 0x66746d61U;
    __Vtemp_1[3U] = 0x735f736fU;
    __Vtemp_1[4U] = 0x63746f72U;
    __Vtemp_1[5U] = 0x622f7665U;
    __Vtemp_1[6U] = 0x74U;
    VL_READMEM_N(true, 16, 880, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                 ,  &(vlSelf->tb_fp8_softmax__DOT__ins_mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x5f657870U;
    __Vtemp_2[2U] = 0x746d6178U;
    __Vtemp_2[3U] = 0x5f736f66U;
    __Vtemp_2[4U] = 0x746f7273U;
    __Vtemp_2[5U] = 0x2f766563U;
    __Vtemp_2[6U] = 0x7462U;
    VL_READMEM_N(true, 16, 880, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_2)
                 ,  &(vlSelf->tb_fp8_softmax__DOT__exp_mem)
                 , 0, ~0ULL);
    __Vtemp_3[0U] = 0x2e766364U;
    __Vtemp_3[1U] = 0x746d6178U;
    __Vtemp_3[2U] = 0x5f736f66U;
    __Vtemp_3[3U] = 0x666f726dU;
    __Vtemp_3[4U] = 0x77617665U;
    __Vtemp_3[5U] = 0x74622fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_3));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_fp8_softmax__DOT__clk = 0U;
    vlSelf->tb_fp8_softmax__DOT__rst_n = 0U;
    vlSelf->tb_fp8_softmax__DOT__con = 0U;
    vlSelf->tb_fp8_softmax__DOT__clr = 0U;
    vlSelf->tb_fp8_softmax__DOT__valid = 0U;
    vlSelf->tb_fp8_softmax__DOT__compute_state = 0U;
    vlSelf->tb_fp8_softmax__DOT__ins = 0ULL;
    vlSelf->tb_fp8_softmax__DOT__errors = 0U;
    vlSelf->tb_fp8_softmax__DOT__max_printed = 0x14U;
    vlSelf->tb_fp8_softmax__DOT__max_abs_err = 0U;
    co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fp8_softmax.clk)", 
                                                       "tb/tb_fp8_softmax.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fp8_softmax.clk)", 
                                                       "tb/tb_fp8_softmax.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fp8_softmax__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_fp8_softmax.clk)", 
                                                       "tb/tb_fp8_softmax.sv", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row = 0U;
    while (VL_GTS_III(32, 0x37U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row)) {
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base 
            = VL_MULS_III(32, (IData)(0x10U), vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row);
        vlSelf->tb_fp8_softmax__DOT__compute_state = 1U;
        vlSelf->tb_fp8_softmax__DOT__valid = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffff0000ULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | (IData)((IData)(
                                                              ((0x36fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))
                                                                ? 
                                                               vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                               [
                                                               (0x3ffU 
                                                                & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)]
                                                                : 0U))));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffff0000ffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(1U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(1U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x10U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 2U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffff0000ffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(2U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(2U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x20U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 3U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(3U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x30U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 4U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk = 1U;
        vlSelf->tb_fp8_softmax__DOT__compute_state = 1U;
        vlSelf->tb_fp8_softmax__DOT__valid = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffff0000ULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | (IData)((IData)(
                                                              ((0x36fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & ((IData)(4U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                ? 
                                                               vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                               [
                                                               (0x3ffU 
                                                                & ((IData)(4U) 
                                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                : 0U))));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffff0000ffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(5U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(5U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x10U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 2U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffff0000ffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(6U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(6U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x20U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 3U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(7U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(7U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x30U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 4U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk = 2U;
        vlSelf->tb_fp8_softmax__DOT__compute_state = 1U;
        vlSelf->tb_fp8_softmax__DOT__valid = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffff0000ULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | (IData)((IData)(
                                                              ((0x36fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & ((IData)(8U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                ? 
                                                               vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                               [
                                                               (0x3ffU 
                                                                & ((IData)(8U) 
                                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                : 0U))));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffff0000ffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(9U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(9U) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x10U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 2U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffff0000ffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(0xaU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(0xaU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x20U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 3U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(0xbU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(0xbU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x30U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 4U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk = 3U;
        vlSelf->tb_fp8_softmax__DOT__compute_state = 1U;
        vlSelf->tb_fp8_softmax__DOT__valid = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffff0000ULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | (IData)((IData)(
                                                              ((0x36fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & ((IData)(0xcU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                ? 
                                                               vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                               [
                                                               (0x3ffU 
                                                                & ((IData)(0xcU) 
                                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                : 0U))));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 1U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffff0000ffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(0xdU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(0xdU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x10U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 2U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffff0000ffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(0xeU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(0xeU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x20U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 3U;
        vlSelf->tb_fp8_softmax__DOT__ins = ((0xffffffffffffULL 
                                             & vlSelf->tb_fp8_softmax__DOT__ins) 
                                            | ((QData)((IData)(
                                                               ((0x36fU 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & ((IData)(0xfU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                 ? 
                                                                vlSelf->tb_fp8_softmax__DOT__ins_mem
                                                                [
                                                                (0x3ffU 
                                                                 & ((IData)(0xfU) 
                                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                 : 0U))) 
                                               << 0x30U));
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane = 4U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk = 4U;
        vlSelf->tb_fp8_softmax__DOT__compute_state = 0U;
        vlSelf->tb_fp8_softmax__DOT__valid = 0U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc = 0U;
        while ((1U & (~ (IData)(vlSelf->tb_fp8_softmax__DOT__out_valid)))) {
            co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_fp8_softmax.clk)", 
                                                               "tb/tb_fp8_softmax.sv", 
                                                               99);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc 
                = ((IData)(1U) + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc);
            if (VL_UNLIKELY(VL_LTS_III(32, 0xc8U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc))) {
                VL_WRITEF("TIMEOUT waiting for out_valid on row %0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row);
                VL_FINISH_MT("tb/tb_fp8_softmax.sv", 103, "");
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[0U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=0 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[0U]),
                          16,((0x36fU >= (0x3ffU & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[0U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(1U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=1 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[0U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 2U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[1U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(2U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=2 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[1U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(2U) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(2U) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 3U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[1U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(3U) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(3U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=3 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[1U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(3U) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 4U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[2U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(4U) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(4U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=4 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[2U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(4U) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(4U) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 5U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[2U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(5U) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(5U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=5 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[2U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(5U) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(5U) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 6U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[3U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(6U) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(6U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=6 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[3U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(6U) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(6U) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 7U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[3U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(7U) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(7U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=7 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[3U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(7U) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(7U) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 8U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[4U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(8U) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(8U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=8 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[4U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(8U) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(8U) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 9U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[4U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(9U) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(9U) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=9 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[4U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(9U) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(9U) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xaU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[5U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(0xaU) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=10 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[5U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(0xaU) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(0xaU) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xbU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[5U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xbU) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(0xbU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=11 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[5U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(0xbU) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xcU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[6U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(0xcU) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=12 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[6U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(0xcU) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(0xcU) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xdU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[6U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xdU) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(0xdU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=13 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[6U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(0xdU) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xeU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (0xffffU & vlSelf->tb_fp8_softmax__DOT__out[7U])) 
               - VL_EXTENDS_II(32,16, ((0x36fU >= (0x3ffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                        ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                       [(0x3ffU & ((IData)(0xeU) 
                                                   + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                        : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=14 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(0xffffU & vlSelf->tb_fp8_softmax__DOT__out[7U]),
                          16,((0x36fU >= (0x3ffU & 
                                          ((IData)(0xeU) 
                                           + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                               ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                              [(0x3ffU & ((IData)(0xeU) 
                                          + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                               : 0U),32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0xfU;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
            = (VL_EXTENDS_II(32,16, (vlSelf->tb_fp8_softmax__DOT__out[7U] 
                                     >> 0x10U)) - VL_EXTENDS_II(32,16, 
                                                                ((0x36fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xfU) 
                                                                      + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                                                  ? 
                                                                 vlSelf->tb_fp8_softmax__DOT__exp_mem
                                                                 [
                                                                 (0x3ffU 
                                                                  & ((IData)(0xfU) 
                                                                     + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                                                  : 0U)));
        if (VL_GTS_III(32, 0U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff 
                = (- vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
        }
        if (VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff, vlSelf->tb_fp8_softmax__DOT__max_abs_err)) {
            vlSelf->tb_fp8_softmax__DOT__max_abs_err 
                = vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff;
        }
        if (VL_LTS_III(32, 4U, vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff)) {
            vlSelf->tb_fp8_softmax__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tb_fp8_softmax__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
                VL_WRITEF("MISMATCH row=%0d lane=15 got=%0d expected=%0d diff=%0d\n",
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row,
                          16,(vlSelf->tb_fp8_softmax__DOT__out[7U] 
                              >> 0x10U),16,((0x36fU 
                                             >= (0x3ffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base)))
                                             ? vlSelf->tb_fp8_softmax__DOT__exp_mem
                                            [(0x3ffU 
                                              & ((IData)(0xfU) 
                                                 + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base))]
                                             : 0U),
                          32,vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff);
            }
        }
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane = 0x10U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           119);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           119);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hf8d86298__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_fp8_softmax.clk)", 
                                                           "tb/tb_fp8_softmax.sv", 
                                                           119);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row 
            = ((IData)(1U) + vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row);
    }
    VL_WRITEF("---\nTotal rows: 55  Errors: %0d  Max |err| (Q8.7 LSBs): %0d\n",
              32,vlSelf->tb_fp8_softmax__DOT__errors,
              32,vlSelf->tb_fp8_softmax__DOT__max_abs_err);
    if (VL_UNLIKELY(VL_GTS_III(32, vlSelf->tb_fp8_softmax__DOT__errors, vlSelf->tb_fp8_softmax__DOT__max_printed))) {
        VL_WRITEF("(%0d further mismatches not printed)\n",
                  32,(vlSelf->tb_fp8_softmax__DOT__errors 
                      - vlSelf->tb_fp8_softmax__DOT__max_printed));
    }
    VL_FINISH_MT("tb/tb_fp8_softmax.sv", 127, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp8_softmax___024root___dump_triggers__act(Vtb_fp8_softmax___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fp8_softmax___024root___eval_triggers__act(Vtb_fp8_softmax___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_fp8_softmax__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_fp8_softmax__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_fp8_softmax__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__clk__0 
        = vlSelf->tb_fp8_softmax__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_fp8_softmax__DOT__rst_n__0 
        = vlSelf->tb_fp8_softmax__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fp8_softmax___024root___dump_triggers__act(vlSelf);
    }
#endif
}

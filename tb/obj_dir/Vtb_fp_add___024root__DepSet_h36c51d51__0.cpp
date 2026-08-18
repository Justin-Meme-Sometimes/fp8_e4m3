// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fp_add.h for the primary calling header

#include "Vtb_fp_add__pch.h"
#include "Vtb_fp_add___024root.h"

VlCoroutine Vtb_fp_add___024root___eval_initial__TOP__Vtiming__0(Vtb_fp_add___024root* vlSelf);

void Vtb_fp_add___024root___eval_initial(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_initial\n"); );
    // Body
    Vtb_fp_add___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_fp_add___024root___eval_initial__TOP__Vtiming__0(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_fp_add__DOT__unnamedblk1__DOT__errors;
    tb_fp_add__DOT__unnamedblk1__DOT__errors = 0;
    IData/*31:0*/ tb_fp_add__DOT__unnamedblk1__DOT__max_printed;
    tb_fp_add__DOT__unnamedblk1__DOT__max_printed = 0;
    IData/*31:0*/ tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x746f7273U;
    __Vtemp_1[2U] = 0x2f766563U;
    __Vtemp_1[3U] = 0x7462U;
    VL_READMEM_N(true, 24, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->tb_fp_add__DOT__vectors)
                 , 0, ~0ULL);
    tb_fp_add__DOT__unnamedblk1__DOT__errors = 0U;
    tb_fp_add__DOT__unnamedblk1__DOT__max_printed = 0x14U;
    tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x10000U, tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        vlSelf->tb_fp_add__DOT__a = (0xffU & (vlSelf->tb_fp_add__DOT__vectors
                                              [(0xffffU 
                                                & tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                                              >> 0x10U));
        vlSelf->tb_fp_add__DOT__b = (0xffU & (vlSelf->tb_fp_add__DOT__vectors
                                              [(0xffffU 
                                                & tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)] 
                                              >> 8U));
        vlSelf->tb_fp_add__DOT__unnamedblk1__DOT__expected 
            = (0xffU & vlSelf->tb_fp_add__DOT__vectors
               [(0xffffU & tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/tb_fp_add.sv", 
                                           36);
        if (((IData)(vlSelf->tb_fp_add__DOT__result) 
             != (IData)(vlSelf->tb_fp_add__DOT__unnamedblk1__DOT__expected))) {
            tb_fp_add__DOT__unnamedblk1__DOT__errors 
                = ((IData)(1U) + tb_fp_add__DOT__unnamedblk1__DOT__errors);
            if (VL_UNLIKELY(VL_LTES_III(32, tb_fp_add__DOT__unnamedblk1__DOT__errors, tb_fp_add__DOT__unnamedblk1__DOT__max_printed))) {
                VL_WRITEF("MISMATCH a=%02x b=%02x got=%02x expected=%02x\n",
                          8,vlSelf->tb_fp_add__DOT__a,
                          8,(IData)(vlSelf->tb_fp_add__DOT__b),
                          8,vlSelf->tb_fp_add__DOT__result,
                          8,(IData)(vlSelf->tb_fp_add__DOT__unnamedblk1__DOT__expected));
            }
        }
        tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_fp_add__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF("---\nTotal: 65536  Errors: %0d\n",32,
              tb_fp_add__DOT__unnamedblk1__DOT__errors);
    if (VL_UNLIKELY(VL_GTS_III(32, tb_fp_add__DOT__unnamedblk1__DOT__errors, tb_fp_add__DOT__unnamedblk1__DOT__max_printed))) {
        VL_WRITEF("(%0d further mismatches not printed)\n",
                  32,(tb_fp_add__DOT__unnamedblk1__DOT__errors 
                      - tb_fp_add__DOT__unnamedblk1__DOT__max_printed));
    }
    VL_FINISH_MT("tb/tb_fp_add.sv", 51, "");
}

VL_INLINE_OPT void Vtb_fp_add___024root___act_sequent__TOP__0(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__guard;
    tb_fp_add__DOT__dut__DOT__guard = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__round;
    tb_fp_add__DOT__dut__DOT__round = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__sticky;
    tb_fp_add__DOT__dut__DOT__sticky = 0;
    CData/*4:0*/ tb_fp_add__DOT__dut__DOT__exp_r_edited;
    tb_fp_add__DOT__dut__DOT__exp_r_edited = 0;
    CData/*3:0*/ tb_fp_add__DOT__dut__DOT__rounded_frac;
    tb_fp_add__DOT__dut__DOT__rounded_frac = 0;
    CData/*2:0*/ tb_fp_add__DOT__dut__DOT__rounded_frac_edited;
    tb_fp_add__DOT__dut__DOT__rounded_frac_edited = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__is_zero_a;
    tb_fp_add__DOT__dut__DOT__is_zero_a = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__is_zero_b;
    tb_fp_add__DOT__dut__DOT__is_zero_b = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__mantissa_LSB;
    tb_fp_add__DOT__dut__DOT__mantissa_LSB = 0;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__round_up;
    tb_fp_add__DOT__dut__DOT__round_up = 0;
    // Body
    tb_fp_add__DOT__dut__DOT__is_zero_a = (0U == (0x7fU 
                                                  & (IData)(vlSelf->tb_fp_add__DOT__a)));
    tb_fp_add__DOT__dut__DOT__is_zero_b = (0U == (0x7fU 
                                                  & (IData)(vlSelf->tb_fp_add__DOT__b)));
    if (((0xfU & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                  >> 3U)) > (0xfU & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                     >> 3U)))) {
        vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff 
            = (0xfU & (((IData)(vlSelf->tb_fp_add__DOT__a) 
                        >> 3U) - ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                  >> 3U)));
        vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a 
            = (0x40U | (0x38U & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                                 << 3U)));
        vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky_a 
            = ((0U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
               && ((1U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                   && ((2U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                       && ((3U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                           && (1U & ((4U == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                                      ? (IData)(vlSelf->tb_fp_add__DOT__b)
                                      : ((5U == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                                          ? (0U != 
                                             (3U & (IData)(vlSelf->tb_fp_add__DOT__b)))
                                          : ((6U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                                             || (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_fp_add__DOT__b)))))))))));
        vlSelf->tb_fp_add__DOT__dut__DOT__exp_r = (0xfU 
                                                   & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                                                      >> 3U));
        vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky 
            = vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky_a;
        vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b 
            = (0x7fU & ((0U == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                         ? (0x40U | (0x38U & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                              << 3U)))
                         : ((7U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                             ? ((0x40U | (0x38U & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                                   << 3U))) 
                                >> (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                             : 0U)));
    } else {
        vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff 
            = (0xfU & (((IData)(vlSelf->tb_fp_add__DOT__b) 
                        >> 3U) - ((IData)(vlSelf->tb_fp_add__DOT__a) 
                                  >> 3U)));
        vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky_b 
            = ((0U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
               && ((1U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                   && ((2U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                       && ((3U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                           && (1U & ((4U == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                                      ? (IData)(vlSelf->tb_fp_add__DOT__a)
                                      : ((5U == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                                          ? (0U != 
                                             (3U & (IData)(vlSelf->tb_fp_add__DOT__a)))
                                          : ((6U != (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)) 
                                             || (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->tb_fp_add__DOT__a)))))))))));
        vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b 
            = (0x40U | (0x38U & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                 << 3U)));
        vlSelf->tb_fp_add__DOT__dut__DOT__exp_r = (0xfU 
                                                   & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                                      >> 3U));
        vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky 
            = vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky_b;
        vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a 
            = ((7U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff))
                ? (0x7fU & ((0x40U | (0x38U & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                                               << 3U))) 
                            >> (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_diff)))
                : 0U);
    }
    if (((1U & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                >> 7U)) == (1U & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                                  >> 7U)))) {
        vlSelf->tb_fp_add__DOT__dut__DOT__sum = (0xffU 
                                                 & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a) 
                                                    + (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b)));
        vlSelf->tb_fp_add__DOT__dut__DOT__sign_r = 
            (1U & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                   >> 7U));
    } else if (((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a) 
                >= (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b))) {
        vlSelf->tb_fp_add__DOT__dut__DOT__sum = (0xffU 
                                                 & (((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a) 
                                                     - (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b)) 
                                                    - (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky)));
        vlSelf->tb_fp_add__DOT__dut__DOT__sign_r = 
            (1U & ((IData)(vlSelf->tb_fp_add__DOT__a) 
                   >> 7U));
    } else {
        vlSelf->tb_fp_add__DOT__dut__DOT__sum = (0xffU 
                                                 & (((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_b) 
                                                     - (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__aligned_a)) 
                                                    - (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky)));
        vlSelf->tb_fp_add__DOT__dut__DOT__sign_r = 
            (1U & ((IData)(vlSelf->tb_fp_add__DOT__b) 
                   >> 7U));
    }
    if ((0x80U & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum))) {
        vlSelf->tb_fp_add__DOT__dut__DOT__sum = (0xffU 
                                                 & (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 1U) 
                                                    | (1U 
                                                       & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum))));
        vlSelf->tb_fp_add__DOT__dut__DOT__exp_r = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r)));
    } else if ((1U & (~ ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                         >> 6U)))) {
        if ((0x20U == (0x20U & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((1U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 1U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(1U)));
            }
        } else if ((0x10U == (0x30U & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((2U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 2U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(2U)));
            }
        } else if ((8U == (0x38U & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((3U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 3U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(3U)));
            }
        } else if ((4U == (0x3cU & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((4U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 4U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(4U)));
            }
        } else if ((2U == (0x3eU & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((5U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 5U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(5U)));
            }
        } else if ((1U == (0x3fU & (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum)))) {
            if ((6U > (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))) {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum = 0U;
            } else {
                vlSelf->tb_fp_add__DOT__dut__DOT__sum 
                    = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum), 6U));
                vlSelf->tb_fp_add__DOT__dut__DOT__exp_r 
                    = (0x1fU & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r) 
                                - (IData)(6U)));
            }
        }
    }
    tb_fp_add__DOT__dut__DOT__mantissa_LSB = (1U & 
                                              ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                                               >> 3U));
    tb_fp_add__DOT__dut__DOT__guard = (1U & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                                             >> 2U));
    tb_fp_add__DOT__dut__DOT__round = (1U & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                                             >> 1U));
    tb_fp_add__DOT__dut__DOT__sticky = (1U & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                                              | (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__align_sticky)));
    tb_fp_add__DOT__dut__DOT__round_up = ((IData)(tb_fp_add__DOT__dut__DOT__guard) 
                                          & (((IData)(tb_fp_add__DOT__dut__DOT__round) 
                                              | (IData)(tb_fp_add__DOT__dut__DOT__sticky)) 
                                             | (IData)(tb_fp_add__DOT__dut__DOT__mantissa_LSB)));
    tb_fp_add__DOT__dut__DOT__rounded_frac = (0xfU 
                                              & ((7U 
                                                  & ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum) 
                                                     >> 3U)) 
                                                 + (IData)(tb_fp_add__DOT__dut__DOT__round_up)));
    tb_fp_add__DOT__dut__DOT__rounded_frac_edited = 
        (7U & (IData)(tb_fp_add__DOT__dut__DOT__rounded_frac));
    tb_fp_add__DOT__dut__DOT__exp_r_edited = (0x1fU 
                                              & ((8U 
                                                  & (IData)(tb_fp_add__DOT__dut__DOT__rounded_frac))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r))
                                                  : (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__exp_r)));
    vlSelf->tb_fp_add__DOT__result = (((IData)(tb_fp_add__DOT__dut__DOT__is_zero_a) 
                                       & (IData)(tb_fp_add__DOT__dut__DOT__is_zero_b))
                                       ? 0U : ((IData)(tb_fp_add__DOT__dut__DOT__is_zero_a)
                                                ? (IData)(vlSelf->tb_fp_add__DOT__b)
                                                : ((IData)(tb_fp_add__DOT__dut__DOT__is_zero_b)
                                                    ? (IData)(vlSelf->tb_fp_add__DOT__a)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sum))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(tb_fp_add__DOT__dut__DOT__exp_r_edited))
                                                      ? 
                                                     (0x7fU 
                                                      | ((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sign_r) 
                                                         << 7U))
                                                      : 
                                                     (((IData)(vlSelf->tb_fp_add__DOT__dut__DOT__sign_r) 
                                                       << 7U) 
                                                      | ((0x78U 
                                                          & ((IData)(tb_fp_add__DOT__dut__DOT__exp_r_edited) 
                                                             << 3U)) 
                                                         | (IData)(tb_fp_add__DOT__dut__DOT__rounded_frac_edited))))))));
}

void Vtb_fp_add___024root___eval_act(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fp_add___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fp_add___024root___eval_nba(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fp_add___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fp_add___024root___timing_resume(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fp_add___024root___eval_triggers__act(Vtb_fp_add___024root* vlSelf);

bool Vtb_fp_add___024root___eval_phase__act(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fp_add___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_fp_add___024root___timing_resume(vlSelf);
        Vtb_fp_add___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fp_add___024root___eval_phase__nba(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fp_add___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp_add___024root___dump_triggers__nba(Vtb_fp_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fp_add___024root___dump_triggers__act(Vtb_fp_add___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fp_add___024root___eval(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fp_add___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fp_add.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fp_add___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_fp_add.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_fp_add___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_fp_add___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fp_add___024root___eval_debug_assertions(Vtb_fp_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp_add___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

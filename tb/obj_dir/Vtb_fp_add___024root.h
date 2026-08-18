// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fp_add.h for the primary calling header

#ifndef VERILATED_VTB_FP_ADD___024ROOT_H_
#define VERILATED_VTB_FP_ADD___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fp_add__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fp_add___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb_fp_add__DOT__a;
    CData/*7:0*/ tb_fp_add__DOT__b;
    CData/*7:0*/ tb_fp_add__DOT__result;
    CData/*7:0*/ tb_fp_add__DOT__unnamedblk1__DOT__expected;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__sign_r;
    CData/*6:0*/ tb_fp_add__DOT__dut__DOT__aligned_a;
    CData/*6:0*/ tb_fp_add__DOT__dut__DOT__aligned_b;
    CData/*7:0*/ tb_fp_add__DOT__dut__DOT__sum;
    CData/*3:0*/ tb_fp_add__DOT__dut__DOT__exp_diff;
    CData/*4:0*/ tb_fp_add__DOT__dut__DOT__exp_r;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__align_sticky;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__align_sticky_a;
    CData/*0:0*/ tb_fp_add__DOT__dut__DOT__align_sticky_b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*23:0*/, 65536> tb_fp_add__DOT__vectors;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fp_add__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fp_add___024root(Vtb_fp_add__Syms* symsp, const char* v__name);
    ~Vtb_fp_add___024root();
    VL_UNCOPYABLE(Vtb_fp_add___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fp_add.h for the primary calling header

#include "Vtb_fp_add__pch.h"
#include "Vtb_fp_add__Syms.h"
#include "Vtb_fp_add___024root.h"

void Vtb_fp_add___024root___ctor_var_reset(Vtb_fp_add___024root* vlSelf);

Vtb_fp_add___024root::Vtb_fp_add___024root(Vtb_fp_add__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fp_add___024root___ctor_var_reset(this);
}

void Vtb_fp_add___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_fp_add___024root::~Vtb_fp_add___024root() {
}

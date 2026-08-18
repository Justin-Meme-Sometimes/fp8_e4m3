// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_FP_ADD__SYMS_H_
#define VERILATED_VTB_FP_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_fp_add.h"

// INCLUDE MODULE CLASSES
#include "Vtb_fp_add___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_fp_add__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_fp_add* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_fp_add___024root           TOP;

    // CONSTRUCTORS
    Vtb_fp_add__Syms(VerilatedContext* contextp, const char* namep, Vtb_fp_add* modelp);
    ~Vtb_fp_add__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

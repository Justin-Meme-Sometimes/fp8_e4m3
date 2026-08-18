// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fp_add__pch.h"

//============================================================
// Constructors

Vtb_fp_add::Vtb_fp_add(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fp_add__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fp_add::Vtb_fp_add(const char* _vcname__)
    : Vtb_fp_add(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fp_add::~Vtb_fp_add() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fp_add___024root___eval_debug_assertions(Vtb_fp_add___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fp_add___024root___eval_static(Vtb_fp_add___024root* vlSelf);
void Vtb_fp_add___024root___eval_initial(Vtb_fp_add___024root* vlSelf);
void Vtb_fp_add___024root___eval_settle(Vtb_fp_add___024root* vlSelf);
void Vtb_fp_add___024root___eval(Vtb_fp_add___024root* vlSelf);

void Vtb_fp_add::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fp_add::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fp_add___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fp_add___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fp_add___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fp_add___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fp_add___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fp_add::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_fp_add::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fp_add::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fp_add___024root___eval_final(Vtb_fp_add___024root* vlSelf);

VL_ATTR_COLD void Vtb_fp_add::final() {
    Vtb_fp_add___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fp_add::hierName() const { return vlSymsp->name(); }
const char* Vtb_fp_add::modelName() const { return "Vtb_fp_add"; }
unsigned Vtb_fp_add::threads() const { return 1; }
void Vtb_fp_add::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fp_add::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_fp_add::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_fp_add::trace()' called on model that was Verilated without --trace option");
}

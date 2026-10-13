// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"con",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+6,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+17,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fp8_softmax", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"MAX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+20,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+22,0,"con",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+23,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+26,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+34,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"W_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+36,0,"ins_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+38,0,"ins_s3_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+40,0,"sub_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"sum_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"prelog_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"updated_max_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"old_max_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"updated_max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"old_max_s3_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"updated_max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"old_max_s4_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"s5_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"s5_old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"s6_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"s6_old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+57,0,"sub_result_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+59,0,"old_max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"sum_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"old_max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"idx_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+66,0,"k_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+68,0,"ins_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"results_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+72,0,"result_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+74,0,"shifted_value_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+76,0,"s5_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+78,0,"sum_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"sum_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"sum_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"sum_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"sum_s7_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+83,0,"ins_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+85,0,"shifted_value_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+87,0,"ins_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+89,0,"shifted_value_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+90,0,"ins_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"ins_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+94,0,"valid_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"valid_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"valid_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"valid_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"valid_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"s7_curr_val_stored",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+101,0,"s7_inc_max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s7_stored_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+118,0,"s6_inc_max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"max_count_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"s7_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+121,0,"s7_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s8_stored_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+122+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+138,0,"s8_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"s8_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+140,0,"s8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"one_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+142,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"f_frac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"idx_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"w_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"one_pos_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"updated_max_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("stored_values_s9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+150+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+166,0,"valid_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"result_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"one_pos_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"updated_max_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("stored_values_s10", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+170+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+186,0,"valid_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"log_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"log_and_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+189,0,"sub_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+190,0,"s7_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+191,0,"rescale_factor_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+192,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"s7_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+194,0,"int_sum_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+195,0,"s7_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"s7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("softmax_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+213,0,"max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"softmax_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"softmax_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"done_log_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"done_find_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"in_log_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"in_compute_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"in_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"row_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"done_computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"fsm_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"softmax_computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"softmax_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"chunk_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+228,0,"chunk_max_intermediate_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"chunk_max_intermediate_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"done_find_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"done_log_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"first",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"in_log_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"in_compute_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+241,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("max_count_fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+242,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+263,(0x10U),32);
    bufp->fullIData(oldp+264,(4U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullQData(oldp+3,(vlSelf->ins),64);
    bufp->fullSData(oldp+5,(vlSelf->con),16);
    bufp->fullBit(oldp+6,(vlSelf->compute_state));
    bufp->fullBit(oldp+7,(vlSelf->clr));
    bufp->fullBit(oldp+8,(vlSelf->valid));
    bufp->fullWData(oldp+9,(vlSelf->out),256);
    bufp->fullBit(oldp+17,(vlSelf->out_valid));
    bufp->fullBit(oldp+18,(vlSelf->fp8_softmax__DOT__clk));
    bufp->fullBit(oldp+19,(vlSelf->fp8_softmax__DOT__rst_n));
    bufp->fullQData(oldp+20,(vlSelf->fp8_softmax__DOT__ins),64);
    bufp->fullSData(oldp+22,(vlSelf->fp8_softmax__DOT__con),16);
    bufp->fullBit(oldp+23,(vlSelf->fp8_softmax__DOT__compute_state));
    bufp->fullBit(oldp+24,(vlSelf->fp8_softmax__DOT__clr));
    bufp->fullBit(oldp+25,(vlSelf->fp8_softmax__DOT__valid));
    bufp->fullWData(oldp+26,(vlSelf->fp8_softmax__DOT__out),256);
    bufp->fullBit(oldp+34,(vlSelf->fp8_softmax__DOT__out_valid));
    bufp->fullSData(oldp+35,(vlSelf->fp8_softmax__DOT__max),16);
    bufp->fullQData(oldp+36,(vlSelf->fp8_softmax__DOT__ins_s2),64);
    bufp->fullQData(oldp+38,(vlSelf->fp8_softmax__DOT__ins_s3_sub),64);
    bufp->fullSData(oldp+40,(vlSelf->fp8_softmax__DOT__sub_val),16);
    bufp->fullSData(oldp+41,(vlSelf->fp8_softmax__DOT__sum_0),16);
    bufp->fullSData(oldp+42,(vlSelf->fp8_softmax__DOT__sum_1),16);
    bufp->fullSData(oldp+43,(vlSelf->fp8_softmax__DOT__prelog_sum),16);
    bufp->fullSData(oldp+44,(vlSelf->fp8_softmax__DOT__sum),16);
    bufp->fullSData(oldp+45,(vlSelf->fp8_softmax__DOT__updated_max),16);
    bufp->fullSData(oldp+46,(vlSelf->fp8_softmax__DOT__old_max),16);
    bufp->fullSData(oldp+47,(vlSelf->fp8_softmax__DOT__updated_max_s2),16);
    bufp->fullSData(oldp+48,(vlSelf->fp8_softmax__DOT__old_max_s2),16);
    bufp->fullSData(oldp+49,(vlSelf->fp8_softmax__DOT__updated_max_s3),16);
    bufp->fullSData(oldp+50,(vlSelf->fp8_softmax__DOT__old_max_s3_p),16);
    bufp->fullSData(oldp+51,(vlSelf->fp8_softmax__DOT__updated_max_s4),16);
    bufp->fullSData(oldp+52,(vlSelf->fp8_softmax__DOT__old_max_s4_p),16);
    bufp->fullSData(oldp+53,(vlSelf->fp8_softmax__DOT__s5_updated_max),16);
    bufp->fullSData(oldp+54,(vlSelf->fp8_softmax__DOT__s5_old_max),16);
    bufp->fullSData(oldp+55,(vlSelf->fp8_softmax__DOT__s6_updated_max),16);
    bufp->fullSData(oldp+56,(vlSelf->fp8_softmax__DOT__s6_old_max),16);
    bufp->fullQData(oldp+57,(vlSelf->fp8_softmax__DOT__sub_result_s3),64);
    bufp->fullSData(oldp+59,(vlSelf->fp8_softmax__DOT__old_max_s3),16);
    bufp->fullSData(oldp+60,(vlSelf->fp8_softmax__DOT__max_s3),16);
    bufp->fullSData(oldp+61,(vlSelf->fp8_softmax__DOT__sum_s3),16);
    bufp->fullSData(oldp+62,(vlSelf->fp8_softmax__DOT__old_max_s4),16);
    bufp->fullSData(oldp+63,(vlSelf->fp8_softmax__DOT__max_s4),16);
    bufp->fullSData(oldp+64,(vlSelf->fp8_softmax__DOT__idx_s4),16);
    bufp->fullSData(oldp+65,(vlSelf->fp8_softmax__DOT__w_s4),16);
    bufp->fullQData(oldp+66,(vlSelf->fp8_softmax__DOT__k_s4),64);
    bufp->fullQData(oldp+68,(vlSelf->fp8_softmax__DOT__ins_s5),64);
    bufp->fullQData(oldp+70,(vlSelf->fp8_softmax__DOT__results_s5),64);
    bufp->fullQData(oldp+72,(vlSelf->fp8_softmax__DOT__result_s5),64);
    bufp->fullQData(oldp+74,(vlSelf->fp8_softmax__DOT__shifted_value_s5),64);
    bufp->fullQData(oldp+76,(vlSelf->fp8_softmax__DOT__s5_k),64);
    bufp->fullSData(oldp+78,(vlSelf->fp8_softmax__DOT__sum_s4),16);
    bufp->fullSData(oldp+79,(vlSelf->fp8_softmax__DOT__sum_s5),16);
    bufp->fullSData(oldp+80,(vlSelf->fp8_softmax__DOT__sum_s6),16);
    bufp->fullSData(oldp+81,(vlSelf->fp8_softmax__DOT__sum_s7),16);
    bufp->fullSData(oldp+82,(vlSelf->fp8_softmax__DOT__sum_s7_pre),16);
    bufp->fullQData(oldp+83,(vlSelf->fp8_softmax__DOT__ins_s6),64);
    bufp->fullQData(oldp+85,(vlSelf->fp8_softmax__DOT__shifted_value_s6),64);
    bufp->fullQData(oldp+87,(vlSelf->fp8_softmax__DOT__ins_s7),64);
    bufp->fullIData(oldp+89,(vlSelf->fp8_softmax__DOT__shifted_value_s7),32);
    bufp->fullQData(oldp+90,(vlSelf->fp8_softmax__DOT__ins_s3),64);
    bufp->fullQData(oldp+92,(vlSelf->fp8_softmax__DOT__ins_s4),64);
    bufp->fullBit(oldp+94,(vlSelf->fp8_softmax__DOT__valid_s2));
    bufp->fullBit(oldp+95,(vlSelf->fp8_softmax__DOT__valid_s3));
    bufp->fullBit(oldp+96,(vlSelf->fp8_softmax__DOT__valid_s4));
    bufp->fullBit(oldp+97,(vlSelf->fp8_softmax__DOT__valid_s5));
    bufp->fullBit(oldp+98,(vlSelf->fp8_softmax__DOT__valid_s6));
    bufp->fullBit(oldp+99,(vlSelf->fp8_softmax__DOT__in_valid));
    bufp->fullCData(oldp+100,(vlSelf->fp8_softmax__DOT__s7_curr_val_stored),5);
    bufp->fullBit(oldp+101,(vlSelf->fp8_softmax__DOT__s7_inc_max_cnt));
    bufp->fullSData(oldp+102,(vlSelf->fp8_softmax__DOT__s7_stored_values[0]),16);
    bufp->fullSData(oldp+103,(vlSelf->fp8_softmax__DOT__s7_stored_values[1]),16);
    bufp->fullSData(oldp+104,(vlSelf->fp8_softmax__DOT__s7_stored_values[2]),16);
    bufp->fullSData(oldp+105,(vlSelf->fp8_softmax__DOT__s7_stored_values[3]),16);
    bufp->fullSData(oldp+106,(vlSelf->fp8_softmax__DOT__s7_stored_values[4]),16);
    bufp->fullSData(oldp+107,(vlSelf->fp8_softmax__DOT__s7_stored_values[5]),16);
    bufp->fullSData(oldp+108,(vlSelf->fp8_softmax__DOT__s7_stored_values[6]),16);
    bufp->fullSData(oldp+109,(vlSelf->fp8_softmax__DOT__s7_stored_values[7]),16);
    bufp->fullSData(oldp+110,(vlSelf->fp8_softmax__DOT__s7_stored_values[8]),16);
    bufp->fullSData(oldp+111,(vlSelf->fp8_softmax__DOT__s7_stored_values[9]),16);
    bufp->fullSData(oldp+112,(vlSelf->fp8_softmax__DOT__s7_stored_values[10]),16);
    bufp->fullSData(oldp+113,(vlSelf->fp8_softmax__DOT__s7_stored_values[11]),16);
    bufp->fullSData(oldp+114,(vlSelf->fp8_softmax__DOT__s7_stored_values[12]),16);
    bufp->fullSData(oldp+115,(vlSelf->fp8_softmax__DOT__s7_stored_values[13]),16);
    bufp->fullSData(oldp+116,(vlSelf->fp8_softmax__DOT__s7_stored_values[14]),16);
    bufp->fullSData(oldp+117,(vlSelf->fp8_softmax__DOT__s7_stored_values[15]),16);
    bufp->fullBit(oldp+118,(vlSelf->fp8_softmax__DOT__s6_inc_max_cnt));
    bufp->fullCData(oldp+119,(vlSelf->fp8_softmax__DOT__max_count_cnt),5);
    bufp->fullSData(oldp+120,(vlSelf->fp8_softmax__DOT__s7_updated_max),16);
    bufp->fullBit(oldp+121,(vlSelf->fp8_softmax__DOT__s7_valid));
    bufp->fullSData(oldp+122,(vlSelf->fp8_softmax__DOT__s8_stored_values[0]),16);
    bufp->fullSData(oldp+123,(vlSelf->fp8_softmax__DOT__s8_stored_values[1]),16);
    bufp->fullSData(oldp+124,(vlSelf->fp8_softmax__DOT__s8_stored_values[2]),16);
    bufp->fullSData(oldp+125,(vlSelf->fp8_softmax__DOT__s8_stored_values[3]),16);
    bufp->fullSData(oldp+126,(vlSelf->fp8_softmax__DOT__s8_stored_values[4]),16);
    bufp->fullSData(oldp+127,(vlSelf->fp8_softmax__DOT__s8_stored_values[5]),16);
    bufp->fullSData(oldp+128,(vlSelf->fp8_softmax__DOT__s8_stored_values[6]),16);
    bufp->fullSData(oldp+129,(vlSelf->fp8_softmax__DOT__s8_stored_values[7]),16);
    bufp->fullSData(oldp+130,(vlSelf->fp8_softmax__DOT__s8_stored_values[8]),16);
    bufp->fullSData(oldp+131,(vlSelf->fp8_softmax__DOT__s8_stored_values[9]),16);
    bufp->fullSData(oldp+132,(vlSelf->fp8_softmax__DOT__s8_stored_values[10]),16);
    bufp->fullSData(oldp+133,(vlSelf->fp8_softmax__DOT__s8_stored_values[11]),16);
    bufp->fullSData(oldp+134,(vlSelf->fp8_softmax__DOT__s8_stored_values[12]),16);
    bufp->fullSData(oldp+135,(vlSelf->fp8_softmax__DOT__s8_stored_values[13]),16);
    bufp->fullSData(oldp+136,(vlSelf->fp8_softmax__DOT__s8_stored_values[14]),16);
    bufp->fullSData(oldp+137,(vlSelf->fp8_softmax__DOT__s8_stored_values[15]),16);
    bufp->fullSData(oldp+138,(vlSelf->fp8_softmax__DOT__s8_sum),16);
    bufp->fullSData(oldp+139,(vlSelf->fp8_softmax__DOT__s8_updated_max),16);
    bufp->fullBit(oldp+140,(vlSelf->fp8_softmax__DOT__s8_valid));
    bufp->fullSData(oldp+141,(vlSelf->fp8_softmax__DOT__one_pos),16);
    bufp->fullSData(oldp+142,(vlSelf->fp8_softmax__DOT__f),16);
    bufp->fullSData(oldp+143,(vlSelf->fp8_softmax__DOT__f_frac),16);
    bufp->fullCData(oldp+144,(vlSelf->fp8_softmax__DOT__idx),4);
    bufp->fullCData(oldp+145,(vlSelf->fp8_softmax__DOT__w),4);
    bufp->fullCData(oldp+146,(vlSelf->fp8_softmax__DOT__idx_s9),4);
    bufp->fullCData(oldp+147,(vlSelf->fp8_softmax__DOT__w_s9),4);
    bufp->fullSData(oldp+148,(vlSelf->fp8_softmax__DOT__one_pos_s9),16);
    bufp->fullSData(oldp+149,(vlSelf->fp8_softmax__DOT__updated_max_s9),16);
    bufp->fullSData(oldp+150,(vlSelf->fp8_softmax__DOT__stored_values_s9[0]),16);
    bufp->fullSData(oldp+151,(vlSelf->fp8_softmax__DOT__stored_values_s9[1]),16);
    bufp->fullSData(oldp+152,(vlSelf->fp8_softmax__DOT__stored_values_s9[2]),16);
    bufp->fullSData(oldp+153,(vlSelf->fp8_softmax__DOT__stored_values_s9[3]),16);
    bufp->fullSData(oldp+154,(vlSelf->fp8_softmax__DOT__stored_values_s9[4]),16);
    bufp->fullSData(oldp+155,(vlSelf->fp8_softmax__DOT__stored_values_s9[5]),16);
    bufp->fullSData(oldp+156,(vlSelf->fp8_softmax__DOT__stored_values_s9[6]),16);
    bufp->fullSData(oldp+157,(vlSelf->fp8_softmax__DOT__stored_values_s9[7]),16);
    bufp->fullSData(oldp+158,(vlSelf->fp8_softmax__DOT__stored_values_s9[8]),16);
    bufp->fullSData(oldp+159,(vlSelf->fp8_softmax__DOT__stored_values_s9[9]),16);
    bufp->fullSData(oldp+160,(vlSelf->fp8_softmax__DOT__stored_values_s9[10]),16);
    bufp->fullSData(oldp+161,(vlSelf->fp8_softmax__DOT__stored_values_s9[11]),16);
    bufp->fullSData(oldp+162,(vlSelf->fp8_softmax__DOT__stored_values_s9[12]),16);
    bufp->fullSData(oldp+163,(vlSelf->fp8_softmax__DOT__stored_values_s9[13]),16);
    bufp->fullSData(oldp+164,(vlSelf->fp8_softmax__DOT__stored_values_s9[14]),16);
    bufp->fullSData(oldp+165,(vlSelf->fp8_softmax__DOT__stored_values_s9[15]),16);
    bufp->fullBit(oldp+166,(vlSelf->fp8_softmax__DOT__valid_s9));
    bufp->fullSData(oldp+167,(vlSelf->fp8_softmax__DOT__result_s10),16);
    bufp->fullSData(oldp+168,(vlSelf->fp8_softmax__DOT__one_pos_s10),16);
    bufp->fullSData(oldp+169,(vlSelf->fp8_softmax__DOT__updated_max_s10),16);
    bufp->fullSData(oldp+170,(vlSelf->fp8_softmax__DOT__stored_values_s10[0]),16);
    bufp->fullSData(oldp+171,(vlSelf->fp8_softmax__DOT__stored_values_s10[1]),16);
    bufp->fullSData(oldp+172,(vlSelf->fp8_softmax__DOT__stored_values_s10[2]),16);
    bufp->fullSData(oldp+173,(vlSelf->fp8_softmax__DOT__stored_values_s10[3]),16);
    bufp->fullSData(oldp+174,(vlSelf->fp8_softmax__DOT__stored_values_s10[4]),16);
    bufp->fullSData(oldp+175,(vlSelf->fp8_softmax__DOT__stored_values_s10[5]),16);
    bufp->fullSData(oldp+176,(vlSelf->fp8_softmax__DOT__stored_values_s10[6]),16);
    bufp->fullSData(oldp+177,(vlSelf->fp8_softmax__DOT__stored_values_s10[7]),16);
    bufp->fullSData(oldp+178,(vlSelf->fp8_softmax__DOT__stored_values_s10[8]),16);
    bufp->fullSData(oldp+179,(vlSelf->fp8_softmax__DOT__stored_values_s10[9]),16);
    bufp->fullSData(oldp+180,(vlSelf->fp8_softmax__DOT__stored_values_s10[10]),16);
    bufp->fullSData(oldp+181,(vlSelf->fp8_softmax__DOT__stored_values_s10[11]),16);
    bufp->fullSData(oldp+182,(vlSelf->fp8_softmax__DOT__stored_values_s10[12]),16);
    bufp->fullSData(oldp+183,(vlSelf->fp8_softmax__DOT__stored_values_s10[13]),16);
    bufp->fullSData(oldp+184,(vlSelf->fp8_softmax__DOT__stored_values_s10[14]),16);
    bufp->fullSData(oldp+185,(vlSelf->fp8_softmax__DOT__stored_values_s10[15]),16);
    bufp->fullBit(oldp+186,(vlSelf->fp8_softmax__DOT__valid_s10));
    bufp->fullSData(oldp+187,(vlSelf->fp8_softmax__DOT__log_result),16);
    bufp->fullSData(oldp+188,(vlSelf->fp8_softmax__DOT__log_and_max),16);
    bufp->fullSData(oldp+189,(vlSelf->fp8_softmax__DOT__sub_s7),16);
    bufp->fullSData(oldp+190,(vlSelf->fp8_softmax__DOT__s7_res),16);
    bufp->fullSData(oldp+191,(vlSelf->fp8_softmax__DOT__rescale_factor_s7),16);
    bufp->fullIData(oldp+192,(vlSelf->fp8_softmax__DOT__product),32);
    bufp->fullSData(oldp+193,(vlSelf->fp8_softmax__DOT__s7_k),9);
    bufp->fullIData(oldp+194,(vlSelf->fp8_softmax__DOT__int_sum_s7),21);
    bufp->fullCData(oldp+195,(vlSelf->fp8_softmax__DOT__s7_idx),4);
    bufp->fullCData(oldp+196,(vlSelf->fp8_softmax__DOT__s7_w),4);
    bufp->fullSData(oldp+197,(vlSelf->fp8_softmax__DOT__softmax_out[0]),16);
    bufp->fullSData(oldp+198,(vlSelf->fp8_softmax__DOT__softmax_out[1]),16);
    bufp->fullSData(oldp+199,(vlSelf->fp8_softmax__DOT__softmax_out[2]),16);
    bufp->fullSData(oldp+200,(vlSelf->fp8_softmax__DOT__softmax_out[3]),16);
    bufp->fullSData(oldp+201,(vlSelf->fp8_softmax__DOT__softmax_out[4]),16);
    bufp->fullSData(oldp+202,(vlSelf->fp8_softmax__DOT__softmax_out[5]),16);
    bufp->fullSData(oldp+203,(vlSelf->fp8_softmax__DOT__softmax_out[6]),16);
    bufp->fullSData(oldp+204,(vlSelf->fp8_softmax__DOT__softmax_out[7]),16);
    bufp->fullSData(oldp+205,(vlSelf->fp8_softmax__DOT__softmax_out[8]),16);
    bufp->fullSData(oldp+206,(vlSelf->fp8_softmax__DOT__softmax_out[9]),16);
    bufp->fullSData(oldp+207,(vlSelf->fp8_softmax__DOT__softmax_out[10]),16);
    bufp->fullSData(oldp+208,(vlSelf->fp8_softmax__DOT__softmax_out[11]),16);
    bufp->fullSData(oldp+209,(vlSelf->fp8_softmax__DOT__softmax_out[12]),16);
    bufp->fullSData(oldp+210,(vlSelf->fp8_softmax__DOT__softmax_out[13]),16);
    bufp->fullSData(oldp+211,(vlSelf->fp8_softmax__DOT__softmax_out[14]),16);
    bufp->fullSData(oldp+212,(vlSelf->fp8_softmax__DOT__softmax_out[15]),16);
    bufp->fullCData(oldp+213,(vlSelf->fp8_softmax__DOT__max_cnt),4);
    bufp->fullBit(oldp+214,(vlSelf->fp8_softmax__DOT__softmax_inc));
    bufp->fullBit(oldp+215,(vlSelf->fp8_softmax__DOT__softmax_full));
    bufp->fullBit(oldp+216,(vlSelf->fp8_softmax__DOT__done_log_sum));
    bufp->fullBit(oldp+217,(vlSelf->fp8_softmax__DOT__done_find_max));
    bufp->fullBit(oldp+218,(vlSelf->fp8_softmax__DOT__in_log_sum));
    bufp->fullBit(oldp+219,(vlSelf->fp8_softmax__DOT__in_compute_max));
    bufp->fullBit(oldp+220,(vlSelf->fp8_softmax__DOT__in_first));
    bufp->fullBit(oldp+221,(vlSelf->fp8_softmax__DOT__row_done));
    bufp->fullBit(oldp+222,(vlSelf->fp8_softmax__DOT__done_computing));
    bufp->fullBit(oldp+223,(vlSelf->fp8_softmax__DOT__fsm_start));
    bufp->fullBit(oldp+224,(vlSelf->fp8_softmax__DOT__first));
    bufp->fullBit(oldp+225,(vlSelf->fp8_softmax__DOT__softmax_computing));
    bufp->fullBit(oldp+226,(vlSelf->fp8_softmax__DOT__softmax_clr));
    bufp->fullSData(oldp+227,(vlSelf->fp8_softmax__DOT__chunk_max),16);
    bufp->fullSData(oldp+228,(vlSelf->fp8_softmax__DOT__chunk_max_intermediate_1),16);
    bufp->fullSData(oldp+229,(vlSelf->fp8_softmax__DOT__chunk_max_intermediate_2),16);
    bufp->fullBit(oldp+230,(vlSelf->fp8_softmax__DOT__fsm__DOT__clk));
    bufp->fullBit(oldp+231,(vlSelf->fp8_softmax__DOT__fsm__DOT__rst_n));
    bufp->fullBit(oldp+232,(vlSelf->fp8_softmax__DOT__fsm__DOT__start));
    bufp->fullBit(oldp+233,(vlSelf->fp8_softmax__DOT__fsm__DOT__compute_state));
    bufp->fullBit(oldp+234,(vlSelf->fp8_softmax__DOT__fsm__DOT__done_find_max));
    bufp->fullBit(oldp+235,(vlSelf->fp8_softmax__DOT__fsm__DOT__done_log_sum));
    bufp->fullBit(oldp+236,(vlSelf->fp8_softmax__DOT__fsm__DOT__first));
    bufp->fullBit(oldp+237,(vlSelf->fp8_softmax__DOT__fsm__DOT__in_log_sum));
    bufp->fullBit(oldp+238,(vlSelf->fp8_softmax__DOT__fsm__DOT__in_compute_max));
    bufp->fullBit(oldp+239,(vlSelf->fp8_softmax__DOT__fsm__DOT__clr));
    bufp->fullCData(oldp+240,(vlSelf->fp8_softmax__DOT__fsm__DOT__current_state),6);
    bufp->fullCData(oldp+241,(vlSelf->fp8_softmax__DOT__fsm__DOT__next_state),6);
    bufp->fullBit(oldp+242,(vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__clk));
    bufp->fullBit(oldp+243,(vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__rst_n));
    bufp->fullBit(oldp+244,(vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__en));
    bufp->fullBit(oldp+245,(vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__clr));
    bufp->fullCData(oldp+246,(vlSelf->fp8_softmax__DOT__max_count_fsm__DOT__out),5);
    bufp->fullIData(oldp+247,(vlSelf->fp8_softmax__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+248,(vlSelf->fp8_softmax__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+249,(vlSelf->fp8_softmax__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+250,(vlSelf->fp8_softmax__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+251,(vlSelf->fp8_softmax__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+252,(vlSelf->fp8_softmax__DOT__unnamedblk14__DOT__j),32);
    bufp->fullIData(oldp+253,(vlSelf->fp8_softmax__DOT__unnamedblk15__DOT__j),32);
    bufp->fullIData(oldp+254,(vlSelf->fp8_softmax__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+255,(vlSelf->fp8_softmax__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+256,(vlSelf->fp8_softmax__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+257,(vlSelf->fp8_softmax__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+258,(vlSelf->fp8_softmax__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+259,(vlSelf->fp8_softmax__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+260,(vlSelf->fp8_softmax__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+261,(vlSelf->fp8_softmax__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+262,(vlSelf->fp8_softmax__DOT__unnamedblk9__DOT__i),32);
}

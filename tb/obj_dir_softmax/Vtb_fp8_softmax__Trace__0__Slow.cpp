// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fp8_softmax__Syms.h"


VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_init_sub__TOP__0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_fp8_softmax", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+212,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+213,0,"TOLERANCE_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+215,0,"IDLE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+210,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"con",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+5,0,"compute_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+32,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"max_printed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"max_abs_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"MAX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"con",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+5,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+32,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"W_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+33,0,"max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+34,0,"ins_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,0,"ins_s3_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+219,0,"sub_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"sum_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"prelog_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"updated_max_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"old_max_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"updated_max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"old_max_s3_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"updated_max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"old_max_s4_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"s5_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"s5_old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"s6_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"s6_old_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+50,0,"sub_result_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"old_max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"max_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"sum_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"old_max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"max_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"idx_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+59,0,"k_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+61,0,"ins_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+63,0,"results_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"result_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+220,0,"shifted_value_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+67,0,"s5_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+222,0,"sum_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"sum_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"sum_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"sum_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"sum_s7_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+73,0,"ins_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+75,0,"shifted_value_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+77,0,"ins_s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"ins_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"ins_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+83,0,"valid_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"valid_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"valid_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"valid_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"valid_s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"s7_curr_val_stored",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"s7_inc_max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s7_stored_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+90+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+89,0,"s6_inc_max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"max_count_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+107,0,"s7_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+108,0,"s7_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("s8_stored_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+109+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+125,0,"s8_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+126,0,"s8_updated_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+127,0,"s8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"one_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+223,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"f_frac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"idx_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"w_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"one_pos_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"updated_max_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("stored_values_s9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+152,0,"valid_s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"result_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"one_pos_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+155,0,"updated_max_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("stored_values_s10", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+172,0,"valid_s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"log_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"log_and_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("softmax_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+224,0,"max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+225,0,"softmax_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"softmax_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"done_log_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"done_find_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"in_log_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"in_compute_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"in_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"row_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"done_computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"fsm_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"softmax_computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"softmax_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"chunk_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"chunk_max_intermediate_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"chunk_max_intermediate_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+210,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"compute_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"done_find_max",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"done_log_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"first",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"in_log_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"in_compute_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("max_count_fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+210,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+201,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+206,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+207,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+208,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"row_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"chunk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_init_top(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_init_top\n"); );
    // Body
    Vtb_fp8_softmax___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fp8_softmax___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fp8_softmax___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_register(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_fp8_softmax___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_fp8_softmax___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_fp8_softmax___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_fp8_softmax___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_const_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_const_0\n"); );
    // Init
    Vtb_fp8_softmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fp8_softmax___024root*>(voidSelf);
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fp8_softmax___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_const_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+211,(0x37U),32);
    bufp->fullIData(oldp+212,(0xaU),32);
    bufp->fullIData(oldp+213,(4U),32);
    bufp->fullIData(oldp+214,(0xc8U),32);
    bufp->fullIData(oldp+215,(3U),32);
    bufp->fullIData(oldp+216,(0x10U),32);
    bufp->fullQData(oldp+217,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3_sub),64);
    bufp->fullSData(oldp+219,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_val),16);
    bufp->fullQData(oldp+220,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s5),64);
    bufp->fullSData(oldp+222,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s4),16);
    bufp->fullSData(oldp+223,(0U),16);
    bufp->fullCData(oldp+224,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_cnt),4);
    bufp->fullBit(oldp+225,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_inc));
    bufp->fullBit(oldp+226,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_full));
    bufp->fullBit(oldp+227,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__done_log_sum));
    bufp->fullBit(oldp+228,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__done_computing));
    bufp->fullBit(oldp+229,(0U));
    bufp->fullBit(oldp+230,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_computing));
    bufp->fullIData(oldp+231,(0U),32);
    bufp->fullIData(oldp+232,(0x10U),32);
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_full_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_full_0\n"); );
    // Init
    Vtb_fp8_softmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fp8_softmax___024root*>(voidSelf);
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fp8_softmax___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fp8_softmax___024root__trace_full_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_fp8_softmax__DOT__rst_n));
    bufp->fullQData(oldp+2,(vlSelf->tb_fp8_softmax__DOT__ins),64);
    bufp->fullSData(oldp+4,(vlSelf->tb_fp8_softmax__DOT__con),16);
    bufp->fullBit(oldp+5,(vlSelf->tb_fp8_softmax__DOT__compute_state));
    bufp->fullBit(oldp+6,(vlSelf->tb_fp8_softmax__DOT__clr));
    bufp->fullBit(oldp+7,(vlSelf->tb_fp8_softmax__DOT__valid));
    bufp->fullIData(oldp+8,(vlSelf->tb_fp8_softmax__DOT__errors),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_fp8_softmax__DOT__max_printed),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_fp8_softmax__DOT__max_abs_err),32);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->tb_fp8_softmax__DOT__compute_state) 
                            & (IData)(vlSelf->tb_fp8_softmax__DOT__valid))));
    bufp->fullIData(oldp+12,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane),32);
    bufp->fullSData(oldp+19,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max),16);
    bufp->fullSData(oldp+20,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max),16);
    bufp->fullSData(oldp+21,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1),16);
    bufp->fullSData(oldp+22,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2),16);
    bufp->fullCData(oldp+23,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state),6);
    bufp->fullWData(oldp+24,(vlSelf->tb_fp8_softmax__DOT__out),256);
    bufp->fullBit(oldp+32,(vlSelf->tb_fp8_softmax__DOT__out_valid));
    bufp->fullSData(oldp+33,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max),16);
    bufp->fullQData(oldp+34,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2),64);
    bufp->fullSData(oldp+36,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_0),16);
    bufp->fullSData(oldp+37,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_1),16);
    bufp->fullSData(oldp+38,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum),16);
    bufp->fullSData(oldp+39,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum),16);
    bufp->fullSData(oldp+40,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2),16);
    bufp->fullSData(oldp+41,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2),16);
    bufp->fullSData(oldp+42,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3),16);
    bufp->fullSData(oldp+43,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p),16);
    bufp->fullSData(oldp+44,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4),16);
    bufp->fullSData(oldp+45,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p),16);
    bufp->fullSData(oldp+46,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max),16);
    bufp->fullSData(oldp+47,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max),16);
    bufp->fullSData(oldp+48,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max),16);
    bufp->fullSData(oldp+49,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max),16);
    bufp->fullQData(oldp+50,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3),64);
    bufp->fullSData(oldp+52,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3),16);
    bufp->fullSData(oldp+53,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s3),16);
    bufp->fullSData(oldp+54,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s3),16);
    bufp->fullSData(oldp+55,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4),16);
    bufp->fullSData(oldp+56,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s4),16);
    bufp->fullSData(oldp+57,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4),16);
    bufp->fullSData(oldp+58,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4),16);
    bufp->fullQData(oldp+59,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4),64);
    bufp->fullQData(oldp+61,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5),64);
    bufp->fullQData(oldp+63,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5),64);
    bufp->fullQData(oldp+65,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5),64);
    bufp->fullQData(oldp+67,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k),64);
    bufp->fullSData(oldp+69,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5),16);
    bufp->fullSData(oldp+70,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s6),16);
    bufp->fullSData(oldp+71,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7),16);
    bufp->fullSData(oldp+72,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre),16);
    bufp->fullQData(oldp+73,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6),64);
    bufp->fullQData(oldp+75,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6),64);
    bufp->fullQData(oldp+77,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s7),64);
    bufp->fullQData(oldp+79,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3),64);
    bufp->fullQData(oldp+81,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4),64);
    bufp->fullBit(oldp+83,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2));
    bufp->fullBit(oldp+84,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s3));
    bufp->fullBit(oldp+85,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4));
    bufp->fullBit(oldp+86,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5));
    bufp->fullBit(oldp+87,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6));
    bufp->fullCData(oldp+88,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored),5);
    bufp->fullBit(oldp+89,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt));
    bufp->fullSData(oldp+90,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[0]),16);
    bufp->fullSData(oldp+91,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[1]),16);
    bufp->fullSData(oldp+92,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[2]),16);
    bufp->fullSData(oldp+93,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[3]),16);
    bufp->fullSData(oldp+94,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[4]),16);
    bufp->fullSData(oldp+95,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[5]),16);
    bufp->fullSData(oldp+96,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[6]),16);
    bufp->fullSData(oldp+97,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[7]),16);
    bufp->fullSData(oldp+98,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[8]),16);
    bufp->fullSData(oldp+99,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[9]),16);
    bufp->fullSData(oldp+100,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[10]),16);
    bufp->fullSData(oldp+101,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[11]),16);
    bufp->fullSData(oldp+102,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[12]),16);
    bufp->fullSData(oldp+103,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[13]),16);
    bufp->fullSData(oldp+104,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[14]),16);
    bufp->fullSData(oldp+105,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[15]),16);
    bufp->fullCData(oldp+106,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt),5);
    bufp->fullSData(oldp+107,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max),16);
    bufp->fullBit(oldp+108,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid));
    bufp->fullSData(oldp+109,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0]),16);
    bufp->fullSData(oldp+110,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[1]),16);
    bufp->fullSData(oldp+111,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[2]),16);
    bufp->fullSData(oldp+112,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[3]),16);
    bufp->fullSData(oldp+113,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[4]),16);
    bufp->fullSData(oldp+114,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[5]),16);
    bufp->fullSData(oldp+115,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[6]),16);
    bufp->fullSData(oldp+116,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[7]),16);
    bufp->fullSData(oldp+117,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[8]),16);
    bufp->fullSData(oldp+118,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[9]),16);
    bufp->fullSData(oldp+119,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[10]),16);
    bufp->fullSData(oldp+120,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[11]),16);
    bufp->fullSData(oldp+121,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[12]),16);
    bufp->fullSData(oldp+122,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[13]),16);
    bufp->fullSData(oldp+123,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[14]),16);
    bufp->fullSData(oldp+124,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[15]),16);
    bufp->fullSData(oldp+125,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum),16);
    bufp->fullSData(oldp+126,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max),16);
    bufp->fullBit(oldp+127,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid));
    bufp->fullSData(oldp+128,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos),16);
    bufp->fullSData(oldp+129,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac),16);
    bufp->fullCData(oldp+130,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx),4);
    bufp->fullCData(oldp+131,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w),4);
    bufp->fullCData(oldp+132,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s9),4);
    bufp->fullCData(oldp+133,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s9),4);
    bufp->fullSData(oldp+134,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9),16);
    bufp->fullSData(oldp+135,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9),16);
    bufp->fullSData(oldp+136,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0]),16);
    bufp->fullSData(oldp+137,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[1]),16);
    bufp->fullSData(oldp+138,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[2]),16);
    bufp->fullSData(oldp+139,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[3]),16);
    bufp->fullSData(oldp+140,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[4]),16);
    bufp->fullSData(oldp+141,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[5]),16);
    bufp->fullSData(oldp+142,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[6]),16);
    bufp->fullSData(oldp+143,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[7]),16);
    bufp->fullSData(oldp+144,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[8]),16);
    bufp->fullSData(oldp+145,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[9]),16);
    bufp->fullSData(oldp+146,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[10]),16);
    bufp->fullSData(oldp+147,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[11]),16);
    bufp->fullSData(oldp+148,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[12]),16);
    bufp->fullSData(oldp+149,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[13]),16);
    bufp->fullSData(oldp+150,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[14]),16);
    bufp->fullSData(oldp+151,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[15]),16);
    bufp->fullBit(oldp+152,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9));
    bufp->fullSData(oldp+153,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10),16);
    bufp->fullSData(oldp+154,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10),16);
    bufp->fullSData(oldp+155,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s10),16);
    bufp->fullSData(oldp+156,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0]),16);
    bufp->fullSData(oldp+157,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[1]),16);
    bufp->fullSData(oldp+158,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[2]),16);
    bufp->fullSData(oldp+159,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[3]),16);
    bufp->fullSData(oldp+160,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[4]),16);
    bufp->fullSData(oldp+161,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[5]),16);
    bufp->fullSData(oldp+162,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[6]),16);
    bufp->fullSData(oldp+163,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[7]),16);
    bufp->fullSData(oldp+164,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[8]),16);
    bufp->fullSData(oldp+165,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[9]),16);
    bufp->fullSData(oldp+166,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[10]),16);
    bufp->fullSData(oldp+167,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[11]),16);
    bufp->fullSData(oldp+168,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[12]),16);
    bufp->fullSData(oldp+169,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[13]),16);
    bufp->fullSData(oldp+170,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[14]),16);
    bufp->fullSData(oldp+171,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[15]),16);
    bufp->fullBit(oldp+172,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10));
    bufp->fullSData(oldp+173,((0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10) 
                                          + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10)))),16);
    bufp->fullSData(oldp+174,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max),16);
    bufp->fullSData(oldp+175,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0]),16);
    bufp->fullSData(oldp+176,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[1]),16);
    bufp->fullSData(oldp+177,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[2]),16);
    bufp->fullSData(oldp+178,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[3]),16);
    bufp->fullSData(oldp+179,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[4]),16);
    bufp->fullSData(oldp+180,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[5]),16);
    bufp->fullSData(oldp+181,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[6]),16);
    bufp->fullSData(oldp+182,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[7]),16);
    bufp->fullSData(oldp+183,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[8]),16);
    bufp->fullSData(oldp+184,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[9]),16);
    bufp->fullSData(oldp+185,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[10]),16);
    bufp->fullSData(oldp+186,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[11]),16);
    bufp->fullSData(oldp+187,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[12]),16);
    bufp->fullSData(oldp+188,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[13]),16);
    bufp->fullSData(oldp+189,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[14]),16);
    bufp->fullSData(oldp+190,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[15]),16);
    bufp->fullBit(oldp+191,((0x10U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))));
    bufp->fullBit(oldp+192,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum));
    bufp->fullBit(oldp+193,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max));
    bufp->fullBit(oldp+194,((0U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))));
    bufp->fullBit(oldp+195,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr));
    bufp->fullCData(oldp+196,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state),6);
    bufp->fullIData(oldp+197,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+198,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+199,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+200,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk13__DOT__j),32);
    bufp->fullIData(oldp+201,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk14__DOT__j),32);
    bufp->fullIData(oldp+202,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+203,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+204,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+205,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+206,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+207,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+208,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+209,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk9__DOT__i),32);
    bufp->fullBit(oldp+210,(vlSelf->tb_fp8_softmax__DOT__clk));
}

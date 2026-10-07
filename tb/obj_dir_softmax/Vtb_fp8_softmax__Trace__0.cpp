// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fp8_softmax__Syms.h"


void Vtb_fp8_softmax___024root__trace_chg_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fp8_softmax___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_chg_0\n"); );
    // Init
    Vtb_fp8_softmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fp8_softmax___024root*>(voidSelf);
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_fp8_softmax___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fp8_softmax___024root__trace_chg_0_sub_0(Vtb_fp8_softmax___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_fp8_softmax__DOT__rst_n));
        bufp->chgQData(oldp+1,(vlSelf->tb_fp8_softmax__DOT__ins),64);
        bufp->chgSData(oldp+3,(vlSelf->tb_fp8_softmax__DOT__con),16);
        bufp->chgBit(oldp+4,(vlSelf->tb_fp8_softmax__DOT__compute_state));
        bufp->chgBit(oldp+5,(vlSelf->tb_fp8_softmax__DOT__clr));
        bufp->chgBit(oldp+6,(vlSelf->tb_fp8_softmax__DOT__valid));
        bufp->chgIData(oldp+7,(vlSelf->tb_fp8_softmax__DOT__errors),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_fp8_softmax__DOT__max_printed),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_fp8_softmax__DOT__max_abs_err),32);
        bufp->chgBit(oldp+10,(((IData)(vlSelf->tb_fp8_softmax__DOT__compute_state) 
                               & (IData)(vlSelf->tb_fp8_softmax__DOT__valid))));
        bufp->chgIData(oldp+11,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__row_base),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__cyc),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__diff),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__row),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__chunk),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lane),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_fp8_softmax__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__lane),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+18,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max),16);
        bufp->chgSData(oldp+19,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max),16);
        bufp->chgSData(oldp+20,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_1),16);
        bufp->chgSData(oldp+21,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__chunk_max_intermediate_2),16);
        bufp->chgCData(oldp+22,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__next_state),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgWData(oldp+23,(vlSelf->tb_fp8_softmax__DOT__out),256);
        bufp->chgBit(oldp+31,(vlSelf->tb_fp8_softmax__DOT__out_valid));
        bufp->chgSData(oldp+32,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max),16);
        bufp->chgQData(oldp+33,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s2),64);
        bufp->chgSData(oldp+35,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_0),16);
        bufp->chgSData(oldp+36,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_1),16);
        bufp->chgSData(oldp+37,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__prelog_sum),16);
        bufp->chgSData(oldp+38,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum),16);
        bufp->chgSData(oldp+39,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s2),16);
        bufp->chgSData(oldp+40,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s2),16);
        bufp->chgSData(oldp+41,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s3),16);
        bufp->chgSData(oldp+42,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3_p),16);
        bufp->chgSData(oldp+43,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s4),16);
        bufp->chgSData(oldp+44,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4_p),16);
        bufp->chgSData(oldp+45,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_updated_max),16);
        bufp->chgSData(oldp+46,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_old_max),16);
        bufp->chgSData(oldp+47,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_updated_max),16);
        bufp->chgSData(oldp+48,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s6_old_max),16);
        bufp->chgQData(oldp+49,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sub_result_s3),64);
        bufp->chgSData(oldp+51,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s3),16);
        bufp->chgSData(oldp+52,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s3),16);
        bufp->chgSData(oldp+53,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s3),16);
        bufp->chgSData(oldp+54,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__old_max_s4),16);
        bufp->chgSData(oldp+55,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_s4),16);
        bufp->chgSData(oldp+56,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s4),16);
        bufp->chgSData(oldp+57,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s4),16);
        bufp->chgQData(oldp+58,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__k_s4),64);
        bufp->chgQData(oldp+60,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s5),64);
        bufp->chgQData(oldp+62,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__results_s5),64);
        bufp->chgQData(oldp+64,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s5),64);
        bufp->chgQData(oldp+66,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s5_k),64);
        bufp->chgSData(oldp+68,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s5),16);
        bufp->chgSData(oldp+69,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s6),16);
        bufp->chgSData(oldp+70,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7),16);
        bufp->chgSData(oldp+71,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__sum_s7_pre),16);
        bufp->chgQData(oldp+72,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s6),64);
        bufp->chgQData(oldp+74,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__shifted_value_s6),64);
        bufp->chgQData(oldp+76,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s7),64);
        bufp->chgQData(oldp+78,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s3),64);
        bufp->chgQData(oldp+80,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__ins_s4),64);
        bufp->chgBit(oldp+82,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s2));
        bufp->chgBit(oldp+83,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s3));
        bufp->chgBit(oldp+84,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s4));
        bufp->chgBit(oldp+85,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s5));
        bufp->chgBit(oldp+86,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s6));
        bufp->chgCData(oldp+87,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored),5);
        bufp->chgBit(oldp+88,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_inc_max_cnt));
        bufp->chgSData(oldp+89,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[0]),16);
        bufp->chgSData(oldp+90,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[1]),16);
        bufp->chgSData(oldp+91,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[2]),16);
        bufp->chgSData(oldp+92,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[3]),16);
        bufp->chgSData(oldp+93,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[4]),16);
        bufp->chgSData(oldp+94,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[5]),16);
        bufp->chgSData(oldp+95,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[6]),16);
        bufp->chgSData(oldp+96,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[7]),16);
        bufp->chgSData(oldp+97,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[8]),16);
        bufp->chgSData(oldp+98,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[9]),16);
        bufp->chgSData(oldp+99,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[10]),16);
        bufp->chgSData(oldp+100,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[11]),16);
        bufp->chgSData(oldp+101,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[12]),16);
        bufp->chgSData(oldp+102,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[13]),16);
        bufp->chgSData(oldp+103,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[14]),16);
        bufp->chgSData(oldp+104,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_stored_values[15]),16);
        bufp->chgCData(oldp+105,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__max_count_cnt),5);
        bufp->chgSData(oldp+106,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_updated_max),16);
        bufp->chgBit(oldp+107,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_valid));
        bufp->chgSData(oldp+108,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[0]),16);
        bufp->chgSData(oldp+109,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[1]),16);
        bufp->chgSData(oldp+110,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[2]),16);
        bufp->chgSData(oldp+111,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[3]),16);
        bufp->chgSData(oldp+112,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[4]),16);
        bufp->chgSData(oldp+113,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[5]),16);
        bufp->chgSData(oldp+114,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[6]),16);
        bufp->chgSData(oldp+115,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[7]),16);
        bufp->chgSData(oldp+116,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[8]),16);
        bufp->chgSData(oldp+117,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[9]),16);
        bufp->chgSData(oldp+118,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[10]),16);
        bufp->chgSData(oldp+119,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[11]),16);
        bufp->chgSData(oldp+120,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[12]),16);
        bufp->chgSData(oldp+121,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[13]),16);
        bufp->chgSData(oldp+122,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[14]),16);
        bufp->chgSData(oldp+123,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_stored_values[15]),16);
        bufp->chgSData(oldp+124,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_sum),16);
        bufp->chgSData(oldp+125,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_updated_max),16);
        bufp->chgBit(oldp+126,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s8_valid));
        bufp->chgSData(oldp+127,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos),16);
        bufp->chgSData(oldp+128,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__f_frac),16);
        bufp->chgCData(oldp+129,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx),4);
        bufp->chgCData(oldp+130,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w),4);
        bufp->chgCData(oldp+131,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__idx_s9),4);
        bufp->chgCData(oldp+132,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__w_s9),4);
        bufp->chgSData(oldp+133,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s9),16);
        bufp->chgSData(oldp+134,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s9),16);
        bufp->chgSData(oldp+135,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[0]),16);
        bufp->chgSData(oldp+136,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[1]),16);
        bufp->chgSData(oldp+137,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[2]),16);
        bufp->chgSData(oldp+138,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[3]),16);
        bufp->chgSData(oldp+139,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[4]),16);
        bufp->chgSData(oldp+140,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[5]),16);
        bufp->chgSData(oldp+141,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[6]),16);
        bufp->chgSData(oldp+142,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[7]),16);
        bufp->chgSData(oldp+143,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[8]),16);
        bufp->chgSData(oldp+144,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[9]),16);
        bufp->chgSData(oldp+145,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[10]),16);
        bufp->chgSData(oldp+146,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[11]),16);
        bufp->chgSData(oldp+147,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[12]),16);
        bufp->chgSData(oldp+148,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[13]),16);
        bufp->chgSData(oldp+149,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[14]),16);
        bufp->chgSData(oldp+150,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s9[15]),16);
        bufp->chgBit(oldp+151,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s9));
        bufp->chgSData(oldp+152,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10),16);
        bufp->chgSData(oldp+153,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10),16);
        bufp->chgSData(oldp+154,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__updated_max_s10),16);
        bufp->chgSData(oldp+155,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[0]),16);
        bufp->chgSData(oldp+156,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[1]),16);
        bufp->chgSData(oldp+157,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[2]),16);
        bufp->chgSData(oldp+158,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[3]),16);
        bufp->chgSData(oldp+159,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[4]),16);
        bufp->chgSData(oldp+160,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[5]),16);
        bufp->chgSData(oldp+161,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[6]),16);
        bufp->chgSData(oldp+162,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[7]),16);
        bufp->chgSData(oldp+163,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[8]),16);
        bufp->chgSData(oldp+164,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[9]),16);
        bufp->chgSData(oldp+165,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[10]),16);
        bufp->chgSData(oldp+166,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[11]),16);
        bufp->chgSData(oldp+167,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[12]),16);
        bufp->chgSData(oldp+168,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[13]),16);
        bufp->chgSData(oldp+169,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[14]),16);
        bufp->chgSData(oldp+170,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__stored_values_s10[15]),16);
        bufp->chgBit(oldp+171,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__valid_s10));
        bufp->chgSData(oldp+172,((0xffffU & ((IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__one_pos_s10) 
                                             + (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__result_s10)))),16);
        bufp->chgSData(oldp+173,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__log_and_max),16);
        bufp->chgSData(oldp+174,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[0]),16);
        bufp->chgSData(oldp+175,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[1]),16);
        bufp->chgSData(oldp+176,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[2]),16);
        bufp->chgSData(oldp+177,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[3]),16);
        bufp->chgSData(oldp+178,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[4]),16);
        bufp->chgSData(oldp+179,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[5]),16);
        bufp->chgSData(oldp+180,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[6]),16);
        bufp->chgSData(oldp+181,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[7]),16);
        bufp->chgSData(oldp+182,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[8]),16);
        bufp->chgSData(oldp+183,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[9]),16);
        bufp->chgSData(oldp+184,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[10]),16);
        bufp->chgSData(oldp+185,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[11]),16);
        bufp->chgSData(oldp+186,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[12]),16);
        bufp->chgSData(oldp+187,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[13]),16);
        bufp->chgSData(oldp+188,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[14]),16);
        bufp->chgSData(oldp+189,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_out[15]),16);
        bufp->chgBit(oldp+190,((0x10U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))));
        bufp->chgBit(oldp+191,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_log_sum));
        bufp->chgBit(oldp+192,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__in_compute_max));
        bufp->chgBit(oldp+193,((0U == (IData)(vlSelf->tb_fp8_softmax__DOT__dut__DOT__s7_curr_val_stored))));
        bufp->chgBit(oldp+194,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__softmax_clr));
        bufp->chgCData(oldp+195,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__fsm__DOT__current_state),6);
        bufp->chgIData(oldp+196,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+197,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+198,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+199,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk13__DOT__j),32);
        bufp->chgIData(oldp+200,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk14__DOT__j),32);
        bufp->chgIData(oldp+201,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+202,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+203,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+204,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+205,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+206,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+207,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+208,(vlSelf->tb_fp8_softmax__DOT__dut__DOT__unnamedblk9__DOT__i),32);
    }
    bufp->chgBit(oldp+209,(vlSelf->tb_fp8_softmax__DOT__clk));
}

void Vtb_fp8_softmax___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fp8_softmax___024root__trace_cleanup\n"); );
    // Init
    Vtb_fp8_softmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fp8_softmax___024root*>(voidSelf);
    Vtb_fp8_softmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

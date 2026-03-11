// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_wrapper_tb__Syms.h"


void Vcpu_wrapper_tb___024root__trace_chg_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_wrapper_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_chg_0\n"); );
    // Body
    Vcpu_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_wrapper_tb___024root*>(voidSelf);
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcpu_wrapper_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_wrapper_tb___024root__trace_chg_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_chg_0_sub_0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.cpu_wrapper_tb__DOT__mode),2);
        bufp->chgBit(oldp+1,(vlSelfRef.cpu_wrapper_tb__DOT__bcd_en));
        bufp->chgQData(oldp+2,(vlSelfRef.cpu_wrapper_tb__DOT__ss_din),64);
        bufp->chgSData(oldp+4,(vlSelfRef.cpu_wrapper_tb__DOT__ss_adr),10);
        bufp->chgBit(oldp+5,(vlSelfRef.cpu_wrapper_tb__DOT__ss_wren));
        bufp->chgBit(oldp+6,(vlSelfRef.cpu_wrapper_tb__DOT__ss_rst));
        bufp->chgBit(oldp+7,(vlSelfRef.cpu_wrapper_tb__DOT__ss_load));
        bufp->chgIData(oldp+8,(vlSelfRef.cpu_wrapper_tb__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgSData(oldp+9,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i),16);
        bufp->chgCData(oldp+10,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI),8);
        bufp->chgCData(oldp+11,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI),8);
        bufp->chgBit(oldp+12,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc));
        bufp->chgSData(oldp+13,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic),9);
        bufp->chgCData(oldp+14,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI),8);
        bufp->chgCData(oldp+15,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l),5);
        bufp->chgCData(oldp+16,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h),5);
        bufp->chgSData(oldp+17,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp),9);
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                               & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                                               >> 1U))))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                               & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h) 
                                               >> 1U))))));
        bufp->chgBit(oldp+20,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+21,(vlSelfRef.cpu_wrapper_tb__DOT__di_reg),8);
        bufp->chgSData(oldp+22,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC),16);
        bufp->chgCData(oldp+23,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL),8);
        bufp->chgCData(oldp+24,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH),8);
        bufp->chgCData(oldp+25,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD),8);
        bufp->chgCData(oldp+26,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD),8);
        bufp->chgCData(oldp+27,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD),8);
        bufp->chgBit(oldp+28,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid));
        bufp->chgCData(oldp+29,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[0]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[1]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[2]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[3]),8);
        bufp->chgBit(oldp+33,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C));
        bufp->chgBit(oldp+34,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z));
        bufp->chgBit(oldp+35,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I));
        bufp->chgBit(oldp+36,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D));
        bufp->chgBit(oldp+37,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V));
        bufp->chgBit(oldp+38,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N));
        bufp->chgBit(oldp+39,((1U & (~ (0U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))))));
        bufp->chgBit(oldp+40,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN));
        bufp->chgBit(oldp+41,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC));
        bufp->chgCData(oldp+42,((0x000000ffU & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC) 
                                                >> 8U))),8);
        bufp->chgCData(oldp+43,((0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))),8);
        bufp->chgBit(oldp+44,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge));
        bufp->chgCData(oldp+45,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P),8);
        bufp->chgCData(oldp+46,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg),2);
        bufp->chgCData(oldp+47,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg),2);
        bufp->chgBit(oldp+48,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y));
        bufp->chgBit(oldp+49,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg));
        bufp->chgBit(oldp+50,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc));
        bufp->chgBit(oldp+51,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only));
        bufp->chgBit(oldp+52,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc));
        bufp->chgBit(oldp+53,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare));
        bufp->chgBit(oldp+54,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift));
        bufp->chgBit(oldp+55,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate));
        bufp->chgCData(oldp+56,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code),3);
        bufp->chgBit(oldp+57,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right));
        bufp->chgCData(oldp+58,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op),4);
        bufp->chgBit(oldp+59,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd));
        bufp->chgBit(oldp+60,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd));
        bufp->chgBit(oldp+61,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins));
        bufp->chgBit(oldp+62,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp));
        bufp->chgBit(oldp+63,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php));
        bufp->chgBit(oldp+64,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc));
        bufp->chgBit(oldp+65,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec));
        bufp->chgBit(oldp+66,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld));
        bufp->chgBit(oldp+67,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed));
        bufp->chgBit(oldp+68,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli));
        bufp->chgBit(oldp+69,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei));
        bufp->chgBit(oldp+70,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv));
        bufp->chgBit(oldp+71,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__brk));
        bufp->chgBit(oldp+72,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res));
        bufp->chgCData(oldp+73,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                                  ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                      ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                          ? 6U : 0U)
                                      : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                          ? 0U : 0x0aU))
                                  : 0U)),4);
        bufp->chgBit(oldp+74,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1));
        bufp->chgBit(oldp+75,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7));
        bufp->chgBit(oldp+76,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+77,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO));
        bufp->chgBit(oldp+78,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back));
        bufp->chgBit(oldp+79,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store));
        bufp->chgBit(oldp+80,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards));
        bufp->chgBit(oldp+81,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+82,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__we_i));
        bufp->chgBit(oldp+83,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI));
        bufp->chgCData(oldp+84,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel),2);
        bufp->chgCData(oldp+85,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile),8);
        bufp->chgBit(oldp+86,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right));
        bufp->chgCData(oldp+87,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op),4);
        bufp->chgBit(oldp+88,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register));
        bufp->chgBit(oldp+89,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD));
        bufp->chgBit(oldp+90,(((~ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right) 
                                   | (3U == (3U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op) 
                                                   >> 2U))))) 
                               & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI))));
    }
    bufp->chgBit(oldp+91,(vlSelfRef.clk));
    bufp->chgBit(oldp+92,(vlSelfRef.res_n));
    bufp->chgBit(oldp+93,(vlSelfRef.pwr_n));
    bufp->chgBit(oldp+94,(vlSelfRef.enable));
    bufp->chgBit(oldp+95,(vlSelfRef.rdy));
    bufp->chgBit(oldp+96,(vlSelfRef.irq_n));
    bufp->chgBit(oldp+97,(vlSelfRef.nmi_n));
    bufp->chgSData(oldp+98,(vlSelfRef.addr),16);
    bufp->chgCData(oldp+99,(vlSelfRef.do_data),8);
    bufp->chgCData(oldp+100,(vlSelfRef.di_data),8);
    bufp->chgBit(oldp+101,(vlSelfRef.rw_n));
    bufp->chgCData(oldp+102,(vlSelfRef.mem2),8);
    bufp->chgCData(oldp+103,(vlSelfRef.mem3),8);
    bufp->chgCData(oldp+104,(vlSelfRef.mem4),8);
    bufp->chgCData(oldp+105,(((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                               ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                   : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                                   : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                           : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                       : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                           : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php)
                                                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P)
                                                    : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD)))
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)))))
                               : ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                   ? ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                           : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)))
                                       : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                   : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                           : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.irq_n)) 
                                                       | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)))
                                                    ? 
                                                   (0x00000020U 
                                                    | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                                           << 6U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))))
                                                    : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P)))
                                               : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))
                                       : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))))),8);
    bufp->chgBit(oldp+106,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i));
    bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.irq_n)))));
    bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSelfRef.nmi_n)))));
    bufp->chgCData(oldp+109,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX),8);
    bufp->chgBit(oldp+110,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7) 
                            ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7) 
                               ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN) 
                                  ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO))))));
    bufp->chgCData(oldp+111,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR),8);
    bufp->chgCData(oldp+112,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state),6);
    bufp->chgSData(oldp+113,(((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                               ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                   : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                       : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                               : ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                   ? ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                       : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                                           : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                   : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                       ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)
                                                    : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))))
                                           : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res)
                                                    ? 0xfffcU
                                                    : 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)
                                                     ? 0xfffaU
                                                     : 0xfffeU)))
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                       : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))
                                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                                           : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))))),16);
    bufp->chgCData(oldp+114,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                               ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                   ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                       ? 6U : 0U) : 
                                  ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                    ? 0U : 0x0aU)) : 0U)),4);
}

void Vcpu_wrapper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_cleanup\n"); );
    // Body
    Vcpu_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_wrapper_tb___024root*>(voidSelf);
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

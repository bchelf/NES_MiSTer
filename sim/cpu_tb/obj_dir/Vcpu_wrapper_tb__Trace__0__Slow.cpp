// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_wrapper_tb__Syms.h"


VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_init_sub__TOP__0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"res_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"pwr_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"irq_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"nmi_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"do_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"di_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+101,0,"rw_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mem2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"mem3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"mem4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("cpu_wrapper_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"res_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"pwr_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"irq_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"nmi_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"do_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"di_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+101,0,"rw_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mem2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"mem3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"mem4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+0,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"bcd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"instrnew",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"ss_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"ss_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+5,0,"ss_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ss_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ss_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"ss_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"di_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+0,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"BCD_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"res_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"pwr_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"IRQ_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"NMI_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"R_W_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+115,0,"Instrnew",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"SaveStateBus_Din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"SaveStateBus_Adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+5,0,"SaveStateBus_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"SaveStateBus_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"SaveStateBus_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+116,0,"SaveStateBus_Dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"ab_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"do_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"rdy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"reset_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu_impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"AB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"WE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"IRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"NMI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"RDY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"ABL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"ABH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"DIHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+118,0,"DIHOLD_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"DIMUX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"IRHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"IRHOLD_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("AXYS", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+33,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"AZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"AV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"AN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"HC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"AI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"BI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+83,0,"CI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"CO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"PCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"PCL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+44,0,"NMI_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"regsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"regfile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"SEL_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+120,0,"SEL_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"SEL_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"SEL_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+12,0,"PC_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"PC_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"src_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"dst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"index_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"load_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"write_back",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"load_only",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"adc_sbc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"rotate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"backwards",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"cond_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+57,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"alu_shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"adc_bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"adj_bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"bit_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"plp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"php",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"sec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"sed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"cli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"sei",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"clv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"brk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"OP_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"OP_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"OP_EOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"OP_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"OP_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"OP_ROL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"OP_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"ABS0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"ABS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"ABSX0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"ABSX1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+134,0,"ABSX2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"BRA0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+136,0,"BRA1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+137,0,"BRA2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,0,"BRK0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"BRK1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+140,0,"BRK2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+141,0,"BRK3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"DECODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+143,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+144,0,"INDX0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+145,0,"INDX1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+146,0,"INDX2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,0,"INDX3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+148,0,"INDY0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"INDY1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"INDY2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+151,0,"INDY3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+152,0,"JMP0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+153,0,"JMP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+154,0,"JMPI0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+155,0,"JMPI1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+156,0,"JSR0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+157,0,"JSR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+158,0,"JSR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+159,0,"JSR3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+160,0,"PULL0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+161,0,"PULL1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,0,"PULL2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+163,0,"PUSH0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+164,0,"PUSH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+165,0,"READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+166,0,"REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+167,0,"RTI0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+168,0,"RTI1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+169,0,"RTI2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+170,0,"RTI3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+171,0,"RTI4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+172,0,"RTS0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+173,0,"RTS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+174,0,"RTS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+175,0,"RTS3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+176,0,"WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+177,0,"ZP0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+178,0,"ZPX0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+179,0,"ZPX1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+180,0,"ZEROPAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"STACKPAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"write_register",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"ADJL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"ADJH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+74,0,"NMI_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"AI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"BI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+83,0,"CI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"BCD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+77,0,"CO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"V",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"HC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"RDY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"AI7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BI7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"temp_logic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+14,0,"temp_BI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"temp_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"temp_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+90,0,"adder_CI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"HC9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"CO9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"temp_HC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_init_top(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_init_top\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_wrapper_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_wrapper_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_wrapper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_register(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_register\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_wrapper_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcpu_wrapper_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcpu_wrapper_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcpu_wrapper_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_const_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_const_0\n"); );
    // Body
    Vcpu_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_wrapper_tb___024root*>(voidSelf);
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_wrapper_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_const_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_const_0_sub_0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+115,(1U));
    bufp->fullQData(oldp+116,(0ULL),64);
    bufp->fullBit(oldp+118,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD_valid));
    bufp->fullCData(oldp+119,(0U),2);
    bufp->fullCData(oldp+120,(1U),2);
    bufp->fullCData(oldp+121,(2U),2);
    bufp->fullCData(oldp+122,(3U),2);
    bufp->fullCData(oldp+123,(0x0cU),4);
    bufp->fullCData(oldp+124,(0x0dU),4);
    bufp->fullCData(oldp+125,(0x0eU),4);
    bufp->fullCData(oldp+126,(3U),4);
    bufp->fullCData(oldp+127,(7U),4);
    bufp->fullCData(oldp+128,(0x0bU),4);
    bufp->fullCData(oldp+129,(0x0fU),4);
    bufp->fullCData(oldp+130,(0U),6);
    bufp->fullCData(oldp+131,(1U),6);
    bufp->fullCData(oldp+132,(2U),6);
    bufp->fullCData(oldp+133,(3U),6);
    bufp->fullCData(oldp+134,(4U),6);
    bufp->fullCData(oldp+135,(5U),6);
    bufp->fullCData(oldp+136,(6U),6);
    bufp->fullCData(oldp+137,(7U),6);
    bufp->fullCData(oldp+138,(8U),6);
    bufp->fullCData(oldp+139,(9U),6);
    bufp->fullCData(oldp+140,(0x0aU),6);
    bufp->fullCData(oldp+141,(0x0bU),6);
    bufp->fullCData(oldp+142,(0x0cU),6);
    bufp->fullCData(oldp+143,(0x0dU),6);
    bufp->fullCData(oldp+144,(0x0eU),6);
    bufp->fullCData(oldp+145,(0x0fU),6);
    bufp->fullCData(oldp+146,(0x10U),6);
    bufp->fullCData(oldp+147,(0x11U),6);
    bufp->fullCData(oldp+148,(0x12U),6);
    bufp->fullCData(oldp+149,(0x13U),6);
    bufp->fullCData(oldp+150,(0x14U),6);
    bufp->fullCData(oldp+151,(0x15U),6);
    bufp->fullCData(oldp+152,(0x16U),6);
    bufp->fullCData(oldp+153,(0x17U),6);
    bufp->fullCData(oldp+154,(0x18U),6);
    bufp->fullCData(oldp+155,(0x19U),6);
    bufp->fullCData(oldp+156,(0x1aU),6);
    bufp->fullCData(oldp+157,(0x1bU),6);
    bufp->fullCData(oldp+158,(0x1cU),6);
    bufp->fullCData(oldp+159,(0x1dU),6);
    bufp->fullCData(oldp+160,(0x1eU),6);
    bufp->fullCData(oldp+161,(0x1fU),6);
    bufp->fullCData(oldp+162,(0x20U),6);
    bufp->fullCData(oldp+163,(0x21U),6);
    bufp->fullCData(oldp+164,(0x22U),6);
    bufp->fullCData(oldp+165,(0x23U),6);
    bufp->fullCData(oldp+166,(0x24U),6);
    bufp->fullCData(oldp+167,(0x25U),6);
    bufp->fullCData(oldp+168,(0x26U),6);
    bufp->fullCData(oldp+169,(0x27U),6);
    bufp->fullCData(oldp+170,(0x28U),6);
    bufp->fullCData(oldp+171,(0x29U),6);
    bufp->fullCData(oldp+172,(0x2aU),6);
    bufp->fullCData(oldp+173,(0x2bU),6);
    bufp->fullCData(oldp+174,(0x2cU),6);
    bufp->fullCData(oldp+175,(0x2dU),6);
    bufp->fullCData(oldp+176,(0x2eU),6);
    bufp->fullCData(oldp+177,(0x2fU),6);
    bufp->fullCData(oldp+178,(0x30U),6);
    bufp->fullCData(oldp+179,(0x31U),6);
    bufp->fullCData(oldp+180,(0U),8);
    bufp->fullCData(oldp+181,(1U),8);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_full_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_full_0\n"); );
    // Body
    Vcpu_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_wrapper_tb___024root*>(voidSelf);
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_wrapper_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_full_0_sub_0(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root__trace_full_0_sub_0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.cpu_wrapper_tb__DOT__mode),2);
    bufp->fullBit(oldp+1,(vlSelfRef.cpu_wrapper_tb__DOT__bcd_en));
    bufp->fullQData(oldp+2,(vlSelfRef.cpu_wrapper_tb__DOT__ss_din),64);
    bufp->fullSData(oldp+4,(vlSelfRef.cpu_wrapper_tb__DOT__ss_adr),10);
    bufp->fullBit(oldp+5,(vlSelfRef.cpu_wrapper_tb__DOT__ss_wren));
    bufp->fullBit(oldp+6,(vlSelfRef.cpu_wrapper_tb__DOT__ss_rst));
    bufp->fullBit(oldp+7,(vlSelfRef.cpu_wrapper_tb__DOT__ss_load));
    bufp->fullIData(oldp+8,(vlSelfRef.cpu_wrapper_tb__DOT__i),32);
    bufp->fullSData(oldp+9,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i),16);
    bufp->fullCData(oldp+10,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI),8);
    bufp->fullCData(oldp+11,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI),8);
    bufp->fullBit(oldp+12,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc));
    bufp->fullSData(oldp+13,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic),9);
    bufp->fullCData(oldp+14,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI),8);
    bufp->fullCData(oldp+15,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l),5);
    bufp->fullCData(oldp+16,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h),5);
    bufp->fullSData(oldp+17,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp),9);
    bufp->fullBit(oldp+18,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                            & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    bufp->fullBit(oldp+19,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                            & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h) 
                                            >> 1U))))));
    bufp->fullBit(oldp+20,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC));
    bufp->fullCData(oldp+21,(vlSelfRef.cpu_wrapper_tb__DOT__di_reg),8);
    bufp->fullSData(oldp+22,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC),16);
    bufp->fullCData(oldp+23,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL),8);
    bufp->fullCData(oldp+24,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH),8);
    bufp->fullCData(oldp+25,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD),8);
    bufp->fullCData(oldp+26,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD),8);
    bufp->fullCData(oldp+27,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD),8);
    bufp->fullBit(oldp+28,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid));
    bufp->fullCData(oldp+29,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[0]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[1]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[2]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[3]),8);
    bufp->fullBit(oldp+33,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C));
    bufp->fullBit(oldp+34,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z));
    bufp->fullBit(oldp+35,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I));
    bufp->fullBit(oldp+36,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D));
    bufp->fullBit(oldp+37,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V));
    bufp->fullBit(oldp+38,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N));
    bufp->fullBit(oldp+39,((1U & (~ (0U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))))));
    bufp->fullBit(oldp+40,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN));
    bufp->fullBit(oldp+41,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC));
    bufp->fullCData(oldp+42,((0x000000ffU & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC) 
                                             >> 8U))),8);
    bufp->fullCData(oldp+43,((0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))),8);
    bufp->fullBit(oldp+44,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge));
    bufp->fullCData(oldp+45,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P),8);
    bufp->fullCData(oldp+46,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg),2);
    bufp->fullCData(oldp+47,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg),2);
    bufp->fullBit(oldp+48,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y));
    bufp->fullBit(oldp+49,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg));
    bufp->fullBit(oldp+50,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc));
    bufp->fullBit(oldp+51,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only));
    bufp->fullBit(oldp+52,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc));
    bufp->fullBit(oldp+53,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare));
    bufp->fullBit(oldp+54,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift));
    bufp->fullBit(oldp+55,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate));
    bufp->fullCData(oldp+56,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code),3);
    bufp->fullBit(oldp+57,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right));
    bufp->fullCData(oldp+58,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op),4);
    bufp->fullBit(oldp+59,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd));
    bufp->fullBit(oldp+60,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd));
    bufp->fullBit(oldp+61,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins));
    bufp->fullBit(oldp+62,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp));
    bufp->fullBit(oldp+63,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php));
    bufp->fullBit(oldp+64,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc));
    bufp->fullBit(oldp+65,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec));
    bufp->fullBit(oldp+66,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld));
    bufp->fullBit(oldp+67,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed));
    bufp->fullBit(oldp+68,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli));
    bufp->fullBit(oldp+69,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei));
    bufp->fullBit(oldp+70,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv));
    bufp->fullBit(oldp+71,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__brk));
    bufp->fullBit(oldp+72,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res));
    bufp->fullCData(oldp+73,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                               ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                   ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                       ? 6U : 0U) : 
                                  ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                    ? 0U : 0x0aU)) : 0U)),4);
    bufp->fullBit(oldp+74,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1));
    bufp->fullBit(oldp+75,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7));
    bufp->fullBit(oldp+76,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7));
    bufp->fullBit(oldp+77,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO));
    bufp->fullBit(oldp+78,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back));
    bufp->fullBit(oldp+79,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store));
    bufp->fullBit(oldp+80,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards));
    bufp->fullBit(oldp+81,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true));
    bufp->fullBit(oldp+82,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__we_i));
    bufp->fullBit(oldp+83,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI));
    bufp->fullCData(oldp+84,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel),2);
    bufp->fullCData(oldp+85,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile),8);
    bufp->fullBit(oldp+86,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right));
    bufp->fullCData(oldp+87,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op),4);
    bufp->fullBit(oldp+88,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register));
    bufp->fullBit(oldp+89,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD));
    bufp->fullBit(oldp+90,(((~ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right) 
                                | (3U == (3U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op) 
                                                >> 2U))))) 
                            & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI))));
    bufp->fullBit(oldp+91,(vlSelfRef.clk));
    bufp->fullBit(oldp+92,(vlSelfRef.res_n));
    bufp->fullBit(oldp+93,(vlSelfRef.pwr_n));
    bufp->fullBit(oldp+94,(vlSelfRef.enable));
    bufp->fullBit(oldp+95,(vlSelfRef.rdy));
    bufp->fullBit(oldp+96,(vlSelfRef.irq_n));
    bufp->fullBit(oldp+97,(vlSelfRef.nmi_n));
    bufp->fullSData(oldp+98,(vlSelfRef.addr),16);
    bufp->fullCData(oldp+99,(vlSelfRef.do_data),8);
    bufp->fullCData(oldp+100,(vlSelfRef.di_data),8);
    bufp->fullBit(oldp+101,(vlSelfRef.rw_n));
    bufp->fullCData(oldp+102,(vlSelfRef.mem2),8);
    bufp->fullCData(oldp+103,(vlSelfRef.mem3),8);
    bufp->fullCData(oldp+104,(vlSelfRef.mem4),8);
    bufp->fullCData(oldp+105,(((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                    : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                                    : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))
                                                : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                        : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                            : ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (
                                                   (1U 
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
                                            : ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)
                                                : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)))
                                        : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                                    : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile)
                                            : ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (
                                                   (1U 
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
    bufp->fullBit(oldp+106,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i));
    bufp->fullBit(oldp+107,((1U & (~ (IData)(vlSelfRef.irq_n)))));
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelfRef.nmi_n)))));
    bufp->fullCData(oldp+109,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX),8);
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7) 
                             ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7) 
                                ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN) 
                                   ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO))))));
    bufp->fullCData(oldp+111,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR),8);
    bufp->fullCData(oldp+112,(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state),6);
    bufp->fullSData(oldp+113,(((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                    : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                        : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                : ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                    ? ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                        : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)
                                                : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                    : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)
                                                     : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))))
                                            : ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (
                                                   (1U 
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
                                            ? ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 
                                                   (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                                     << 8U) 
                                                    | (0x000000ffU 
                                                       & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))
                                                    : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))
                                                : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)))))),16);
    bufp->fullCData(oldp+114,(((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                                ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                    ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                        ? 6U : 0U) : 
                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                     ? 0U : 0x0aU))
                                : 0U)),4);
}

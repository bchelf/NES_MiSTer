// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__0(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__1(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__SaveStateBus_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__SaveStateBus_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__2(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_data 
        = vlSelfRef.__PVT__DmaData;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__3(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__frame_counter__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__Dmc__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__frame_counter__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__Dmc__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_Dout = ((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]);
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__0(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__enabled_buffer = vlSelfRef.__PVT__enabled_buffer;
    vlSelfRef.__Vdly__phi2_old = vlSelfRef.__PVT__phi2_old;
    vlSelfRef.__Vdly__enabled_buffer_1 = vlSelfRef.__PVT__enabled_buffer_1;
    vlSelfRef.__Vdly__phi2_old = vlSelfRef.__PVT__PHI2;
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__enabled_buffer_1 = vlSelfRef.__PVT__enabled_buffer;
    }
    if ((((IData)(vlSelfRef.__PVT__ApuMW5) & (IData)(vlSelfRef.__PVT__write)) 
         & (1U == (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2))))) {
        vlSelfRef.__Vdly__enabled_buffer = (0x0000001fU 
                                            & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 5));
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__enabled_buffer = (0x0000001fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_APU, 0U, 5));
        vlSelfRef.__Vdly__enabled_buffer_1 = (0x0000001fU 
                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_APU, 5U, 5));
        vlSelfRef.__Vdly__phi2_old = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_APU, 0x0aU));
    }
    vlSelfRef.__PVT__phi2_old = vlSelfRef.__Vdly__phi2_old;
    vlSelfRef.__PVT__enabled_buffer_1 = vlSelfRef.__Vdly__enabled_buffer_1;
    vlSelfRef.__PVT__enabled_buffer = vlSelfRef.__Vdly__enabled_buffer;
    VL_ASSIGNSEL_QI(64, 11, 0U, vlSelfRef.__PVT__SS_APU_BACK, 
                    VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__phi2_old), 
                                  VL_CONCAT_III(10,5,5, (IData)(vlSelfRef.__PVT__enabled_buffer_1), (IData)(vlSelfRef.__PVT__enabled_buffer))));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__Din 
        = vlSelfRef.__PVT__SS_APU_BACK;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__1(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__2(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_irq = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__irq;
    vlSelfRef.__PVT__irq_flag = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__irq_flag;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__3(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__frame_counter__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__frame_counter__SaveStateBus_Dout;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__4(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__get_or_put 
        = vlSelfRef.__PVT__get_or_put;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__get_or_put 
        = vlSelfRef.__PVT__get_or_put;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSelfRef.__PVT__phi1 = vlSelfRef.__PVT__ce;
    vlSelfRef.__PVT__aclk1_delayed = ((IData)(vlSelfRef.__PVT__ce) 
                                      & (~ (IData)(vlSelfRef.__PVT__get_or_put)));
    vlSelfRef.__PVT__aclk1 = ((IData)(vlSelfRef.__PVT__ce) 
                              & (IData)(vlSelfRef.__PVT__get_or_put));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSelfRef.__PVT__put_ce = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSelfRef.__PVT__get_ce = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__5(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sq1NonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__IsNonZero;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__6(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sq2NonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__IsNonZero;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__7(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NoiNonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__IsNonZero;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__8(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TriSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__triangle 
        = vlSelfRef.__PVT__TriSample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__9(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IsDmcActive = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__enable;
    vlSelfRef.__PVT__DmcIrq = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__irq;
    vlSelfRef.__PVT__DmaAddr = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_address;
    vlSelfRef.__PVT__DmcSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__Sample;
    vlSelfRef.__PVT__DmaReq = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_req;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__dmc 
        = vlSelfRef.__PVT__DmcSample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__10(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Dmc__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__Dmc__SaveStateBus_Dout;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__11(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_APU = vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__Dout;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__12(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__read = ((IData)(vlSelfRef.__PVT__RW) 
                             & (IData)(vlSelfRef.__PVT__CS));
    vlSelfRef.__PVT__write = ((~ (IData)(vlSelfRef.__PVT__RW)) 
                              & (IData)(vlSelfRef.__PVT__CS));
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__0(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__phi2_ce = ((IData)(vlSelfRef.__PVT__PHI2) 
                                & (~ (IData)(vlSelfRef.__PVT__phi2_old)));
    vlSelfRef.__PVT__Enabled = ((IData)(vlSelfRef.__PVT__aclk1)
                                 ? (IData)(vlSelfRef.__PVT__enabled_buffer)
                                 : (IData)(vlSelfRef.__PVT__enabled_buffer_1));
    vlSelfRef.__PVT__aclk2 = ((IData)(vlSelfRef.__PVT__phi2_ce) 
                              & (~ (IData)(vlSelfRef.__PVT__get_or_put)));
    vlSelfRef.__Vcellinp__Squ1__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 0U));
    vlSelfRef.__Vcellinp__Squ2__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 1U));
    vlSelfRef.__Vcellinp__Tri__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 2U));
    vlSelfRef.__Vcellinp__Noi__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 3U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__aclk2 
        = vlSelfRef.__PVT__aclk2;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Squ1__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Squ2__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Tri__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Noi__Enabled;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__1(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_half = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__frame_half;
    vlSelfRef.__PVT__frame_quarter = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__frame_quarter;
    vlSelfRef.__PVT__ClkL = ((IData)(vlSelfRef.__PVT__frame_half) 
                             & (IData)(vlSelfRef.__PVT__aclk1_delayed));
    vlSelfRef.__PVT__ClkE = ((IData)(vlSelfRef.__PVT__frame_quarter) 
                             & (IData)(vlSelfRef.__PVT__aclk1_delayed));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__LenCtr_Clock 
        = vlSelfRef.__PVT__ClkL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__LenCtr_Clock 
        = vlSelfRef.__PVT__ClkL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__LenCtr_Clock 
        = vlSelfRef.__PVT__ClkL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__LenCtr_Clock 
        = vlSelfRef.__PVT__ClkL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__LinCtr_Clock 
        = vlSelfRef.__PVT__ClkE;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Env_Clock 
        = vlSelfRef.__PVT__ClkE;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Env_Clock 
        = vlSelfRef.__PVT__ClkE;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Env_Clock 
        = vlSelfRef.__PVT__ClkE;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__13(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__phi1 
        = vlSelfRef.__PVT__phi1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__2(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NoiSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__noise 
        = vlSelfRef.__PVT__NoiSample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__14(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__14\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TriNonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__IsNonZero;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__3(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sq1Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__square1 
        = vlSelfRef.__PVT__Sq1Sample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__4(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sq2Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__square2 
        = vlSelfRef.__PVT__Sq2Sample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__5(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IRQ = ((IData)(vlSelfRef.__PVT__frame_irq) 
                            | (IData)(vlSelfRef.__PVT__DmcIrq));
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__6(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = ((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]);
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__7(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__write_ce = ((IData)(vlSelfRef.__PVT__write) 
                                 & (IData)(vlSelfRef.__PVT__phi2_ce));
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__8(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__DOUT = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__DmcIrq), 
                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__irq_flag), 
                                                        VL_EXTEND_II(6,5, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__IsDmcActive), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__NoiNonZero), (IData)(vlSelfRef.__PVT__TriNonZero))), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__Sq2NonZero), (IData)(vlSelfRef.__PVT__Sq1NonZero))))));
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__9(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_ack 
        = vlSelfRef.__PVT__DmaAck;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__10(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__sample;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__11(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__DIN 
        = vlSelfRef.__PVT__DIN;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__din 
        = vlSelfRef.__PVT__DIN;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__DIN 
        = vlSelfRef.__PVT__DIN;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__DIN 
        = vlSelfRef.__PVT__DIN;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__DIN 
        = vlSelfRef.__PVT__DIN;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__DIN 
        = vlSelfRef.__PVT__DIN;
    vlSelfRef.__PVT__lc_load = vlSelfRef.__PVT__len_counter_lut
        [(0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 3U, 5))];
    vlSelfRef.__Vcellinp__Dmc__ain = (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 3));
    vlSelfRef.__Vcellinp__frame_counter__addr = (3U 
                                                 & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2));
    vlSelfRef.__PVT__ApuMW4 = ((4U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3))) 
                               | (0x15U == (IData)(vlSelfRef.__PVT__ADDR)));
    vlSelfRef.__PVT__ApuMW2 = (2U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3)));
    vlSelfRef.__Vcellinp__Tri__Addr = (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2));
    vlSelfRef.__PVT__ApuMW0 = (0U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3)));
    vlSelfRef.__PVT__ApuMW1 = (1U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3)));
    vlSelfRef.__PVT__ApuMW3 = (3U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3)));
    vlSelfRef.__PVT__ApuMW5 = (5U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 2U, 3)));
    vlSelfRef.__Vcellinp__Squ1__Addr = (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2));
    vlSelfRef.__Vcellinp__Squ2__Addr = (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2));
    vlSelfRef.__Vcellinp__Noi__Addr = (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__ADDR), 0U, 2));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__lc_load 
        = vlSelfRef.__PVT__lc_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__lc_load 
        = vlSelfRef.__PVT__lc_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__lc_load 
        = vlSelfRef.__PVT__lc_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__lc_load 
        = vlSelfRef.__PVT__lc_load;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__ain 
        = vlSelfRef.__Vcellinp__Dmc__ain;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__addr 
        = vlSelfRef.__Vcellinp__frame_counter__addr;
    vlSelfRef.__Vcellinp__Dmc__write = ((IData)(vlSelfRef.__PVT__write) 
                                        & (IData)(vlSelfRef.__PVT__ApuMW4));
    vlSelfRef.__Vcellinp__Tri__write = ((IData)(vlSelfRef.__PVT__ApuMW2) 
                                        & (IData)(vlSelfRef.__PVT__write));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__Addr 
        = vlSelfRef.__Vcellinp__Tri__Addr;
    vlSelfRef.__Vcellinp__Squ1__write = ((IData)(vlSelfRef.__PVT__ApuMW0) 
                                         & (IData)(vlSelfRef.__PVT__write));
    vlSelfRef.__Vcellinp__Squ2__write = ((IData)(vlSelfRef.__PVT__ApuMW1) 
                                         & (IData)(vlSelfRef.__PVT__write));
    vlSelfRef.__Vcellinp__Noi__write = ((IData)(vlSelfRef.__PVT__ApuMW3) 
                                        & (IData)(vlSelfRef.__PVT__write));
    vlSelfRef.__Vcellinp__frame_counter__read = ((IData)(vlSelfRef.__PVT__ApuMW5) 
                                                 & (IData)(vlSelfRef.__PVT__read));
    vlSelfRef.__Vcellinp__frame_counter__write = ((IData)(vlSelfRef.__PVT__ApuMW5) 
                                                  & (IData)(vlSelfRef.__PVT__write));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Addr 
        = vlSelfRef.__Vcellinp__Squ1__Addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Addr 
        = vlSelfRef.__Vcellinp__Squ2__Addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Addr 
        = vlSelfRef.__Vcellinp__Noi__Addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__write 
        = vlSelfRef.__Vcellinp__Dmc__write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__write 
        = vlSelfRef.__Vcellinp__Tri__write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__write 
        = vlSelfRef.__Vcellinp__Squ1__write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__write 
        = vlSelfRef.__Vcellinp__Squ2__write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__write 
        = vlSelfRef.__Vcellinp__Noi__write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__read 
        = vlSelfRef.__Vcellinp__frame_counter__read;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__write 
        = vlSelfRef.__Vcellinp__frame_counter__write;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__12(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__frame_counter__write_ce = 
        ((IData)(vlSelfRef.__PVT__ApuMW5) & (IData)(vlSelfRef.__PVT__write_ce));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__write_ce 
        = vlSelfRef.__Vcellinp__frame_counter__write_ce;
}

void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__13(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___nba_comb__TOP__nes_core_top__nes_inst__apu__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_data 
        = vlSelfRef.__PVT__DmaData;
}

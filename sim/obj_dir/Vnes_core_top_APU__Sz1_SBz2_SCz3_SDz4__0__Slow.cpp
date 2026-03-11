// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___eval_initial__TOP__nes_core_top__nes_inst__apu(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___eval_initial__TOP__nes_core_top__nes_inst__apu\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__len_counter_lut[0U] = 9U;
    vlSelfRef.__PVT__len_counter_lut[1U] = 0xfdU;
    vlSelfRef.__PVT__len_counter_lut[2U] = 0x13U;
    vlSelfRef.__PVT__len_counter_lut[3U] = 1U;
    vlSelfRef.__PVT__len_counter_lut[4U] = 0x27U;
    vlSelfRef.__PVT__len_counter_lut[5U] = 3U;
    vlSelfRef.__PVT__len_counter_lut[6U] = 0x4fU;
    vlSelfRef.__PVT__len_counter_lut[7U] = 5U;
    vlSelfRef.__PVT__len_counter_lut[8U] = 0x9fU;
    vlSelfRef.__PVT__len_counter_lut[9U] = 7U;
    vlSelfRef.__PVT__len_counter_lut[10U] = 0x3bU;
    vlSelfRef.__PVT__len_counter_lut[11U] = 9U;
    vlSelfRef.__PVT__len_counter_lut[12U] = 0x0dU;
    vlSelfRef.__PVT__len_counter_lut[13U] = 0x0bU;
    vlSelfRef.__PVT__len_counter_lut[14U] = 0x19U;
    vlSelfRef.__PVT__len_counter_lut[15U] = 0x0dU;
    vlSelfRef.__PVT__len_counter_lut[16U] = 0x0bU;
    vlSelfRef.__PVT__len_counter_lut[17U] = 0x0fU;
    vlSelfRef.__PVT__len_counter_lut[18U] = 0x17U;
    vlSelfRef.__PVT__len_counter_lut[19U] = 0x11U;
    vlSelfRef.__PVT__len_counter_lut[20U] = 0x2fU;
    vlSelfRef.__PVT__len_counter_lut[21U] = 0x13U;
    vlSelfRef.__PVT__len_counter_lut[22U] = 0x5fU;
    vlSelfRef.__PVT__len_counter_lut[23U] = 0x15U;
    vlSelfRef.__PVT__len_counter_lut[24U] = 0xbfU;
    vlSelfRef.__PVT__len_counter_lut[25U] = 0x17U;
    vlSelfRef.__PVT__len_counter_lut[26U] = 0x47U;
    vlSelfRef.__PVT__len_counter_lut[27U] = 0x19U;
    vlSelfRef.__PVT__len_counter_lut[28U] = 0x0fU;
    vlSelfRef.__PVT__len_counter_lut[29U] = 0x1bU;
    vlSelfRef.__PVT__len_counter_lut[30U] = 0x1fU;
    vlSelfRef.__PVT__len_counter_lut[31U] = 0x1dU;
    VL_ASSIGNSEL_QQ(64, 53, 0x0bU, vlSelfRef.__PVT__SS_APU_BACK, 0ULL);
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__sq2 = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__sq2 = 1U;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__0(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__MMC5 
        = vlSelfRef.__PVT__MMC5;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__MMC5 
        = vlSelfRef.__PVT__MMC5;
    VL_ASSIGNSEL_QI(64, 11, 0U, vlSelfRef.__PVT__SS_APU_BACK, 
                    VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__phi2_old), 
                                  VL_CONCAT_III(10,5,5, (IData)(vlSelfRef.__PVT__enabled_buffer_1), (IData)(vlSelfRef.__PVT__enabled_buffer))));
    vlSelfRef.__PVT__IsDmcActive = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__enable;
    vlSelfRef.__PVT__DmcIrq = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__irq;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__allow_us 
        = vlSelfRef.__PVT__allow_us;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__allow_us 
        = vlSelfRef.__PVT__allow_us;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__MMC5 
        = vlSelfRef.__PVT__MMC5;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__MMC5 
        = vlSelfRef.__PVT__MMC5;
    vlSelfRef.__PVT__DmaAddr = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_address;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__get_or_put 
        = vlSelfRef.__PVT__get_or_put;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__get_or_put 
        = vlSelfRef.__PVT__get_or_put;
    vlSelfRef.__PVT__phi2_ce = ((IData)(vlSelfRef.__PVT__PHI2) 
                                & (~ (IData)(vlSelfRef.__PVT__phi2_old)));
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
    vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__Din 
        = vlSelfRef.__PVT__SS_APU_BACK;
    vlSelfRef.__PVT__aclk2 = ((IData)(vlSelfRef.__PVT__phi2_ce) 
                              & (~ (IData)(vlSelfRef.__PVT__get_or_put)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__phi1 
        = vlSelfRef.__PVT__phi1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_delayed;
    vlSelfRef.__PVT__put_ce = vlSelfRef.__PVT__aclk1_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSelfRef.__PVT__get_ce = vlSelfRef.__PVT__aclk1;
    vlSelfRef.__PVT__Enabled = ((IData)(vlSelfRef.__PVT__aclk1)
                                 ? (IData)(vlSelfRef.__PVT__enabled_buffer)
                                 : (IData)(vlSelfRef.__PVT__enabled_buffer_1));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__aclk2 
        = vlSelfRef.__PVT__aclk2;
    vlSelfRef.__Vcellinp__Squ1__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 0U));
    vlSelfRef.__Vcellinp__Squ2__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 1U));
    vlSelfRef.__Vcellinp__Tri__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 2U));
    vlSelfRef.__Vcellinp__Noi__Enabled = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__Enabled), 3U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Squ1__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Squ2__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Tri__Enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Enabled 
        = vlSelfRef.__Vcellinp__Noi__Enabled;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__1(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TriSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__Sample;
    vlSelfRef.__PVT__TriNonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri.__PVT__IsNonZero;
    vlSelfRef.__PVT__frame_irq = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__irq;
    vlSelfRef.__PVT__irq_flag = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__irq_flag;
    vlSelfRef.__PVT__SS_APU = vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__Dout;
    vlSelfRef.__PVT__DmcSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__Sample;
    vlSelfRef.__PVT__DmaReq = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_req;
    vlSelfRef.__PVT__Sq1NonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__IsNonZero;
    vlSelfRef.__PVT__Sq2NonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__IsNonZero;
    vlSelfRef.__PVT__NoiNonZero = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__IsNonZero;
    vlSelfRef.__PVT__NoiSample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__triangle 
        = vlSelfRef.__PVT__TriSample;
    vlSelfRef.__PVT__IRQ = ((IData)(vlSelfRef.__PVT__frame_irq) 
                            | (IData)(vlSelfRef.__PVT__DmcIrq));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__dmc 
        = vlSelfRef.__PVT__DmcSample;
    vlSelfRef.__PVT__DOUT = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__DmcIrq), 
                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__irq_flag), 
                                                        VL_EXTEND_II(6,5, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__IsDmcActive), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__NoiNonZero), (IData)(vlSelfRef.__PVT__TriNonZero))), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__Sq2NonZero), (IData)(vlSelfRef.__PVT__Sq1NonZero))))));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__noise 
        = vlSelfRef.__PVT__NoiSample;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__2(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sq1Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ1.__PVT__Sample;
    vlSelfRef.__PVT__Sq2Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__Squ2.__PVT__Sample;
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
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi.__PVT__PAL 
        = vlSelfRef.__PVT__PAL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__PAL 
        = vlSelfRef.__PVT__PAL;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__PAL 
        = vlSelfRef.__PVT__PAL;
    vlSelfRef.__PVT__read = ((IData)(vlSelfRef.__PVT__RW) 
                             & (IData)(vlSelfRef.__PVT__CS));
    vlSelfRef.__PVT__write = ((~ (IData)(vlSelfRef.__PVT__RW)) 
                              & (IData)(vlSelfRef.__PVT__CS));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__square1 
        = vlSelfRef.__PVT__Sq1Sample;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__square2 
        = vlSelfRef.__PVT__Sq2Sample;
    vlSelfRef.__PVT__write_ce = ((IData)(vlSelfRef.__PVT__write) 
                                 & (IData)(vlSelfRef.__PVT__phi2_ce));
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__3(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_half = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__frame_half;
    vlSelfRef.__PVT__frame_quarter = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__frame_quarter;
    vlSelfRef.__PVT__Sample = vlSymsp->TOP__nes_core_top__nes_inst__apu__mixer.__PVT__sample;
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
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_ack 
        = vlSelfRef.__PVT__DmaAck;
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
    vlSelfRef.__PVT__ClkL = ((IData)(vlSelfRef.__PVT__frame_half) 
                             & (IData)(vlSelfRef.__PVT__aclk1_delayed));
    vlSelfRef.__PVT__ClkE = ((IData)(vlSelfRef.__PVT__frame_quarter) 
                             & (IData)(vlSelfRef.__PVT__aclk1_delayed));
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
    vlSelfRef.__Vcellinp__frame_counter__write_ce = 
        ((IData)(vlSelfRef.__PVT__ApuMW5) & (IData)(vlSelfRef.__PVT__write_ce));
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
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__write_ce 
        = vlSelfRef.__Vcellinp__frame_counter__write_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__read 
        = vlSelfRef.__Vcellinp__frame_counter__read;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter.__PVT__write 
        = vlSelfRef.__Vcellinp__frame_counter__write;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__4(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__5(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__5\n"); );
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

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__6(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc.__PVT__dma_data 
        = vlSelfRef.__PVT__DmaData;
}

VL_ATTR_COLD void Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ctor_var_reset(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__MMC5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981470898745018067ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__PHI2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11244832556171713801ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__allow_us = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13458428841343595221ull);
    vlSelf->__PVT__PAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568346935915704965ull);
    vlSelf->__PVT__ADDR = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6747904215362389807ull);
    vlSelf->__PVT__DIN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165808950731919723ull);
    vlSelf->__PVT__RW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7595808870369003888ull);
    vlSelf->__PVT__CS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14785431503188483138ull);
    vlSelf->__PVT__audio_channels = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8674427581541877616ull);
    vlSelf->__PVT__DmaData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17767507993803434470ull);
    vlSelf->__PVT__get_or_put = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673809810432003319ull);
    vlSelf->__PVT__DmaAck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2522100410169179352ull);
    vlSelf->__PVT__DOUT = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5815938063623818353ull);
    vlSelf->__PVT__Sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4658883583127319325ull);
    vlSelf->__PVT__DmaReq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4054941477275590778ull);
    vlSelf->__PVT__DmaAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1388312618804857065ull);
    vlSelf->__PVT__IRQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13672487388632958908ull);
    vlSelf->__PVT__get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10476713293322569593ull);
    vlSelf->__PVT__put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7411521946655991260ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__SaveStateBus_wired_or[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10529134642807903460ull);
    }
    vlSelf->__PVT__SS_APU = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8446908632363675994ull);
    vlSelf->__PVT__SS_APU_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3982838177502593829ull);
    vlSelf->__Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__len_counter_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 927861832307998684ull);
    }
    vlSelf->__PVT__lc_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5534629435928922586ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__write_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17143924626070853396ull);
    vlSelf->__PVT__phi2_old = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13392409024942689532ull);
    vlSelf->__PVT__phi2_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8978698552650707807ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4490051587444836606ull);
    vlSelf->__PVT__aclk1_delayed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7139740561019457201ull);
    vlSelf->__PVT__phi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322190517738230497ull);
    vlSelf->__PVT__Enabled = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1523862819411814026ull);
    vlSelf->__PVT__Sq1Sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3742705846770831794ull);
    vlSelf->__PVT__Sq2Sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16761311386809652553ull);
    vlSelf->__PVT__TriSample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9649640190523754814ull);
    vlSelf->__PVT__NoiSample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9706517414996666317ull);
    vlSelf->__PVT__DmcSample = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11511632863995362761ull);
    vlSelf->__PVT__DmcIrq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10322270263771908657ull);
    vlSelf->__PVT__IsDmcActive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11594301028122781712ull);
    vlSelf->__PVT__irq_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15094107695278012219ull);
    vlSelf->__PVT__frame_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 326419963993026676ull);
    vlSelf->__PVT__ApuMW0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4766666788587741282ull);
    vlSelf->__PVT__ApuMW1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329270971656437749ull);
    vlSelf->__PVT__ApuMW2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1658626916455497133ull);
    vlSelf->__PVT__ApuMW3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9172465586185305046ull);
    vlSelf->__PVT__ApuMW4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4414893328282083706ull);
    vlSelf->__PVT__ApuMW5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18185950593390727309ull);
    vlSelf->__PVT__Sq1NonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7560670071682322692ull);
    vlSelf->__PVT__Sq2NonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126518026462328954ull);
    vlSelf->__PVT__TriNonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13810092614668130480ull);
    vlSelf->__PVT__NoiNonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6075935214832254351ull);
    vlSelf->__PVT__ClkE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1104139770530494607ull);
    vlSelf->__PVT__ClkL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13229079189373325445ull);
    vlSelf->__PVT__enabled_buffer = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11606467311985222504ull);
    vlSelf->__PVT__enabled_buffer_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 184129147768691708ull);
    vlSelf->__PVT__frame_quarter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18445729400997105964ull);
    vlSelf->__PVT__frame_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656671421825424733ull);
    vlSelf->__Vcellinp__Squ1__Enabled = 0;
    vlSelf->__Vcellinp__Squ1__write = 0;
    vlSelf->__Vcellinp__Squ1__Addr = 0;
    vlSelf->__Vcellinp__Squ2__Enabled = 0;
    vlSelf->__Vcellinp__Squ2__write = 0;
    vlSelf->__Vcellinp__Squ2__Addr = 0;
    vlSelf->__Vcellinp__Tri__Enabled = 0;
    vlSelf->__Vcellinp__Tri__write = 0;
    vlSelf->__Vcellinp__Tri__Addr = 0;
    vlSelf->__Vcellinp__Noi__Enabled = 0;
    vlSelf->__Vcellinp__Noi__write = 0;
    vlSelf->__Vcellinp__Noi__Addr = 0;
    vlSelf->__Vcellout__Dmc__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__Dmc__write = 0;
    vlSelf->__Vcellinp__Dmc__ain = 0;
    vlSelf->__Vcellout__frame_counter__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__frame_counter__addr = 0;
    vlSelf->__Vcellinp__frame_counter__write_ce = 0;
    vlSelf->__Vcellinp__frame_counter__read = 0;
    vlSelf->__Vcellinp__frame_counter__write = 0;
    vlSelf->__Vdly__phi2_old = 0;
    vlSelf->__Vdly__enabled_buffer_1 = 0;
    vlSelf->__Vdly__enabled_buffer = 0;
}

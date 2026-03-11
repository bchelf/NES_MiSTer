// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

void Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___ico_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Dout;
}

void Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__w4017_1 = vlSelfRef.__PVT__w4017_1;
    vlSelfRef.__Vdly__frame_reset_2 = vlSelfRef.__PVT__frame_reset_2;
    vlSelfRef.__Vdly__FrameInterrupt = vlSelfRef.__PVT__FrameInterrupt;
    vlSelfRef.__Vdly__FrameSeqMode = vlSelfRef.__PVT__FrameSeqMode;
    vlSelfRef.__Vdly__frame = vlSelfRef.__PVT__frame;
    vlSelfRef.__Vdly__DisableFrameInterrupt = vlSelfRef.__PVT__DisableFrameInterrupt;
    vlSelfRef.__Vdly__w4017_2 = vlSelfRef.__PVT__w4017_2;
    vlSelfRef.__Vdly__FrameSeqMode_2 = vlSelfRef.__PVT__FrameSeqMode_2;
    vlSelfRef.__Vdly__frame_interrupt_buffer = vlSelfRef.__PVT__frame_interrupt_buffer;
    if (((1U == (IData)(vlSelfRef.__PVT__addr)) & (IData)(vlSelfRef.__PVT__read))) {
        vlSelfRef.__Vdly__FrameInterrupt = 0U;
    }
    if (vlSelfRef.__PVT__set_irq) {
        vlSelfRef.__Vdly__FrameInterrupt = 1U;
        vlSelfRef.__Vdly__frame_interrupt_buffer = 1U;
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__frame = ((IData)(vlSelfRef.__PVT__frame_reset_2)
                                    ? 0x7fffU : VL_CONCAT_III(15,14,1, 
                                                              (0x00003fffU 
                                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__frame), 0U, 14)), 
                                                              (1U 
                                                               & ((VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__frame), 0x0eU) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__frame), 0x0dU)) 
                                                                  | (~ 
                                                                     VL_REDOR_I((IData)(vlSelfRef.__PVT__frame)))))));
        vlSelfRef.__Vdly__w4017_2 = vlSelfRef.__PVT__w4017_1;
        vlSelfRef.__Vdly__w4017_1 = 0U;
        vlSelfRef.__Vdly__FrameSeqMode_2 = vlSelfRef.__PVT__FrameSeqMode;
        vlSelfRef.__Vdly__frame_reset_2 = 0U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__FrameInterrupt)))) {
            vlSelfRef.__Vdly__frame_interrupt_buffer = 0U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__aclk2) & (IData)(vlSelfRef.__PVT__frame_reset))) {
        vlSelfRef.__Vdly__frame_reset_2 = 1U;
    }
    if (vlSelfRef.__PVT__frame_int_disabled) {
        vlSelfRef.__Vdly__FrameInterrupt = 0U;
    }
    if ((((IData)(vlSelfRef.__PVT__write_ce) & (3U 
                                                == (IData)(vlSelfRef.__PVT__addr))) 
         & (~ (IData)(vlSelfRef.__PVT__MMC5)))) {
        vlSelfRef.__Vdly__FrameSeqMode = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 7U));
        vlSelfRef.__Vdly__DisableFrameInterrupt = (1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 6U));
        vlSelfRef.__Vdly__w4017_1 = 1U;
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__frame = (0x00007fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0U, 15));
        vlSelfRef.__Vdly__FrameInterrupt = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x0fU));
        vlSelfRef.__Vdly__frame_interrupt_buffer = 
            (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x10U));
        vlSelfRef.__Vdly__w4017_1 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x11U));
        vlSelfRef.__Vdly__w4017_2 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x12U));
        vlSelfRef.__Vdly__DisableFrameInterrupt = (1U 
                                                   & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x13U));
        if (vlSelfRef.__PVT__SaveStateBus_load) {
            vlSelfRef.__Vdly__FrameSeqMode = (1U & 
                                              VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x14U));
        }
        vlSelfRef.__Vdly__FrameSeqMode_2 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x15U));
        vlSelfRef.__Vdly__frame_reset_2 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_FCT, 0x16U));
        if (vlSelfRef.__PVT__cold_reset) {
            vlSelfRef.__Vdly__FrameSeqMode = 0U;
        }
    }
    vlSelfRef.__PVT__w4017_1 = vlSelfRef.__Vdly__w4017_1;
    vlSelfRef.__PVT__frame_reset_2 = vlSelfRef.__Vdly__frame_reset_2;
    vlSelfRef.__PVT__FrameInterrupt = vlSelfRef.__Vdly__FrameInterrupt;
    vlSelfRef.__PVT__DisableFrameInterrupt = vlSelfRef.__Vdly__DisableFrameInterrupt;
    vlSelfRef.__PVT__w4017_2 = vlSelfRef.__Vdly__w4017_2;
    vlSelfRef.__PVT__FrameSeqMode_2 = vlSelfRef.__Vdly__FrameSeqMode_2;
    vlSelfRef.__PVT__FrameSeqMode = vlSelfRef.__Vdly__FrameSeqMode;
    vlSelfRef.__PVT__frame = vlSelfRef.__Vdly__frame;
    vlSelfRef.__PVT__frame_interrupt_buffer = vlSelfRef.__Vdly__frame_interrupt_buffer;
    VL_ASSIGNBIT_QI(0x11U, vlSelfRef.__PVT__SS_FCT_BACK, vlSelfRef.__PVT__w4017_1);
    VL_ASSIGNBIT_QI(0x16U, vlSelfRef.__PVT__SS_FCT_BACK, vlSelfRef.__PVT__frame_reset_2);
    VL_ASSIGNBIT_QI(0x0fU, vlSelfRef.__PVT__SS_FCT_BACK, vlSelfRef.__PVT__FrameInterrupt);
    vlSelfRef.__PVT__frame_int_disabled = vlSelfRef.__PVT__DisableFrameInterrupt;
    vlSelfRef.__PVT__irq = ((IData)(vlSelfRef.__PVT__FrameInterrupt) 
                            & (~ (IData)(vlSelfRef.__PVT__DisableFrameInterrupt)));
    VL_ASSIGNSEL_QI(64, 4, 0x00000012U, vlSelfRef.__PVT__SS_FCT_BACK, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__FrameSeqMode_2), (IData)(vlSelfRef.__PVT__FrameSeqMode)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__DisableFrameInterrupt), (IData)(vlSelfRef.__PVT__w4017_2))));
    VL_ASSIGNSEL_QI(64, 15, 0U, vlSelfRef.__PVT__SS_FCT_BACK, vlSelfRef.__PVT__frame);
    vlSelfRef.__PVT__frm_a = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x1fa4U : 0x1061U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_c = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x5815U : 0x2cd3U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_b = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x4430U : 0x3603U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_e = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x04faU : 0x7185U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    VL_ASSIGNBIT_QI(0x10U, vlSelfRef.__PVT__SS_FCT_BACK, vlSelfRef.__PVT__frame_interrupt_buffer);
    vlSelfRef.__PVT__irq_flag = vlSelfRef.__PVT__frame_interrupt_buffer;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__Din 
        = vlSelfRef.__PVT__SS_FCT_BACK;
}

void Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Dout;
}

void Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___nba_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_FCT = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__Dout;
}

void Vnes_core_top_FrameCtr__Sz4___nba_comb__TOP__nes_core_top__nes_inst__apu__frame_counter__0(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___nba_comb__TOP__nes_core_top__nes_inst__apu__frame_counter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_mode = ((IData)(vlSelfRef.__PVT__aclk1)
                                  ? (IData)(vlSelfRef.__PVT__FrameSeqMode)
                                  : (IData)(vlSelfRef.__PVT__FrameSeqMode_2));
    vlSelfRef.__PVT__frm_d = ((((IData)(vlSelfRef.__PVT__PAL)
                                 ? 0x0be8U : 0x0a1fU) 
                               == (IData)(vlSelfRef.__PVT__frame)) 
                              & (~ (IData)(vlSelfRef.__PVT__seq_mode)));
    vlSelfRef.__PVT__set_irq = ((IData)(vlSelfRef.__PVT__frm_d) 
                                & (~ (IData)(vlSelfRef.__PVT__FrameSeqMode)));
    vlSelfRef.__PVT__frame_reset = (((IData)(vlSelfRef.__PVT__frm_d) 
                                     | (IData)(vlSelfRef.__PVT__frm_e)) 
                                    | (IData)(vlSelfRef.__PVT__w4017_2));
    vlSelfRef.__PVT__frame_half = ((((IData)(vlSelfRef.__PVT__frm_b) 
                                     | (IData)(vlSelfRef.__PVT__frm_d)) 
                                    | (IData)(vlSelfRef.__PVT__frm_e)) 
                                   | ((IData)(vlSelfRef.__PVT__w4017_2) 
                                      & (IData)(vlSelfRef.__PVT__seq_mode)));
    vlSelfRef.__PVT__frame_quarter = ((((((IData)(vlSelfRef.__PVT__frm_a) 
                                          | (IData)(vlSelfRef.__PVT__frm_b)) 
                                         | (IData)(vlSelfRef.__PVT__frm_c)) 
                                        | (IData)(vlSelfRef.__PVT__frm_d)) 
                                       | (IData)(vlSelfRef.__PVT__frm_e)) 
                                      | ((IData)(vlSelfRef.__PVT__w4017_2) 
                                         & (IData)(vlSelfRef.__PVT__seq_mode)));
}

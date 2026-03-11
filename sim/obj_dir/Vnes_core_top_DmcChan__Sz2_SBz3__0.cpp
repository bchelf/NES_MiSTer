// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

void Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___ico_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]);
}

void Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__irq_enable = vlSelfRef.__PVT__irq_enable;
    vlSelfRef.__Vdly__loop = vlSelfRef.__PVT__loop;
    vlSelfRef.__Vdly__frequency = vlSelfRef.__PVT__frequency;
    vlSelfRef.__Vdly__sample_address = vlSelfRef.__PVT__sample_address;
    vlSelfRef.__Vdly__sample_length = vlSelfRef.__PVT__sample_length;
    vlSelfRef.__Vdly__dmc_lsfr = vlSelfRef.__PVT__dmc_lsfr;
    vlSelfRef.__Vdly__dmc_clock = vlSelfRef.__PVT__dmc_clock;
    vlSelfRef.__Vdly__dmc_silence = vlSelfRef.__PVT__dmc_silence;
    vlSelfRef.__Vdly__dmc_volume = vlSelfRef.__PVT__dmc_volume;
    vlSelfRef.__Vdly__bytes_remaining = vlSelfRef.__PVT__bytes_remaining;
    vlSelfRef.__Vdly__enable_1 = vlSelfRef.__PVT__enable_1;
    vlSelfRef.__Vdly__enable_2 = vlSelfRef.__PVT__enable_2;
    vlSelfRef.__Vdly__sample_shift = vlSelfRef.__PVT__sample_shift;
    vlSelfRef.__Vdly__dmc_bits = vlSelfRef.__PVT__dmc_bits;
    vlSelfRef.__Vdly__sample_buffer = vlSelfRef.__PVT__sample_buffer;
    vlSelfRef.__Vdly__enable = vlSelfRef.__PVT__enable;
    vlSelfRef.__Vdly__dmc_volume_next = vlSelfRef.__PVT__dmc_volume_next;
    vlSelfRef.__Vdly__have_buffer = vlSelfRef.__PVT__have_buffer;
    vlSelfRef.__Vdly__irq = vlSelfRef.__PVT__irq;
    vlSelfRef.__Vdly__enable_3 = vlSelfRef.__PVT__enable_3;
    if (vlSelfRef.__PVT__write) {
        if ((0U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__irq_enable = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
            vlSelfRef.__Vdly__loop = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 6U));
            vlSelfRef.__Vdly__frequency = (0x0000000fU 
                                           & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 4));
            if ((1U & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U)))) {
                vlSelfRef.__Vdly__irq = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__dmc_volume = VL_CONCAT_III(8,1,7, 
                                                         ((IData)(vlSelfRef.__PVT__MMC5) 
                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U)), 
                                                         (0x0000007fU 
                                                          & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 7)));
        } else if ((2U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__sample_address = ((IData)(vlSelfRef.__PVT__MMC5)
                                                 ? 0U
                                                 : (IData)(vlSelfRef.__PVT__DIN));
        } else if ((3U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__sample_length = ((IData)(vlSelfRef.__PVT__MMC5)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__DIN));
        } else if ((5U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__irq = 0U;
            vlSelfRef.__Vdly__enable = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 4U));
            if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 4U) 
                       & (~ (IData)(vlSelfRef.__PVT__enable))))) {
                VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__Vdly__dma_address, 
                                VL_CONCAT_III(15,1,14, 1U, 
                                              VL_CONCAT_III(14,8,6, (IData)(vlSelfRef.__PVT__sample_address), 0U)));
                VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__VdlyMask__dma_address, 0x7fffU);
                vlSelfRef.__Vdly__bytes_remaining = 
                    VL_CONCAT_III(12,8,4, (IData)(vlSelfRef.__PVT__sample_length), 0U);
            }
        }
    }
    if (vlSelfRef.__PVT__aclk1_d) {
        vlSelfRef.__Vdly__enable_1 = vlSelfRef.__PVT__enable;
        vlSelfRef.__Vdly__enable_2 = vlSelfRef.__PVT__enable_1;
        vlSelfRef.__Vdly__dmc_lsfr = VL_CONCAT_III(9,8,1, 
                                                   (0x000000ffU 
                                                    & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__dmc_lsfr), 0U, 8)), 
                                                   (1U 
                                                    & ((VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__dmc_lsfr), 8U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__dmc_lsfr), 4U)) 
                                                       | (~ 
                                                          VL_REDOR_I((IData)(vlSelfRef.__PVT__dmc_lsfr))))));
        if (vlSelfRef.__PVT__dmc_clock) {
            vlSelfRef.__Vdly__dmc_clock = 0U;
            vlSelfRef.__Vdly__dmc_lsfr = ((IData)(vlSelfRef.__PVT__PAL)
                                           ? vlSelfRef.__PVT__pal_pitch_lut
                                          [vlSelfRef.__PVT__frequency]
                                           : vlSelfRef.__PVT__ntsc_pitch_lut
                                          [vlSelfRef.__PVT__frequency]);
            vlSelfRef.__Vdly__sample_shift = VL_EXTEND_II(8,7, 
                                                          (0x0000007fU 
                                                           & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sample_shift), 1U, 7)));
            vlSelfRef.__Vdly__dmc_bits = (7U & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__dmc_bits)));
            if (VL_REDAND_II(3, (IData)(vlSelfRef.__PVT__dmc_bits))) {
                vlSelfRef.__Vdly__dmc_silence = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__have_buffer)));
                vlSelfRef.__Vdly__sample_shift = vlSelfRef.__PVT__sample_buffer;
                vlSelfRef.__Vdly__have_buffer = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__dmc_silence)))) {
                if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sample_shift), 0U))) {
                    if ((1U & (~ VL_REDAND_II(6, (0x0000003fU 
                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 1U, 6)))))) {
                        VL_ASSIGNSEL_II(8, 6, 1U, vlSelfRef.__Vdly__dmc_volume, 
                                        (0x0000003fU 
                                         & ((IData)(1U) 
                                            + VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 1U, 6))));
                    }
                } else if (VL_REDOR_I((0x0000003fU 
                                       & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 1U, 6)))) {
                    VL_ASSIGNSEL_II(8, 6, 1U, vlSelfRef.__Vdly__dmc_volume, 
                                    (0x0000003fU & 
                                     (VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 1U, 6) 
                                      - (IData)(1U))));
                }
            }
        }
        if (vlSelfRef.__PVT__dma_ack) {
            VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__Vdly__dma_address, 
                            (0x00007fffU & ((IData)(1U) 
                                            + VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__dma_address), 0U, 15))));
            VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__VdlyMask__dma_address, 0x7fffU);
            vlSelfRef.__Vdly__have_buffer = 1U;
            vlSelfRef.__Vdly__sample_buffer = vlSelfRef.__PVT__dma_data;
            if (VL_REDOR_I((IData)(vlSelfRef.__PVT__bytes_remaining))) {
                vlSelfRef.__Vdly__bytes_remaining = 
                    (0x00000fffU & ((IData)(vlSelfRef.__PVT__bytes_remaining) 
                                    - (IData)(1U)));
            } else {
                VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__Vdly__dma_address, 
                                VL_CONCAT_III(15,1,14, 1U, 
                                              VL_CONCAT_III(14,8,6, (IData)(vlSelfRef.__PVT__sample_address), 0U)));
                VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__VdlyMask__dma_address, 0x7fffU);
                vlSelfRef.__Vdly__bytes_remaining = 
                    VL_CONCAT_III(12,8,4, (IData)(vlSelfRef.__PVT__sample_length), 0U);
                vlSelfRef.__Vdly__enable = vlSelfRef.__PVT__loop;
                if (((~ (IData)(vlSelfRef.__PVT__loop)) 
                     & (IData)(vlSelfRef.__PVT__irq_enable))) {
                    vlSelfRef.__Vdly__irq = 1U;
                }
            }
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__enable_1 = vlSelfRef.__PVT__enable;
        vlSelfRef.__Vdly__enable_3 = vlSelfRef.__PVT__enable_2;
        vlSelfRef.__Vdly__dmc_volume_next = vlSelfRef.__PVT__dmc_volume;
        if ((0x0100U == (IData)(vlSelfRef.__PVT__dmc_lsfr))) {
            vlSelfRef.__Vdly__dmc_clock = 1U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__irq = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0U));
        vlSelfRef.__Vdly__dmc_volume = (0x000000ffU 
                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 1U, 8));
        vlSelfRef.__Vdly__dmc_volume_next = (0x000000ffU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 9U, 8));
        vlSelfRef.__Vdly__sample_shift = (0x000000ffU 
                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x11U, 8));
        vlSelfRef.__Vdly__bytes_remaining = (0x00000fffU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x19U, 12));
        vlSelfRef.__Vdly__dmc_bits = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x25U, 3));
        vlSelfRef.__Vdly__sample_buffer = (0x000000ffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x28U, 8));
        vlSelfRef.__Vdly__have_buffer = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x30U));
        vlSelfRef.__Vdly__enable = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x31U));
        vlSelfRef.__Vdly__enable_1 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x32U));
        vlSelfRef.__Vdly__enable_2 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x33U));
        vlSelfRef.__Vdly__enable_3 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC1, 0x34U));
        VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__Vdly__dma_address, 
                        (0x00007fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0U, 15)));
        VL_ASSIGNSEL_II(16, 15, 0U, vlSelfRef.__VdlyMask__dma_address, 0x7fffU);
        if (vlSelfRef.__PVT__SaveStateBus_load) {
            vlSelfRef.__Vdly__dmc_lsfr = (0x000001ffU 
                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x0fU, 9));
            vlSelfRef.__Vdly__loop = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x18U));
            vlSelfRef.__Vdly__frequency = (0x0000000fU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x19U, 4));
            vlSelfRef.__Vdly__irq_enable = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x1dU));
            vlSelfRef.__Vdly__sample_address = (0x000000ffU 
                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x1eU, 8));
            vlSelfRef.__Vdly__sample_length = (0x000000ffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x26U, 8));
            vlSelfRef.__Vdly__dmc_clock = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x2eU));
            vlSelfRef.__Vdly__dmc_silence = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_DMC2, 0x2fU));
        } else if (VL_REDOR_I((IData)(vlSelfRef.__PVT__dmc_lsfr))) {
            vlSelfRef.__Vdly__dmc_lsfr = ((IData)(vlSelfRef.__PVT__PAL)
                                           ? vlSelfRef.__PVT__pal_pitch_lut[0U]
                                           : vlSelfRef.__PVT__ntsc_pitch_lut[0U]);
        }
    }
    if (vlSelfRef.__PVT__cold_reset) {
        vlSelfRef.__Vdly__dmc_lsfr = 0U;
        vlSelfRef.__Vdly__loop = 0U;
        vlSelfRef.__Vdly__frequency = 0U;
        vlSelfRef.__Vdly__irq_enable = 0U;
        vlSelfRef.__Vdly__dmc_volume = 0U;
        vlSelfRef.__Vdly__dmc_volume_next = 0U;
        vlSelfRef.__Vdly__sample_address = 0U;
        vlSelfRef.__Vdly__sample_length = 0U;
    }
    vlSelfRef.__PVT__irq_enable = vlSelfRef.__Vdly__irq_enable;
    vlSelfRef.__PVT__loop = vlSelfRef.__Vdly__loop;
    vlSelfRef.__PVT__frequency = vlSelfRef.__Vdly__frequency;
    vlSelfRef.__PVT__sample_address = vlSelfRef.__Vdly__sample_address;
    vlSelfRef.__PVT__sample_length = vlSelfRef.__Vdly__sample_length;
    vlSelfRef.__PVT__dmc_lsfr = vlSelfRef.__Vdly__dmc_lsfr;
    vlSelfRef.__PVT__dmc_clock = vlSelfRef.__Vdly__dmc_clock;
    vlSelfRef.__PVT__dmc_silence = vlSelfRef.__Vdly__dmc_silence;
    vlSelfRef.__PVT__dmc_volume = vlSelfRef.__Vdly__dmc_volume;
    vlSelfRef.__PVT__bytes_remaining = vlSelfRef.__Vdly__bytes_remaining;
    vlSelfRef.__PVT__enable_1 = vlSelfRef.__Vdly__enable_1;
    vlSelfRef.__PVT__enable_2 = vlSelfRef.__Vdly__enable_2;
    vlSelfRef.__PVT__sample_shift = vlSelfRef.__Vdly__sample_shift;
    vlSelfRef.__PVT__dmc_bits = vlSelfRef.__Vdly__dmc_bits;
    vlSelfRef.__PVT__sample_buffer = vlSelfRef.__Vdly__sample_buffer;
    vlSelfRef.__PVT__enable = vlSelfRef.__Vdly__enable;
    vlSelfRef.__PVT__irq = vlSelfRef.__Vdly__irq;
    vlSelfRef.__PVT__dmc_volume_next = vlSelfRef.__Vdly__dmc_volume_next;
    vlSelfRef.__PVT__dma_address = (((IData)(vlSelfRef.__Vdly__dma_address) 
                                     & (IData)(vlSelfRef.__VdlyMask__dma_address)) 
                                    | ((IData)(vlSelfRef.__PVT__dma_address) 
                                       & (~ (IData)(vlSelfRef.__VdlyMask__dma_address))));
    vlSelfRef.__VdlyMask__dma_address = 0U;
    vlSelfRef.__PVT__have_buffer = vlSelfRef.__Vdly__have_buffer;
    vlSelfRef.__PVT__enable_3 = vlSelfRef.__Vdly__enable_3;
    VL_ASSIGNSEL_QI(64, 22, 0x00000018U, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    VL_CONCAT_III(22,16,6, VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__sample_length), (IData)(vlSelfRef.__PVT__sample_address)), 
                                  VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__irq_enable), 
                                                VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__frequency), (IData)(vlSelfRef.__PVT__loop)))));
    VL_ASSIGNSEL_QI(64, 9, 0x0fU, vlSelfRef.__PVT__SS_DMC2_BACK, vlSelfRef.__PVT__dmc_lsfr);
    VL_ASSIGNSEL_QI(64, 2, 0x0000002eU, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__dmc_silence), (IData)(vlSelfRef.__PVT__dmc_clock)));
    VL_ASSIGNSEL_QI(64, 8, 1U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__dmc_volume);
    VL_ASSIGNSEL_QI(64, 12, 0x19U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__bytes_remaining);
    VL_ASSIGNSEL_QI(64, 2, 0x00000032U, vlSelfRef.__PVT__SS_DMC1_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__enable_2), (IData)(vlSelfRef.__PVT__enable_1)));
    VL_ASSIGNSEL_QI(64, 8, 0x11U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__sample_shift);
    VL_ASSIGNSEL_QI(64, 11, 0x00000025U, vlSelfRef.__PVT__SS_DMC1_BACK, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__sample_buffer), (IData)(vlSelfRef.__PVT__dmc_bits)));
    VL_ASSIGNBIT_QI(0x31U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__enable);
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__irq);
    VL_ASSIGNSEL_QI(64, 8, 9U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__dmc_volume_next);
    vlSelfRef.__PVT__Sample = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 0U, 7));
    VL_ASSIGNSEL_QI(64, 15, 0U, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    (0x00007fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__dma_address), 0U, 15)));
    VL_ASSIGNBIT_QI(0x30U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__have_buffer);
    VL_ASSIGNBIT_QI(0x34U, vlSelfRef.__PVT__SS_DMC1_BACK, vlSelfRef.__PVT__enable_3);
    vlSelfRef.__PVT__dma_req = ((~ (IData)(vlSelfRef.__PVT__have_buffer)) 
                                & (IData)(vlSelfRef.__PVT__enable_3));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__Din 
        = vlSelfRef.__PVT__SS_DMC2_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__Din 
        = vlSelfRef.__PVT__SS_DMC1_BACK;
}

void Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]);
}

void Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_DMC1 = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__Dout;
}

void Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__3(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___nba_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_DMC2 = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__Dout;
}

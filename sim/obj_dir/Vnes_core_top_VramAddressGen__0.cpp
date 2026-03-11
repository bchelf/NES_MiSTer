// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

void Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Dout;
}

void Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ppu_incr = vlSelfRef.__PVT__ppu_incr;
    vlSelfRef.__Vdly__ppu_address_latch = vlSelfRef.__PVT__ppu_address_latch;
    vlSelfRef.__Vdly__vram_t = vlSelfRef.__PVT__vram_t;
    vlSelfRef.__Vdly__write_shift = vlSelfRef.__PVT__write_shift;
    vlSelfRef.__Vdly__vram_v = vlSelfRef.__PVT__vram_v;
    vlSelfRef.__Vdly__vram_x = vlSelfRef.__PVT__vram_x;
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__ppu_incr = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_vram, 0U));
        vlSelfRef.__Vdly__vram_v = (0x00007fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_vram, 1U, 15));
        vlSelfRef.__Vdly__vram_t = (0x00007fffU & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_vram, 0x10U, 15));
        vlSelfRef.__Vdly__vram_x = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_vram, 0x1fU, 3));
        vlSelfRef.__Vdly__ppu_address_latch = (1U & 
                                               VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_vram, 0x22U));
        vlSelfRef.__Vdly__write_shift = (3U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_vram, 0x33U, 2));
    } else if (vlSelfRef.__PVT__ce) {
        if (vlSelfRef.__PVT__copy_hscroll) {
            VL_ASSIGNBIT_II(0x0aU, vlSelfRef.__Vdly__vram_v, 
                            (1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0aU)));
            VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__Vdly__vram_v, 
                            (0x0000001fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0U, 5)));
        }
        if (vlSelfRef.__PVT__copy_vscroll) {
            VL_ASSIGNSEL_II(15, 4, 0x0bU, vlSelfRef.__Vdly__vram_v, 
                            (0x0000000fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0bU, 4)));
            VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_v, 
                            (0x0000001fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 5U, 5)));
        }
        if (((IData)(vlSelfRef.__PVT__inc_horizontal) 
             | ((IData)(vlSelfRef.__PVT__trigger_2007) 
                & (IData)(vlSelfRef.__PVT__is_rendering)))) {
            VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__Vdly__vram_v, 
                            (0x0000001fU & (((IData)(1U) 
                                             + VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0U, 5)) 
                                            & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0U, 5))));
            VL_ASSIGNBIT_II(0x0aU, vlSelfRef.__Vdly__vram_v, 
                            (1U & ((VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0aU) 
                                    ^ VL_REDAND_II(5, 
                                                   (0x0000001fU 
                                                    & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0U, 5)))) 
                                   & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0aU))));
            if (vlSelfRef.__PVT__copy_hscroll) {
                VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__Vdly__vram_t, 
                                (0x0000001fU & (((IData)(1U) 
                                                 + 
                                                 VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0U, 5)) 
                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0U, 5))));
                VL_ASSIGNBIT_II(0x0aU, vlSelfRef.__Vdly__vram_t, 
                                (1U & ((VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0aU) 
                                        ^ VL_REDAND_II(5, 
                                                       (0x0000001fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0U, 5)))) 
                                       & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0aU))));
            }
        }
        if (((IData)(vlSelfRef.__PVT__inc_vertical) 
             | ((IData)(vlSelfRef.__PVT__trigger_2007) 
                & (IData)(vlSelfRef.__PVT__is_rendering)))) {
            VL_ASSIGNSEL_II(15, 3, 0x0cU, vlSelfRef.__Vdly__vram_v, 
                            (7U & (((IData)(1U) + VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0cU, 3)) 
                                   & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0cU, 3))));
            VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_v, 
                            (0x0000001fU & (VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5) 
                                            & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 5U, 5))));
            VL_ASSIGNBIT_II(0x0bU, vlSelfRef.__Vdly__vram_v, 
                            (1U & (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0bU) 
                                   & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0bU))));
            if ((7U == (7U & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0cU, 3)))) {
                if ((0x1dU == (0x0000001fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5)))) {
                    VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_v, 0U);
                    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.__Vdly__vram_v, 
                                    (1U & ((~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0bU)) 
                                           & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0bU))));
                } else {
                    VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_v, 
                                    (0x0000001fU & 
                                     (((IData)(1U) 
                                       + VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5)) 
                                      & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 5U, 5))));
                }
            }
            if (vlSelfRef.__PVT__copy_vscroll) {
                VL_ASSIGNSEL_II(15, 3, 0x0cU, vlSelfRef.__Vdly__vram_t, 
                                (7U & (((IData)(1U) 
                                        + VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0cU, 3)) 
                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0cU, 3))));
                VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_t, 
                                (0x0000001fU & (VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5) 
                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 5U, 5))));
                VL_ASSIGNBIT_II(0x0bU, vlSelfRef.__Vdly__vram_t, 
                                (1U & (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0bU) 
                                       & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0bU))));
                if ((7U == (7U & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0cU, 3)))) {
                    if ((0x1dU == (0x0000001fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5)))) {
                        VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_t, 0U);
                        VL_ASSIGNBIT_II(0x0bU, vlSelfRef.__Vdly__vram_t, 
                                        (1U & ((~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 0x0bU)) 
                                               & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 0x0bU))));
                    } else {
                        VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_t, 
                                        (0x0000001fU 
                                         & (((IData)(1U) 
                                             + VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 5U, 5)) 
                                            & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t_mask), 5U, 5))));
                    }
                }
            }
        }
        if ((((~ (IData)(vlSelfRef.__PVT__is_rendering)) 
              & (IData)(vlSelfRef.__PVT__trigger_2007)) 
             & (~ (IData)(vlSelfRef.__PVT__clear)))) {
            vlSelfRef.__Vdly__vram_v = (0x00007fffU 
                                        & ((IData)(vlSelfRef.__PVT__vram_v) 
                                           + ((IData)(vlSelfRef.__PVT__ppu_incr)
                                               ? 0x0020U
                                               : 1U)));
        }
        if (((IData)(vlSelfRef.__PVT__write) & (0U 
                                                == (IData)(vlSelfRef.__PVT__ain)))) {
            VL_ASSIGNSEL_II(15, 2, 0x0000000aU, vlSelfRef.__Vdly__vram_t, 
                            VL_CONCAT_III(2,1,1, (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 1U)), 
                                          (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U))));
            vlSelfRef.__Vdly__ppu_incr = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 2U));
        } else if (((IData)(vlSelfRef.__PVT__write) 
                    & (5U == (IData)(vlSelfRef.__PVT__ain)))) {
            if (vlSelfRef.__PVT__ppu_address_latch) {
                VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__Vdly__vram_t, 
                                (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 3U, 5)));
                VL_ASSIGNSEL_II(15, 3, 0x0cU, vlSelfRef.__Vdly__vram_t, 
                                (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U, 3)));
            } else {
                VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__Vdly__vram_t, 
                                (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 3U, 5)));
                vlSelfRef.__Vdly__vram_x = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U, 3));
            }
            vlSelfRef.__Vdly__ppu_address_latch = (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__ppu_address_latch)));
        } else if (((IData)(vlSelfRef.__PVT__write) 
                    & (6U == (IData)(vlSelfRef.__PVT__ain)))) {
            vlSelfRef.__Vdly__ppu_address_latch = (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__ppu_address_latch)));
            if (vlSelfRef.__PVT__ppu_address_latch) {
                VL_ASSIGNSEL_II(15, 8, 0U, vlSelfRef.__Vdly__vram_t, vlSelfRef.__PVT__din);
            } else {
                VL_ASSIGNSEL_II(15, 7, 8U, vlSelfRef.__Vdly__vram_t, 
                                VL_EXTEND_II(7,6, (0x0000003fU 
                                                   & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U, 6))));
            }
        } else if (((IData)(vlSelfRef.__PVT__read) 
                    & (2U == (IData)(vlSelfRef.__PVT__ain)))) {
            vlSelfRef.__Vdly__ppu_address_latch = 0U;
        }
        vlSelfRef.__Vdly__write_shift = VL_CONCAT_III(2,1,1, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__write_shift), 0U)), 
                                                      (((IData)(vlSelfRef.__PVT__write) 
                                                        & (6U 
                                                           == (IData)(vlSelfRef.__PVT__ain))) 
                                                       & (IData)(vlSelfRef.__PVT__ppu_address_latch)));
        if (vlSelfRef.__PVT__clear) {
            vlSelfRef.__Vdly__vram_t = 0U;
            vlSelfRef.__Vdly__vram_x = 0U;
            vlSelfRef.__Vdly__ppu_address_latch = 0U;
        }
    }
    vlSelfRef.__PVT__ppu_incr = vlSelfRef.__Vdly__ppu_incr;
    vlSelfRef.__PVT__ppu_address_latch = vlSelfRef.__Vdly__ppu_address_latch;
    vlSelfRef.__PVT__vram_t = vlSelfRef.__Vdly__vram_t;
    vlSelfRef.__PVT__write_shift = vlSelfRef.__Vdly__write_shift;
    vlSelfRef.__PVT__vram_x = vlSelfRef.__Vdly__vram_x;
    vlSelfRef.__PVT__vram_v = vlSelfRef.__Vdly__vram_v;
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__ppu_incr);
    VL_ASSIGNBIT_QI(0x22U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__ppu_address_latch);
    VL_ASSIGNSEL_QI(64, 15, 0x10U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__vram_t);
    vlSelfRef.__PVT__write_2006b = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__write_shift), 1U));
    VL_ASSIGNSEL_QI(64, 2, 0x33U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__write_shift);
    VL_ASSIGNSEL_QI(64, 3, 0x1fU, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__vram_x);
    vlSelfRef.__PVT__fine_x_scroll = vlSelfRef.__PVT__vram_x;
    VL_ASSIGNSEL_QI(64, 15, 1U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__vram_v);
    vlSelfRef.__PVT__vram = vlSelfRef.__PVT__vram_v;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__Din 
        = vlSelfRef.__PVT__SS_vram_BACK;
}

void Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Dout;
}

void Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_vram = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__Dout;
}

void Vnes_core_top_VramAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__vram0__0(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__vram0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__inc_horizontal = (((7U == (7U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                        & ((0x00ffU 
                                            >= (IData)(vlSelfRef.__PVT__cycle)) 
                                           | ((0x0140U 
                                               <= (IData)(vlSelfRef.__PVT__cycle)) 
                                              & (0x014fU 
                                                 >= (IData)(vlSelfRef.__PVT__cycle))))) 
                                       & (IData)(vlSelfRef.__PVT__is_rendering));
    vlSelfRef.__PVT__inc_vertical = ((0x00ffU == (IData)(vlSelfRef.__PVT__cycle)) 
                                     & (IData)(vlSelfRef.__PVT__is_rendering));
}

void Vnes_core_top_VramAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__vram0__1(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__vram0__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__copy_hscroll = (((0x0100U == (IData)(vlSelfRef.__PVT__cycle)) 
                                      & (IData)(vlSelfRef.__PVT__is_rendering)) 
                                     | (IData)(vlSelfRef.__PVT__write_2006b));
    vlSelfRef.__PVT__copy_vscroll = (((((0x0117U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                        & (0x012fU 
                                           >= (IData)(vlSelfRef.__PVT__cycle))) 
                                       & (IData)(vlSelfRef.__PVT__is_pre_render)) 
                                      & (IData)(vlSelfRef.__PVT__is_rendering)) 
                                     | (IData)(vlSelfRef.__PVT__write_2006b));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.__PVT__vram_t_mask, 
                    (1U & VL_BITSEL_IIII(6, (((IData)(vlSelfRef.__PVT__write_2006b) 
                                              | (IData)(vlSelfRef.__PVT__copy_hscroll))
                                              ? VL_CONCAT_III(6,1,5, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0aU)), 
                                                              (0x0000001fU 
                                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0U, 5)))
                                              : 0x3fU), 5U)));
    VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000001fU & VL_SEL_IIII(6, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_hscroll))
                                                    ? 
                                                   VL_CONCAT_III(6,1,5, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0aU)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0U, 5)))
                                                    : 0x3fU), 0U, 5)));
    VL_ASSIGNSEL_II(15, 4, 0x0bU, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000000fU & VL_SEL_IIII(9, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_vscroll))
                                                    ? 
                                                   VL_CONCAT_III(9,4,5, 
                                                                 (0x0000000fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0bU, 4)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 5U, 5)))
                                                    : 0x01ffU), 5U, 4)));
    VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000001fU & VL_SEL_IIII(9, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_vscroll))
                                                    ? 
                                                   VL_CONCAT_III(9,4,5, 
                                                                 (0x0000000fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0bU, 4)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 5U, 5)))
                                                    : 0x01ffU), 0U, 5)));
}

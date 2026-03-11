// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

void Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___ico_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Dout;
}

void Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__oam_eval__DOT__eval_count = vlSelfRef.__PVT__oam_eval__DOT__eval_count;
    vlSelfRef.__Vdly__oam_eval__DOT__last_y = vlSelfRef.__PVT__oam_eval__DOT__last_y;
    vlSelfRef.__Vdly__oam_eval__DOT__last_tile = vlSelfRef.__PVT__oam_eval__DOT__last_tile;
    vlSelfRef.__Vdly__oam_eval__DOT__last_attr = vlSelfRef.__PVT__oam_eval__DOT__last_attr;
    vlSelfRef.__VdlySet__oam_temp__v0 = 0U;
    vlSelfRef.__VdlySet__oam_temp__v65 = 0U;
    vlSelfRef.__VdlySet__oam_temp__v67 = 0U;
    vlSelfRef.__VdlySet__oam_temp__v71 = 0U;
    vlSelfRef.__VdlySet__oam__v0 = 0U;
    vlSelfRef.__VdlySet__oam__v9 = 0U;
    vlSelfRef.__VdlySet__oam__v1 = 0U;
    vlSelfRef.__Vdly__oam_secondary_row_ex = vlSelfRef.__PVT__oam_secondary_row_ex;
    vlSelfRef.__Vdly__n_ovr = vlSelfRef.__PVT__n_ovr;
    vlSelfRef.__Vdly__spr_counter = vlSelfRef.__PVT__spr_counter;
    vlSelfRef.__Vdly__sprite0_curr = vlSelfRef.__PVT__sprite0_curr;
    vlSelfRef.__Vdly__ex_ovr = vlSelfRef.__PVT__ex_ovr;
    vlSelfRef.__Vdly__oam_addr_ex = vlSelfRef.__PVT__oam_addr_ex;
    vlSelfRef.__Vdly__old_rendering = vlSelfRef.__PVT__old_rendering;
    vlSelfRef.__Vdly__oam_secondary_ovr = vlSelfRef.__PVT__oam_secondary_ovr;
    vlSelfRef.__Vdly__old_using_secondary = vlSelfRef.__PVT__old_using_secondary;
    vlSelfRef.__Vdly__oam_secondary_addr = vlSelfRef.__PVT__oam_secondary_addr;
    vlSelfRef.__Vdly__oam_addr = vlSelfRef.__PVT__oam_addr;
    vlSelfRef.__Vdly__repeat_count = vlSelfRef.__PVT__repeat_count;
    vlSelfRef.__Vdly__Savestate_OAMReadData = vlSelfRef.__PVT__Savestate_OAMReadData;
    vlSelfRef.__Vdly__oam_secondary_row = vlSelfRef.__PVT__oam_secondary_row;
    vlSelfRef.__Vdly__oam_secondary_column = vlSelfRef.__PVT__oam_secondary_column;
    vlSelfRef.__Vdly__oam_state = vlSelfRef.__PVT__oam_state;
    vlSelfRef.__Vdly__overflow = vlSelfRef.__PVT__overflow;
    vlSelfRef.__Vdly__sprite0 = vlSelfRef.__PVT__sprite0;
    vlSelfRef.__Vdly__oam_data = vlSelfRef.__PVT__oam_data;
    vlSelfRef.__Vdly__oam_bus_ex = vlSelfRef.__PVT__oam_bus_ex;
    if (vlSelfRef.__PVT__Savestate_OAMRdEn) {
        vlSelfRef.__Vdly__Savestate_OAMReadData = vlSelfRef.__PVT__oam
            [vlSelfRef.__PVT__Savestate_OAMAddr];
    }
    if (vlSelfRef.__PVT__Savestate_OAMWrEn) {
        vlSelfRef.__VdlyVal__oam__v0 = vlSelfRef.__PVT__Savestate_OAMWriteData;
        vlSelfRef.__VdlyDim0__oam__v0 = vlSelfRef.__PVT__Savestate_OAMAddr;
        vlSelfRef.__VdlySet__oam__v0 = 1U;
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__VdlySet__oam_temp__v0 = 1U;
        vlSelfRef.__Vdly__oam_data = (0x000000ffU & 
                                      VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0U, 8));
        vlSelfRef.__Vdly__oam_secondary_ovr = (1U & 
                                               (~ VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 8U)));
        vlSelfRef.__Vdly__oam_secondary_addr = (0x0000001fU 
                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 9U, 5));
        vlSelfRef.__Vdly__oam_secondary_row = (7U & 
                                               VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x0fU, 3));
        vlSelfRef.__Vdly__oam_secondary_row_ex = (0x0000000fU 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x12U, 4));
        vlSelfRef.__Vdly__n_ovr = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x16U));
        vlSelfRef.__Vdly__spr_counter = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x17U, 3));
        vlSelfRef.__Vdly__repeat_count = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x1aU, 3));
        vlSelfRef.__Vdly__sprite0 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x1dU));
        vlSelfRef.__Vdly__sprite0_curr = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x1eU));
        vlSelfRef.__Vdly__overflow = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x26U));
        vlSelfRef.__Vdly__oam_secondary_column = (3U 
                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x27U, 2));
        vlSelfRef.__Vdly__ex_ovr = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x29U));
        vlSelfRef.__Vdly__oam_addr_ex = (0x0000003fU 
                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x2aU, 6));
        vlSelfRef.__Vdly__oam_addr = (0x000000ffU & 
                                      VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x30U, 8));
        if ((0U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x38U, 3)))) {
            vlSelfRef.__Vdly__oam_state = 0U;
        } else if ((1U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x38U, 3)))) {
            vlSelfRef.__Vdly__oam_state = 1U;
        } else if ((2U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x38U, 3)))) {
            vlSelfRef.__Vdly__oam_state = 2U;
        } else if ((3U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x38U, 3)))) {
            vlSelfRef.__Vdly__oam_state = 3U;
        } else if ((4U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x38U, 3)))) {
            vlSelfRef.__Vdly__oam_state = 4U;
        }
        vlSelfRef.__Vdly__old_rendering = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x3bU));
        vlSelfRef.__Vdly__old_using_secondary = (1U 
                                                 & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_OAMEVAL, 0x3cU));
    } else if (vlSelfRef.__PVT__ce) {
        if ((0x0154U == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__oam_state = 1U;
        } else if ((0x003fU == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__oam_state = 2U;
        } else if ((0x00ffU == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__oam_state = 3U;
        } else if ((0x013fU == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__oam_state = 4U;
        }
        if (vlSelfRef.__PVT__end_of_line) {
            vlSelfRef.__Vdly__oam_state = 1U;
        }
        vlSelfRef.__Vdly__old_rendering = vlSelfRef.__PVT__rendering;
        vlSelfRef.__Vdly__old_using_secondary = vlSelfRef.__PVT__using_secondary;
        if (((((IData)(vlSelfRef.__PVT__old_rendering) 
               != (IData)(vlSelfRef.__PVT__rendering)) 
              | (IData)(vlSelfRef.__PVT__corrupting_write)) 
             & (~ (IData)(vlSelfRef.__PVT__PAL)))) {
            if ((((IData)(vlSelfRef.__PVT__old_using_secondary) 
                  != (IData)(vlSelfRef.__PVT__using_secondary)) 
                 | (IData)(vlSelfRef.__PVT__corrupting_write))) {
                vlSelfRef.__VdlyVal__oam__v1 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 0U)];
                vlSelfRef.__VdlyDim0__oam__v1 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 0U);
                vlSelfRef.__VdlySet__oam__v1 = 1U;
                vlSelfRef.__VdlyVal__oam__v2 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 1U)];
                vlSelfRef.__VdlyDim0__oam__v2 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 1U);
                vlSelfRef.__VdlyVal__oam__v3 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 2U)];
                vlSelfRef.__VdlyDim0__oam__v3 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 2U);
                vlSelfRef.__VdlyVal__oam__v4 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 3U)];
                vlSelfRef.__VdlyDim0__oam__v4 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 3U);
                vlSelfRef.__VdlyVal__oam__v5 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 4U)];
                vlSelfRef.__VdlyDim0__oam__v5 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 4U);
                vlSelfRef.__VdlyVal__oam__v6 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 5U)];
                vlSelfRef.__VdlyDim0__oam__v6 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 5U);
                vlSelfRef.__VdlyVal__oam__v7 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 6U)];
                vlSelfRef.__VdlyDim0__oam__v7 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 6U);
                vlSelfRef.__VdlyVal__oam__v8 = vlSelfRef.__PVT__oam
                    [VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_last), 7U)];
                vlSelfRef.__VdlyDim0__oam__v8 = VL_CONCAT_III(8,5,3, (IData)(vlSelfRef.__PVT__oam_row_cur), 7U);
                vlSelfRef.__VdlyVal__oam_temp__v64 
                    = vlSelfRef.__PVT__oam_temp[VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_row_last))];
                vlSelfRef.__VdlyDim0__oam_temp__v64 
                    = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_row_cur));
            }
        }
        if (vlSelfRef.__PVT__end_of_line) {
            vlSelfRef.__Vdly__oam_secondary_row_ex = 0U;
            vlSelfRef.__Vdly__oam_addr_ex = 0U;
            vlSelfRef.__Vdly__ex_ovr = 0U;
            vlSelfRef.__Vdly__spr_counter = 0U;
            vlSelfRef.__Vdly__repeat_count = 0U;
            vlSelfRef.__Vdly__oam_bus_ex = 0xffffffffU;
        }
        if (vlSelfRef.__PVT__rendering) {
            if ((0x0040U > (IData)(vlSelfRef.__PVT__cycle))) {
                vlSelfRef.__Vdly__oam_data = 0xffU;
                vlSelfRef.__Vdly__n_ovr = 0U;
                if (vlSelfRef.__PVT__secondary_write) {
                    if (vlSelfRef.__PVT__oam_wr_enabled) {
                        vlSelfRef.__VdlyDim0__oam_temp__v65 
                            = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr));
                        vlSelfRef.__VdlySet__oam_temp__v65 = 1U;
                        vlSelfRef.__VdlyDim0__oam_temp__v66 
                            = VL_CONCAT_III(6,1,5, 1U, (IData)(vlSelfRef.__PVT__oam_secondary_addr));
                    }
                    vlSelfRef.__Vdly__oam_secondary_ovr 
                        = (1U & VL_BITSEL_IIII(6, (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)))), 5U));
                    vlSelfRef.__Vdly__oam_secondary_addr 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__oam_secondary_addr)));
                }
                if ((1U & (~ VL_REDAND_II(3, (IData)(vlSelfRef.__PVT__spr_counter))))) {
                    vlSelfRef.__Vdly__oam_addr_ex = 
                        (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__oam_addr_ex)));
                    if ((((0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8)) 
                          >= vlSelfRef.__PVT__oam[VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 0U)]) 
                         & (VL_EXTEND_II(32,8, (0x000000ffU 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8))) 
                            < (VL_EXTEND_II(32,8, vlSelfRef.__PVT__oam
                                            [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 0U)]) 
                               + ((IData)(vlSelfRef.__PVT__obj_size)
                                   ? 0x00000010U : 8U))))) {
                        vlSelfRef.__Vdly__spr_counter 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__spr_counter)));
                    }
                }
            } else if ((0x0100U > (IData)(vlSelfRef.__PVT__cycle))) {
                if (((IData)(vlSelfRef.__PVT__evaluating) 
                     | ((IData)(vlSelfRef.__PVT__visible) 
                        & (IData)(vlSelfRef.__PVT__PAL)))) {
                    if ((VL_REDAND_II(3, (IData)(vlSelfRef.__PVT__spr_counter)) 
                         & (~ (IData)(vlSelfRef.__PVT__ex_ovr)))) {
                        vlSelfRef.__Vdly__ex_ovr = 
                            (1U & VL_BITSEL_IIII(7, 
                                                 (0x0000007fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_EXTEND_II(7,6, (IData)(vlSelfRef.__PVT__oam_addr_ex)))), 6U));
                        vlSelfRef.__Vdly__oam_addr_ex 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__oam_addr_ex)));
                        if ((((0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8)) 
                              >= vlSelfRef.__PVT__oam
                              [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 0U)]) 
                             & (VL_EXTEND_II(32,8, 
                                             (0x000000ffU 
                                              & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8))) 
                                < (VL_EXTEND_II(32,8, vlSelfRef.__PVT__oam
                                                [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 0U)]) 
                                   + ((IData)(vlSelfRef.__PVT__obj_size)
                                       ? 0x00000010U
                                       : 8U))))) {
                            if ((8U > (IData)(vlSelfRef.__PVT__oam_secondary_row_ex))) {
                                vlSelfRef.__Vdly__oam_secondary_row_ex 
                                    = (0x0000000fU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__oam_secondary_row_ex)));
                                vlSelfRef.__VdlyVal__oam_temp__v67 
                                    = vlSelfRef.__PVT__oam
                                    [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 0U)];
                                vlSelfRef.__VdlyDim0__oam_temp__v67 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + VL_CONCAT_III(6,4,2, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), 0U)));
                                vlSelfRef.__VdlySet__oam_temp__v67 = 1U;
                                vlSelfRef.__VdlyVal__oam_temp__v68 
                                    = vlSelfRef.__PVT__oam
                                    [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 1U)];
                                vlSelfRef.__VdlyDim0__oam_temp__v68 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + VL_CONCAT_III(6,4,2, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), 1U)));
                                vlSelfRef.__VdlyVal__oam_temp__v69 
                                    = vlSelfRef.__PVT__oam
                                    [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 2U)];
                                vlSelfRef.__VdlyDim0__oam_temp__v69 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + VL_CONCAT_III(6,4,2, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), 2U)));
                                vlSelfRef.__VdlyVal__oam_temp__v70 
                                    = vlSelfRef.__PVT__oam
                                    [VL_CONCAT_III(8,6,2, (IData)(vlSelfRef.__PVT__oam_addr_ex), 3U)];
                                vlSelfRef.__VdlyDim0__oam_temp__v70 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + VL_CONCAT_III(6,4,2, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), 3U)));
                            }
                        }
                    }
                    if (vlSelfRef.__PVT__secondary_write) {
                        if (((IData)(vlSelfRef.__PVT__oam_wr_enabled) 
                             & (~ (IData)(vlSelfRef.__PVT__n_ovr)))) {
                            vlSelfRef.__VdlyVal__oam_temp__v71 
                                = vlSelfRef.__PVT__oam_dbus;
                            vlSelfRef.__VdlyDim0__oam_temp__v71 
                                = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr));
                            vlSelfRef.__VdlySet__oam_temp__v71 = 1U;
                        } else {
                            vlSelfRef.__Vdly__oam_data 
                                = vlSelfRef.__PVT__oam_temp
                                [VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr))];
                        }
                        if ((0x0041U == (IData)(vlSelfRef.__PVT__cycle))) {
                            vlSelfRef.__Vdly__sprite0_curr 
                                = ((IData)(vlSelfRef.__PVT__in_range) 
                                   & (~ (IData)(vlSelfRef.__PVT__is_pre_render)));
                        }
                        if ((0U == (IData)(vlSelfRef.__PVT__oam_eval__DOT__eval_count))) {
                            if ((((IData)(vlSelfRef.__PVT__in_range) 
                                  & (~ (IData)(vlSelfRef.__PVT__is_pre_render))) 
                                 & (~ (IData)(vlSelfRef.__PVT__n_ovr)))) {
                                vlSelfRef.__Vdly__oam_eval__DOT__eval_count = 1U;
                                vlSelfRef.__Vdly__n_ovr 
                                    = (1U & VL_BITSEL_IIII(9, 
                                                           (0x000001ffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                                vlSelfRef.__Vdly__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__oam_addr)));
                                if (vlSelfRef.__PVT__oam_secondary_ovr) {
                                    vlSelfRef.__Vdly__overflow = 1U;
                                } else {
                                    vlSelfRef.__Vdly__oam_secondary_ovr 
                                        = (1U & VL_BITSEL_IIII(6, 
                                                               (0x0000003fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)))), 5U));
                                    vlSelfRef.__Vdly__oam_secondary_addr 
                                        = (0x0000001fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__oam_secondary_addr)));
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__is_pre_render)))) {
                                if (((IData)(vlSelfRef.__PVT__oam_secondary_ovr) 
                                     & (~ (IData)(vlSelfRef.__PVT__n_ovr)))) {
                                    vlSelfRef.__Vdly__n_ovr 
                                        = (1U & VL_BITSEL_IIII(7, 
                                                               (0x0000007fU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   VL_EXTEND_II(7,6, 
                                                                                (0x0000003fU 
                                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6))))), 6U));
                                    vlSelfRef.__Vdly__oam_addr 
                                        = VL_CONCAT_III(8,6,2, 
                                                        (0x0000003fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6))), 
                                                        (3U 
                                                         & ((IData)(1U) 
                                                            + 
                                                            VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 0U, 2))));
                                } else {
                                    vlSelfRef.__Vdly__n_ovr 
                                        = (1U & VL_BITSEL_IIII(9, 
                                                               (0x000001ffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                                    vlSelfRef.__Vdly__oam_addr 
                                        = (0xfcU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelfRef.__PVT__oam_addr)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.__PVT__oam_eval__DOT__eval_count))) {
                            if (((IData)(vlSelfRef.__PVT__in_range) 
                                 & (~ (IData)(vlSelfRef.__PVT__n_ovr)))) {
                                vlSelfRef.__Vdly__n_ovr 
                                    = (1U & VL_BITSEL_IIII(9, 
                                                           (0x000001ffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                                vlSelfRef.__Vdly__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__oam_addr)));
                            } else if (((IData)(vlSelfRef.__PVT__oam_secondary_ovr) 
                                        & (~ (IData)(vlSelfRef.__PVT__n_ovr)))) {
                                vlSelfRef.__Vdly__n_ovr 
                                    = (1U & VL_BITSEL_IIII(9, 
                                                           (0x000001ffU 
                                                            & ((IData)(5U) 
                                                               + 
                                                               VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                                vlSelfRef.__Vdly__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(5U) 
                                          + (IData)(vlSelfRef.__PVT__oam_addr)));
                            } else {
                                vlSelfRef.__Vdly__n_ovr 
                                    = (1U & VL_BITSEL_IIII(9, 
                                                           (0x000001ffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                                vlSelfRef.__Vdly__oam_addr 
                                    = (0xfcU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__oam_addr)));
                            }
                            if (vlSelfRef.__PVT__oam_secondary_ovr) {
                                vlSelfRef.__Vdly__n_ovr = 1U;
                            } else {
                                vlSelfRef.__Vdly__oam_eval__DOT__last_y 
                                    = VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                   [
                                                   VL_CONCAT_III(8,6,2, 
                                                                 (0x0000003fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 0U)]);
                                vlSelfRef.__Vdly__oam_eval__DOT__last_tile 
                                    = VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                   [
                                                   VL_CONCAT_III(8,6,2, 
                                                                 (0x0000003fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 1U)]);
                                vlSelfRef.__Vdly__oam_eval__DOT__last_attr 
                                    = VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                   [
                                                   VL_CONCAT_III(8,6,2, 
                                                                 (0x0000003fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 2U)]);
                                if ((((VL_REDOR_I((7U 
                                                   & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__oam_secondary_addr), 2U, 3))) 
                                       & ((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_y) 
                                          == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                          [
                                                          VL_CONCAT_III(8,6,2, 
                                                                        (0x0000003fU 
                                                                         & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 0U)]))) 
                                      & ((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_tile) 
                                         == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                         [
                                                         VL_CONCAT_III(8,6,2, 
                                                                       (0x0000003fU 
                                                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 1U)]))) 
                                     & ((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_attr) 
                                        == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam
                                                        [
                                                        VL_CONCAT_III(8,6,2, 
                                                                      (0x0000003fU 
                                                                       & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6)), 2U)])))) {
                                    vlSelfRef.__Vdly__repeat_count 
                                        = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__repeat_count)));
                                }
                            }
                        } else {
                            vlSelfRef.__Vdly__n_ovr 
                                = (1U & VL_BITSEL_IIII(9, 
                                                       (0x000001ffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__oam_addr)))), 8U));
                            vlSelfRef.__Vdly__oam_addr 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__oam_addr)));
                        }
                    } else {
                        vlSelfRef.__Vdly__oam_data 
                            = ((IData)(vlSelfRef.__PVT__is_pre_render)
                                ? vlSelfRef.__PVT__oam_temp
                               [VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr))]
                                : (vlSelfRef.__PVT__oam
                                   [vlSelfRef.__PVT__oam_read_addr] 
                                   & ((IData)(vlSelfRef.__PVT__is_attr_byte)
                                       ? 0xe3U : 0xffU)));
                    }
                    if (((((((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_y) 
                             == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam_temp[32U])) 
                            & ((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_tile) 
                               == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam_temp[33U]))) 
                           & ((IData)(vlSelfRef.__PVT__oam_eval__DOT__last_attr) 
                              == VL_EXTEND_II(9,8, vlSelfRef.__PVT__oam_temp[34U]))) 
                          & (0x00ffU == (IData)(vlSelfRef.__PVT__cycle))) 
                         & (7U > (IData)(vlSelfRef.__PVT__repeat_count)))) {
                        vlSelfRef.__Vdly__repeat_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__repeat_count)));
                    }
                }
                if (vlSelfRef.__PVT__n_ovr) {
                    vlSelfRef.__Vdly__n_ovr = 1U;
                }
            } else if ((0x0140U > (IData)(vlSelfRef.__PVT__cycle))) {
                vlSelfRef.__Vdly__oam_addr = 0U;
                vlSelfRef.__Vdly__sprite0 = vlSelfRef.__PVT__sprite0_curr;
                vlSelfRef.__Vdly__oam_data = vlSelfRef.__PVT__oam_temp
                    [VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr))];
                if ((((3U > (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                      | (7U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) 
                     & (~ (IData)(vlSelfRef.__PVT__oam_secondary_ovr)))) {
                    vlSelfRef.__Vdly__oam_secondary_ovr 
                        = (1U & VL_BITSEL_IIII(6, (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)))), 5U));
                    vlSelfRef.__Vdly__oam_secondary_addr 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__oam_secondary_addr)));
                }
                if ((0U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) {
                    vlSelfRef.__Vdly__oam_bus_ex = 
                        VL_CONCAT_III(32,16,16, VL_CONCAT_III(16,8,8, vlSelfRef.__PVT__oam_temp
                                                              [
                                                              VL_CONCAT_III(6,1,5, 1U, 
                                                                            VL_CONCAT_III(5,3,2, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__oam_secondary_addr), 2U, 3)), 3U))], vlSelfRef.__PVT__oam_temp
                                                              [
                                                              VL_CONCAT_III(6,1,5, 1U, 
                                                                            VL_CONCAT_III(5,3,2, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__oam_secondary_addr), 2U, 3)), 2U))]), 
                                      VL_CONCAT_III(16,8,8, vlSelfRef.__PVT__oam_temp
                                                    [
                                                    VL_CONCAT_III(6,1,5, 1U, 
                                                                  VL_CONCAT_III(5,3,2, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__oam_secondary_addr), 2U, 3)), 1U))], vlSelfRef.__PVT__oam_temp
                                                    [
                                                    VL_CONCAT_III(6,1,5, 1U, 
                                                                  VL_CONCAT_III(5,3,2, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__oam_secondary_addr), 2U, 3)), 0U))]));
                }
            } else {
                vlSelfRef.__Vdly__oam_data = vlSelfRef.__PVT__oam_temp[0U];
            }
        } else {
            vlSelfRef.__Vdly__oam_data = vlSelfRef.__PVT__oam
                [vlSelfRef.__PVT__oam_read_addr];
        }
        if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__oam_eval__DOT__eval_count)) 
             & (IData)(vlSelfRef.__PVT__secondary_write))) {
            vlSelfRef.__Vdly__oam_eval__DOT__eval_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__oam_eval__DOT__eval_count)));
            if (vlSelfRef.__PVT__oam_secondary_ovr) {
                vlSelfRef.__Vdly__overflow = 1U;
            } else {
                vlSelfRef.__Vdly__oam_secondary_ovr 
                    = (1U & VL_BITSEL_IIII(6, (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)))), 5U));
                vlSelfRef.__Vdly__oam_secondary_addr 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__oam_secondary_addr)));
            }
        }
        if (vlSelfRef.__PVT__clear_signal) {
            vlSelfRef.__Vdly__overflow = 0U;
        }
        if (vlSelfRef.__PVT__oam_data_write) {
            if (vlSelfRef.__PVT__rendering) {
                vlSelfRef.__Vdly__oam_addr = VL_CONCAT_III(8,6,2, 
                                                           (0x0000003fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 2U, 6))), 0U);
            } else {
                vlSelfRef.__VdlyVal__oam__v9 = ((IData)(vlSelfRef.__PVT__is_attr_byte)
                                                 ? 
                                                (0xe3U 
                                                 & (IData)(vlSelfRef.__PVT__oam_din))
                                                 : (IData)(vlSelfRef.__PVT__oam_din));
                vlSelfRef.__VdlyDim0__oam__v9 = vlSelfRef.__PVT__oam_read_addr;
                vlSelfRef.__VdlySet__oam__v9 = 1U;
                vlSelfRef.__Vdly__oam_data = vlSelfRef.__PVT__oam_din;
                vlSelfRef.__Vdly__oam_addr = (0x000000ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__oam_addr)));
            }
        }
        if (vlSelfRef.__PVT__oam_addr_write) {
            vlSelfRef.__Vdly__oam_addr = vlSelfRef.__PVT__oam_din;
        }
        if (vlSelfRef.__PVT__clear_secondary_addr) {
            vlSelfRef.__Vdly__oam_secondary_addr = 0U;
            vlSelfRef.__Vdly__oam_secondary_ovr = 0U;
        }
    }
    vlSelfRef.__PVT__oam_eval__DOT__eval_count = vlSelfRef.__Vdly__oam_eval__DOT__eval_count;
    vlSelfRef.__PVT__oam_eval__DOT__last_y = vlSelfRef.__Vdly__oam_eval__DOT__last_y;
    vlSelfRef.__PVT__oam_eval__DOT__last_tile = vlSelfRef.__Vdly__oam_eval__DOT__last_tile;
    vlSelfRef.__PVT__oam_eval__DOT__last_attr = vlSelfRef.__Vdly__oam_eval__DOT__last_attr;
    vlSelfRef.__PVT__Savestate_OAMReadData = vlSelfRef.__Vdly__Savestate_OAMReadData;
    if (vlSelfRef.__VdlySet__oam_temp__v0) {
        vlSelfRef.__PVT__oam_temp[0U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[1U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[2U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[3U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[4U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[5U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[6U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[7U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[8U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[9U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[10U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[11U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[12U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[13U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[14U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[15U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[16U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[17U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[18U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[19U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[20U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[21U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[22U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[23U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[24U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[25U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[26U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[27U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[28U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[29U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[30U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[31U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[32U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[33U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[34U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[35U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[36U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[37U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[38U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[39U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[40U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[41U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[42U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[43U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[44U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[45U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[46U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[47U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[48U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[49U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[50U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[51U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[52U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[53U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[54U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[55U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[56U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[57U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[58U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[59U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[60U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[61U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[62U] = 0xffU;
        vlSelfRef.__PVT__oam_temp[63U] = 0xffU;
    }
    if (vlSelfRef.__VdlySet__oam__v1) {
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v64] 
            = vlSelfRef.__VdlyVal__oam_temp__v64;
    }
    if (vlSelfRef.__VdlySet__oam_temp__v65) {
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v65] = 0xffU;
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v66] = 0xffU;
    }
    if (vlSelfRef.__VdlySet__oam_temp__v67) {
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v67] 
            = vlSelfRef.__VdlyVal__oam_temp__v67;
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v68] 
            = vlSelfRef.__VdlyVal__oam_temp__v68;
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v69] 
            = vlSelfRef.__VdlyVal__oam_temp__v69;
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v70] 
            = vlSelfRef.__VdlyVal__oam_temp__v70;
    }
    if (vlSelfRef.__VdlySet__oam_temp__v71) {
        vlSelfRef.__PVT__oam_temp[vlSelfRef.__VdlyDim0__oam_temp__v71] 
            = vlSelfRef.__VdlyVal__oam_temp__v71;
    }
    if (vlSelfRef.__VdlySet__oam__v0) {
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v0] 
            = vlSelfRef.__VdlyVal__oam__v0;
    }
    if (vlSelfRef.__VdlySet__oam__v1) {
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v1] 
            = vlSelfRef.__VdlyVal__oam__v1;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v2] 
            = vlSelfRef.__VdlyVal__oam__v2;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v3] 
            = vlSelfRef.__VdlyVal__oam__v3;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v4] 
            = vlSelfRef.__VdlyVal__oam__v4;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v5] 
            = vlSelfRef.__VdlyVal__oam__v5;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v6] 
            = vlSelfRef.__VdlyVal__oam__v6;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v7] 
            = vlSelfRef.__VdlyVal__oam__v7;
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v8] 
            = vlSelfRef.__VdlyVal__oam__v8;
    }
    if (vlSelfRef.__VdlySet__oam__v9) {
        vlSelfRef.__PVT__oam[vlSelfRef.__VdlyDim0__oam__v9] 
            = vlSelfRef.__VdlyVal__oam__v9;
    }
    vlSelfRef.__PVT__oam_secondary_row = vlSelfRef.__Vdly__oam_secondary_row;
    vlSelfRef.__PVT__oam_secondary_row_ex = vlSelfRef.__Vdly__oam_secondary_row_ex;
    vlSelfRef.__PVT__n_ovr = vlSelfRef.__Vdly__n_ovr;
    vlSelfRef.__PVT__spr_counter = vlSelfRef.__Vdly__spr_counter;
    vlSelfRef.__PVT__sprite0_curr = vlSelfRef.__Vdly__sprite0_curr;
    vlSelfRef.__PVT__oam_secondary_column = vlSelfRef.__Vdly__oam_secondary_column;
    vlSelfRef.__PVT__ex_ovr = vlSelfRef.__Vdly__ex_ovr;
    vlSelfRef.__PVT__oam_addr_ex = vlSelfRef.__Vdly__oam_addr_ex;
    vlSelfRef.__PVT__oam_state = vlSelfRef.__Vdly__oam_state;
    vlSelfRef.__PVT__old_rendering = vlSelfRef.__Vdly__old_rendering;
    vlSelfRef.__PVT__oam_secondary_ovr = vlSelfRef.__Vdly__oam_secondary_ovr;
    vlSelfRef.__PVT__old_using_secondary = vlSelfRef.__Vdly__old_using_secondary;
    vlSelfRef.__PVT__oam_secondary_addr = vlSelfRef.__Vdly__oam_secondary_addr;
    vlSelfRef.__PVT__oam_addr = vlSelfRef.__Vdly__oam_addr;
    vlSelfRef.__PVT__overflow = vlSelfRef.__Vdly__overflow;
    vlSelfRef.__PVT__sprite0 = vlSelfRef.__Vdly__sprite0;
    vlSelfRef.__PVT__oam_data = vlSelfRef.__Vdly__oam_data;
    vlSelfRef.__PVT__repeat_count = vlSelfRef.__Vdly__repeat_count;
    vlSelfRef.__PVT__oam_bus_ex = vlSelfRef.__Vdly__oam_bus_ex;
    VL_ASSIGNSEL_QI(64, 11, 0x0000000fU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(11,4,7, VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__spr_counter), (IData)(vlSelfRef.__PVT__n_ovr)), 
                                  VL_CONCAT_III(7,4,3, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), (IData)(vlSelfRef.__PVT__oam_secondary_row))));
    VL_ASSIGNBIT_QI(0x1eU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__sprite0_curr);
    VL_ASSIGNSEL_QI(64, 9, 0x00000027U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(9,6,3, (IData)(vlSelfRef.__PVT__oam_addr_ex), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__ex_ovr), (IData)(vlSelfRef.__PVT__oam_secondary_column))));
    VL_ASSIGNSEL_QI(64, 3, 0x38U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    ((0U == vlSelfRef.__PVT__oam_state)
                      ? 0U : ((1U == vlSelfRef.__PVT__oam_state)
                               ? 1U : ((2U == vlSelfRef.__PVT__oam_state)
                                        ? 2U : ((3U 
                                                 == vlSelfRef.__PVT__oam_state)
                                                 ? 3U
                                                 : 4U)))));
    VL_ASSIGNBIT_QI(0x3bU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__old_rendering);
    VL_ASSIGNBIT_QI(8U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    (1U & (~ (IData)(vlSelfRef.__PVT__oam_secondary_ovr))));
    VL_ASSIGNBIT_QI(0x3cU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__old_using_secondary);
    VL_ASSIGNSEL_QI(64, 6, 9U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)));
    vlSelfRef.__PVT__oam_row_last = (0x0000001fU & 
                                     ((IData)(vlSelfRef.__PVT__old_using_secondary)
                                       ? (IData)(vlSelfRef.__PVT__oam_secondary_addr)
                                       : VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 3U, 5)));
    VL_ASSIGNSEL_QI(64, 8, 0x30U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__oam_addr);
    VL_ASSIGNBIT_QI(0x26U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__overflow);
    VL_ASSIGNBIT_QI(0x1dU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__sprite0);
    VL_ASSIGNSEL_QI(64, 8, 0U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__oam_data);
    vlSelfRef.__PVT__oam_bus = vlSelfRef.__PVT__oam_data;
    VL_ASSIGNSEL_QI(64, 3, 0x1aU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__repeat_count);
    vlSelfRef.__PVT__masked_sprites = VL_REDAND_II(3, (IData)(vlSelfRef.__PVT__repeat_count));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__Din 
        = vlSelfRef.__PVT__SS_OAMEVAL_BACK;
}

void Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Dout;
}

void Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__secondary_write = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U));
    vlSelfRef.__PVT__visible = (0x00f0U > (IData)(vlSelfRef.__PVT__scanline));
}

void Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__3(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_OAMEVAL = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__Dout;
}

void Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__0(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__evaluating = ((IData)(vlSelfRef.__PVT__visible) 
                                   & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__rendering = (((IData)(vlSelfRef.__PVT__is_pre_render) 
                                   | (IData)(vlSelfRef.__PVT__visible)) 
                                  & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__clear_secondary_addr = ((((0x003fU 
                                                == (IData)(vlSelfRef.__PVT__cycle)) 
                                               | (0x00ffU 
                                                  == (IData)(vlSelfRef.__PVT__cycle))) 
                                              | (0x0153U 
                                                 == (IData)(vlSelfRef.__PVT__cycle))) 
                                             & (IData)(vlSelfRef.__PVT__rendering));
    vlSelfRef.__PVT__using_secondary = ((IData)(vlSelfRef.__PVT__rendering) 
                                        & (((~ VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U)) 
                                            & (0x00ffU 
                                               >= (IData)(vlSelfRef.__PVT__cycle))) 
                                           | (0x00ffU 
                                              < (IData)(vlSelfRef.__PVT__cycle))));
}

void Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__1(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__oam_wr_enabled = (1U & ((~ (IData)(vlSelfRef.__PVT__oam_secondary_ovr)) 
                                             & (~ (IData)(vlSelfRef.__PVT__is_pre_render))));
}

void Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__2(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___nba_comb__TOP__nes_core_top__nes_inst__ppu__spriteeval__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__oam_row_cur = (0x0000001fU & ((IData)(vlSelfRef.__PVT__using_secondary)
                                                    ? (IData)(vlSelfRef.__PVT__oam_secondary_addr)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__oam_addr_write)
                                                     ? 
                                                    VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_din), 3U, 5)
                                                     : 
                                                    VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 3U, 5))));
    vlSelfRef.__PVT__oam_read_addr = ((IData)(vlSelfRef.__PVT__oam_addr_write)
                                       ? (IData)(vlSelfRef.__PVT__oam_din)
                                       : (IData)(vlSelfRef.__PVT__oam_addr));
    vlSelfRef.__PVT__oam_dbus = ((IData)(vlSelfRef.__PVT__oam_data_write)
                                  ? (IData)(vlSelfRef.__PVT__oam_din)
                                  : (IData)(vlSelfRef.__PVT__oam_data));
    vlSelfRef.__PVT__is_attr_byte = (2U == (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_read_addr), 0U, 2)));
    vlSelfRef.__PVT__in_range = (((0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8)) 
                                  >= (IData)(vlSelfRef.__PVT__oam_dbus)) 
                                 & (VL_EXTEND_II(32,8, 
                                                 (0x000000ffU 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8))) 
                                    < (VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__oam_dbus)) 
                                       + ((IData)(vlSelfRef.__PVT__obj_size)
                                           ? 0x00000010U
                                           : 8U))));
}

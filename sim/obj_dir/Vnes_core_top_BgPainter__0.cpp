// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_BgPainter___ico_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___ico_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg1 = vlSelfRef.__PVT__vram_data;
}

void Vnes_core_top_BgPainter___nba_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___nba_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__current_attribute_table = vlSelfRef.__PVT__current_attribute_table;
    vlSelfRef.__Vdly__bg0 = vlSelfRef.__PVT__bg0;
    vlSelfRef.__Vdly__playfield_pipe_1 = vlSelfRef.__PVT__playfield_pipe_1;
    vlSelfRef.__Vdly__playfield_pipe_2 = vlSelfRef.__PVT__playfield_pipe_2;
    vlSelfRef.__Vdly__playfield_pipe_3 = vlSelfRef.__PVT__playfield_pipe_3;
    vlSelfRef.__Vdly__playfield_pipe_4 = vlSelfRef.__PVT__playfield_pipe_4;
    vlSelfRef.__Vdly__current_name_table = vlSelfRef.__PVT__current_name_table;
    if (vlSelfRef.__PVT__pclk0) {
        if (vlSelfRef.__PVT__latch_nametable) {
            vlSelfRef.__Vdly__current_name_table = vlSelfRef.__PVT__vram_data;
        }
        if (vlSelfRef.__PVT__enable) {
            if (vlSelfRef.__PVT__latch_attrtable) {
                vlSelfRef.__Vdly__current_attribute_table 
                    = (3U & ((1U & ((~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 1U)) 
                                    & (~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 6U))))
                              ? VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 0U, 2)
                              : ((1U & (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 1U) 
                                        & (~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 6U))))
                                  ? VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 2U, 2)
                                  : ((1U & ((~ VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 1U)) 
                                            & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_v), 6U)))
                                      ? VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 4U, 2)
                                      : VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 6U, 2)))));
            }
            if (vlSelfRef.__PVT__latch_pattern1) {
                vlSelfRef.__Vdly__bg0 = vlSelfRef.__PVT__vram_data;
            }
            vlSelfRef.__Vdly__playfield_pipe_1 = VL_CONCAT_III(16,1,15, 1U, 
                                                               (0x00007fffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_1), 1U, 15)));
            vlSelfRef.__Vdly__playfield_pipe_2 = VL_EXTEND_II(16,15, 
                                                              (0x00007fffU 
                                                               & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_2), 1U, 15)));
            VL_ASSIGNSEL_II(9, 8, 0U, vlSelfRef.__Vdly__playfield_pipe_3, 
                            (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_3), 1U, 8)));
            VL_ASSIGNSEL_II(9, 8, 0U, vlSelfRef.__Vdly__playfield_pipe_4, 
                            (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_4), 1U, 8)));
            if (vlSelfRef.__PVT__latch_pattern2) {
                VL_ASSIGNSEL_II(16, 8, 8U, vlSelfRef.__Vdly__playfield_pipe_1, 
                                VL_CONCAT_III(8,4,4, 
                                              VL_CONCAT_III(4,2,2, 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 0U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 1U))), 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 2U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 3U)))), 
                                              VL_CONCAT_III(4,2,2, 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 5U))), 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 6U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg0), 7U))))));
                VL_ASSIGNSEL_II(16, 8, 8U, vlSelfRef.__Vdly__playfield_pipe_2, 
                                VL_CONCAT_III(8,4,4, 
                                              VL_CONCAT_III(4,2,2, 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 0U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 1U))), 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 2U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 3U)))), 
                                              VL_CONCAT_III(4,2,2, 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 5U))), 
                                                            VL_CONCAT_III(2,1,1, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 6U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__bg1), 7U))))));
                VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__playfield_pipe_3, 
                                (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__current_attribute_table), 0U)));
                VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__playfield_pipe_4, 
                                (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__current_attribute_table), 1U)));
            }
        }
        if (vlSelfRef.__PVT__clear) {
            vlSelfRef.__Vdly__playfield_pipe_1 = 0U;
            vlSelfRef.__Vdly__playfield_pipe_2 = 0U;
            vlSelfRef.__Vdly__playfield_pipe_3 = 0U;
            vlSelfRef.__Vdly__playfield_pipe_4 = 0U;
            vlSelfRef.__Vdly__current_name_table = 0U;
            vlSelfRef.__Vdly__current_attribute_table = 0U;
            vlSelfRef.__Vdly__bg0 = 0U;
        }
    }
    vlSelfRef.__PVT__current_attribute_table = vlSelfRef.__Vdly__current_attribute_table;
    vlSelfRef.__PVT__bg0 = vlSelfRef.__Vdly__bg0;
    vlSelfRef.__PVT__playfield_pipe_1 = vlSelfRef.__Vdly__playfield_pipe_1;
    vlSelfRef.__PVT__playfield_pipe_2 = vlSelfRef.__Vdly__playfield_pipe_2;
    vlSelfRef.__PVT__playfield_pipe_3 = vlSelfRef.__Vdly__playfield_pipe_3;
    vlSelfRef.__PVT__playfield_pipe_4 = vlSelfRef.__Vdly__playfield_pipe_4;
    vlSelfRef.__PVT__current_name_table = vlSelfRef.__Vdly__current_name_table;
    vlSelfRef.__PVT__name_table = vlSelfRef.__PVT__current_name_table;
}

void Vnes_core_top_BgPainter___nba_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__1(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___nba_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i = VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__fine_x_scroll));
}

void Vnes_core_top_BgPainter___nba_comb__TOP__nes_core_top__nes_inst__ppu__bg_painter__0(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___nba_comb__TOP__nes_core_top__nes_inst__ppu__bg_painter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pixel = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, 
                                                                ((8U 
                                                                  >= (IData)(vlSelfRef.__PVT__i)) 
                                                                 && (1U 
                                                                     & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_4), (IData)(vlSelfRef.__PVT__i)))), 
                                                                ((8U 
                                                                  >= (IData)(vlSelfRef.__PVT__i)) 
                                                                 && (1U 
                                                                     & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_3), (IData)(vlSelfRef.__PVT__i))))), 
                                           VL_CONCAT_III(2,1,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_2), (IData)(vlSelfRef.__PVT__i))), 
                                                         (1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_1), (IData)(vlSelfRef.__PVT__i)))));
}

void Vnes_core_top_BgPainter___nba_comb__TOP__nes_core_top__nes_inst__ppu__bg_painter__1(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___nba_comb__TOP__nes_core_top__nes_inst__ppu__bg_painter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg1 = vlSelfRef.__PVT__vram_data;
}

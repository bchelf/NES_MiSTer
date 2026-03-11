// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_SpriteAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen__0(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___ico_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_f = ((IData)(vlSelfRef.__PVT__dummy_sprite)
                                ? 0U : ((IData)(vlSelfRef.__PVT__flip_x)
                                         ? (IData)(vlSelfRef.__PVT__vram_data)
                                         : VL_CONCAT_III(8,4,4, 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 1U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 3U)))), 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 5U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 7U)))))));
    vlSelfRef.__PVT__load_in = VL_CONCAT_III(27,16,11, 
                                             (0x0000ffffU 
                                              & VL_REPLICATE_III(8, (IData)(vlSelfRef.__PVT__vram_f), 2U)), 
                                             VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__temp), 
                                                           VL_CONCAT_III(3,2,1, 
                                                                         (3U 
                                                                          & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 0U, 2)), 
                                                                         (1U 
                                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 5U)))));
}

void Vnes_core_top_SpriteAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen__0(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___nba_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
    vlSelfRef.__Vdly__dummy_sprite = vlSelfRef.__PVT__dummy_sprite;
    vlSelfRef.__Vdly__flip_x = vlSelfRef.__PVT__flip_x;
    vlSelfRef.__Vdly__temp_tile = vlSelfRef.__PVT__temp_tile;
    vlSelfRef.__Vdly__temp_y = vlSelfRef.__PVT__temp_y;
    vlSelfRef.__Vdly__flip_y = vlSelfRef.__PVT__flip_y;
    if (vlSelfRef.__PVT__ce) {
        vlSelfRef.__Vdly__count = (7U & ((IData)(vlSelfRef.__PVT__enabled)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count))
                                          : 0U));
        if (vlSelfRef.__PVT__load_y) {
            vlSelfRef.__Vdly__temp_y = (0x0000000fU 
                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__scanline_y), 0U, 4));
            vlSelfRef.__Vdly__dummy_sprite = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__in_range)));
        }
        if (vlSelfRef.__PVT__load_tile) {
            vlSelfRef.__Vdly__temp_tile = vlSelfRef.__PVT__temp;
        }
        if (vlSelfRef.__PVT__load_attr) {
            vlSelfRef.__Vdly__flip_y = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 7U));
            vlSelfRef.__Vdly__flip_x = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 6U));
        }
    }
    vlSelfRef.__PVT__dummy_sprite = vlSelfRef.__Vdly__dummy_sprite;
    vlSelfRef.__PVT__flip_x = vlSelfRef.__Vdly__flip_x;
    vlSelfRef.__PVT__temp_tile = vlSelfRef.__Vdly__temp_tile;
    vlSelfRef.__PVT__temp_y = vlSelfRef.__Vdly__temp_y;
    vlSelfRef.__PVT__flip_y = vlSelfRef.__Vdly__flip_y;
    vlSelfRef.__PVT__count = vlSelfRef.__Vdly__count;
    vlSelfRef.__PVT__y_f = (0x0000000fU & ((IData)(vlSelfRef.__PVT__temp_y) 
                                           ^ VL_REPLICATE_IOI(1, (IData)(vlSelfRef.__PVT__flip_y), 4U)));
}

void Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__0(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_addr = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & ((IData)(vlSelfRef.__PVT__obj_size)
                                                    ? 
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp_tile), 0U)
                                                    : (IData)(vlSelfRef.__PVT__obj_patt))), 
                                               VL_CONCAT_III(12,7,5, 
                                                             (0x0000007fU 
                                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__temp_tile), 1U, 7)), 
                                                             VL_CONCAT_III(5,1,4, 
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__PVT__obj_size)
                                                                                ? 
                                                                               VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 3U)
                                                                                : 
                                                                               VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp_tile), 0U))), 
                                                                           VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__count), 1U)), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 0U, 3))))));
}

void Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__1(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_y = ((0U == (IData)(vlSelfRef.__PVT__count)) 
                               & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_tile = ((1U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_attr = ((2U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_x = ((3U == (IData)(vlSelfRef.__PVT__count)) 
                               & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_pix1 = ((5U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_pix2 = ((7U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__load_pix1), (IData)(vlSelfRef.__PVT__load_pix2)), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__load_x), (IData)(vlSelfRef.__PVT__load_attr)));
}

void Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__2(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__scanline_y = (0x000000ffU & (VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8) 
                                                  - (IData)(vlSelfRef.__PVT__temp)));
}

void Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__3(Vnes_core_top_SpriteAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGen___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_f = ((IData)(vlSelfRef.__PVT__dummy_sprite)
                                ? 0U : ((IData)(vlSelfRef.__PVT__flip_x)
                                         ? (IData)(vlSelfRef.__PVT__vram_data)
                                         : VL_CONCAT_III(8,4,4, 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 1U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 3U)))), 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 5U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 7U)))))));
    vlSelfRef.__PVT__load_in = VL_CONCAT_III(27,16,11, 
                                             (0x0000ffffU 
                                              & VL_REPLICATE_III(8, (IData)(vlSelfRef.__PVT__vram_f), 2U)), 
                                             VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__temp), 
                                                           VL_CONCAT_III(3,2,1, 
                                                                         (3U 
                                                                          & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 0U, 2)), 
                                                                         (1U 
                                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__temp), 5U)))));
}

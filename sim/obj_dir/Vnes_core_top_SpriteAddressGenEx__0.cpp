// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_SpriteAddressGenEx___ico_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___ico_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_f = ((1U & (((IData)(vlSelfRef.__PVT__dummy_sprite) 
                                       | (IData)(vlSelfRef.__PVT__masked_sprites)) 
                                      | (~ (IData)(vlSelfRef.__PVT__rendering))))
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
}

void Vnes_core_top_SpriteAddressGenEx___nba_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___nba_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__count = vlSelfRef.__PVT__count;
    vlSelfRef.__Vdly__pix1_latch = vlSelfRef.__PVT__pix1_latch;
    vlSelfRef.__Vdly__pix2_latch = vlSelfRef.__PVT__pix2_latch;
    if (vlSelfRef.__PVT__ce) {
        vlSelfRef.__Vdly__count = (7U & ((IData)(vlSelfRef.__PVT__enabled)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count))
                                          : 0U));
        if (vlSelfRef.__PVT__load_tile) {
            vlSelfRef.__Vdly__pix1_latch = vlSelfRef.__PVT__vram_f;
        }
        if (vlSelfRef.__PVT__load_x) {
            vlSelfRef.__Vdly__pix2_latch = vlSelfRef.__PVT__vram_f;
        }
    }
    vlSelfRef.__PVT__pix1_latch = vlSelfRef.__Vdly__pix1_latch;
    vlSelfRef.__PVT__pix2_latch = vlSelfRef.__Vdly__pix2_latch;
    vlSelfRef.__PVT__count = vlSelfRef.__Vdly__count;
    vlSelfRef.__PVT__load_tile = (1U == (IData)(vlSelfRef.__PVT__count));
}

void Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__1(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__temp_x = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0x18U, 8));
    vlSelfRef.__PVT__tile = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 8U, 8));
    vlSelfRef.__PVT__attr = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0x10U, 8));
    vlSelfRef.__PVT__temp_y = (0x000000ffU & ((IData)(vlSelfRef.__PVT__scanline) 
                                              - VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0U, 8)));
    vlSelfRef.__PVT__flip_x = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 6U));
    vlSelfRef.__PVT__flip_y = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 7U));
    vlSelfRef.__PVT__dummy_sprite = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 4U));
    vlSelfRef.__PVT__y_f = (0x0000000fU & (VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__temp_y), 0U, 4) 
                                           ^ VL_REPLICATE_IOI(1, (IData)(vlSelfRef.__PVT__flip_y), 4U)));
}

void Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__2(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__temp_y;
    } else if ((1U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__tile;
    } else if ((2U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__attr;
    } else if ((((((3U == (IData)(vlSelfRef.__PVT__count)) 
                   || (4U == (IData)(vlSelfRef.__PVT__count))) 
                  || (5U == (IData)(vlSelfRef.__PVT__count))) 
                 || (6U == (IData)(vlSelfRef.__PVT__count))) 
                || (7U == (IData)(vlSelfRef.__PVT__count)))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__temp_x;
    }
    vlSelfRef.__PVT__use_ex = (1U & (((~ (IData)(vlSelfRef.__PVT__dummy_sprite)) 
                                      & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__count), 2U))) 
                                     & (~ (IData)(vlSelfRef.__PVT__masked_sprites))));
    vlSelfRef.__PVT__vram_addr = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & ((IData)(vlSelfRef.__PVT__obj_size)
                                                    ? 
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 0U)
                                                    : (IData)(vlSelfRef.__PVT__obj_patt))), 
                                               VL_CONCAT_III(12,7,5, 
                                                             (0x0000007fU 
                                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 1U, 7)), 
                                                             VL_CONCAT_III(5,1,4, 
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__PVT__obj_size)
                                                                                ? 
                                                                               VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 3U)
                                                                                : 
                                                                               VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 0U))), 
                                                                           VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__count), 1U)), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 0U, 3))))));
    vlSelfRef.__PVT__load_in = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1_latch), 
                                             VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2_latch), 
                                                           VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__load_temp), 
                                                                         VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__load_temp), 0U, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__load_temp), 5U))))));
}

void Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__3(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___nba_comb__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_f = ((1U & (((IData)(vlSelfRef.__PVT__dummy_sprite) 
                                       | (IData)(vlSelfRef.__PVT__masked_sprites)) 
                                      | (~ (IData)(vlSelfRef.__PVT__rendering))))
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
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

void Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pix1 = vlSelfRef.__PVT__pix1;
    vlSelfRef.__Vdly__pix2 = vlSelfRef.__PVT__pix2;
    vlSelfRef.__Vdly__x_coord = vlSelfRef.__PVT__x_coord;
    vlSelfRef.__Vdly__upper_color = vlSelfRef.__PVT__upper_color;
    vlSelfRef.__Vdly__aprio = vlSelfRef.__PVT__aprio;
    if (vlSelfRef.__PVT__ce) {
        if (((~ (IData)(vlSelfRef.__PVT__active)) & (IData)(vlSelfRef.__PVT__counting))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & ((IData)(vlSelfRef.__PVT__x_coord) 
                                            - (IData)(1U)));
        } else if (((IData)(vlSelfRef.__PVT__rendering) 
                    & (IData)(vlSelfRef.__PVT__enable))) {
            vlSelfRef.__Vdly__pix1 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix1), 1U);
            vlSelfRef.__Vdly__pix2 = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.__PVT__pix2), 1U);
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 3U))) {
            vlSelfRef.__Vdly__pix1 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x13U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 2U))) {
            vlSelfRef.__Vdly__pix2 = (0x000000ffU & 
                                      VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 0x0bU, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 1U))) {
            vlSelfRef.__Vdly__x_coord = (0x000000ffU 
                                         & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 3U, 8));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__load), 0U))) {
            vlSelfRef.__Vdly__upper_color = (3U & VL_SEL_IIII(27, vlSelfRef.__PVT__load_in, 1U, 2));
            vlSelfRef.__Vdly__aprio = (1U & VL_BITSEL_IIII(27, vlSelfRef.__PVT__load_in, 0U));
        }
    }
    vlSelfRef.__PVT__pix1 = vlSelfRef.__Vdly__pix1;
    vlSelfRef.__PVT__pix2 = vlSelfRef.__Vdly__pix2;
    vlSelfRef.__PVT__upper_color = vlSelfRef.__Vdly__upper_color;
    vlSelfRef.__PVT__aprio = vlSelfRef.__Vdly__aprio;
    vlSelfRef.__PVT__x_coord = vlSelfRef.__Vdly__x_coord;
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

void Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___nba_comb__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active = ((0U == (IData)(vlSelfRef.__PVT__x_coord)) 
                               | ((IData)(vlSelfRef.__PVT__enable) 
                                  & (~ (IData)(vlSelfRef.__PVT__counting))));
    vlSelfRef.__PVT__bits = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__aprio), (IData)(vlSelfRef.__PVT__upper_color)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix2), 0U)), 
                                                        ((IData)(vlSelfRef.__PVT__active) 
                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__pix1), 0U))));
}

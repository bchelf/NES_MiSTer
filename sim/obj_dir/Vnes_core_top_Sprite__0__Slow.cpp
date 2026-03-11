// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite15__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite14__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite13__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite12__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite11__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite10__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite9__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite8__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite7__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite6__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite5__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite4__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite3__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite2__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite1__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_out = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1), 
                                              VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2), 
                                                            VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__x_coord), 
                                                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__upper_color), (IData)(vlSelfRef.__PVT__aprio)))));
}

VL_ATTR_COLD void Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__1(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___stl_sequent__TOP__nes_core_top__nes_inst__ppu__sprite_gen__sprite0__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_Sprite___ctor_var_reset(Vnes_core_top_Sprite* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_Sprite___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__counting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5259983993988380961ull);
    vlSelf->__PVT__rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832690048632048236ull);
    vlSelf->__PVT__load = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1148748992964133306ull);
    vlSelf->__PVT__load_in = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 11318590255051626789ull);
    vlSelf->__PVT__load_out = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 10138068472069523172ull);
    vlSelf->__PVT__bits = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8409318260277770316ull);
    vlSelf->__PVT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3786847083002159039ull);
    vlSelf->__PVT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10110679807990431392ull);
    vlSelf->__PVT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16226317496549633517ull);
    vlSelf->__PVT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2852581256630326583ull);
    vlSelf->__PVT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13373543020373208973ull);
    vlSelf->__PVT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12797771265061833892ull);
    vlSelf->__Vdly__x_coord = 0;
    vlSelf->__Vdly__pix1 = 0;
    vlSelf->__Vdly__pix2 = 0;
    vlSelf->__Vdly__upper_color = 0;
    vlSelf->__Vdly__aprio = 0;
}

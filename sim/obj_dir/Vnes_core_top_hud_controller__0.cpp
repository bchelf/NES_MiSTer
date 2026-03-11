// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_hud_controller___ico_sequent__TOP__nes_core_top__hud_controller_inst__0(Vnes_core_top_hud_controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_hud_controller___ico_sequent__TOP__nes_core_top__hud_controller_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__count = ((2U 
                                                 == (IData)(vlSelfRef.__PVT__hud_mode))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__hud_mode))
                                                  ? 1U
                                                  : 0U));
    vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul = 
        (((IData)(vlSelfRef.__PVT__hud_scale) & (1U 
                                                 == vlSelfRef.__PVT__unnamedblk1__DOT__count))
          ? 2U : 1U);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w = VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h = VL_MULS_III(32, (IData)(0x00000020U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__gap = VL_MULS_III(32, (IData)(8U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__total_w = ((2U 
                                                   == vlSelfRef.__PVT__unnamedblk1__DOT__count)
                                                   ? 
                                                  (VL_MULS_III(32, (IData)(2U), vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w) 
                                                   + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                                                   : vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w);
    if ((0U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 0U;
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0U;
    }
    vlSelfRef.__PVT__hud_active = 0U;
    vlSelfRef.__PVT__hud_pixel = 0U;
    vlSelfRef.__PVT__local_x = 0U;
    vlSelfRef.__PVT__local_y = 0U;
    vlSelfRef.__PVT__active_buttons = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__draw_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__lit_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__x_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__x));
    vlSelfRef.__PVT__unnamedblk1__DOT__y_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__y));
    if ((((((0U != vlSelfRef.__PVT__unnamedblk1__DOT__count) 
            & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) 
           & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, 
                        (vlSelfRef.__PVT__unnamedblk1__DOT__x0 
                         + vlSelfRef.__PVT__unnamedblk1__DOT__total_w))) 
          & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) 
         & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, 
                      (vlSelfRef.__PVT__unnamedblk1__DOT__y0 
                       + vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__x_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__x0);
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_y = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__y_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__y0);
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 0U;
        if (((2U == vlSelfRef.__PVT__unnamedblk1__DOT__count) 
             & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_x, 
                           (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                            + vlSelfRef.__PVT__unnamedblk1__DOT__gap)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 1U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__rel_x 
             - ((1U == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                 ? (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                    + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                 : 0U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x) 
             & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w))) {
            if ((2U == vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul)) {
                vlSelfRef.__PVT__local_x = (0x0000007fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 7));
                vlSelfRef.__PVT__local_y = (0x0000003fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 6));
            } else {
                vlSelfRef.__PVT__local_x = VL_CONCAT_III(7,6,1, 
                                                         (0x0000003fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 6)), 0U);
                vlSelfRef.__PVT__local_y = VL_CONCAT_III(6,5,1, 
                                                         (0x0000001fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 5)), 0U);
            }
            vlSelfRef.__PVT__active_buttons = ((0U 
                                                == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                                                ? (IData)(vlSelfRef.__PVT__p1_frame)
                                                : (IData)(vlSelfRef.__PVT__p2_frame));
            vlSelfRef.__PVT__unnamedblk1__DOT__lit_px 
                = (((((((((IData)(vlSelfRef.__PVT__mask_a) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 0U)) 
                         | ((IData)(vlSelfRef.__PVT__mask_b) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 1U))) 
                        | ((IData)(vlSelfRef.__PVT__mask_select) 
                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 2U))) 
                       | ((IData)(vlSelfRef.__PVT__mask_start) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 3U))) 
                      | ((IData)(vlSelfRef.__PVT__mask_up) 
                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 4U))) 
                     | ((IData)(vlSelfRef.__PVT__mask_down) 
                        & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 5U))) 
                    | ((IData)(vlSelfRef.__PVT__mask_left) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 6U))) 
                   | ((IData)(vlSelfRef.__PVT__mask_right) 
                      & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 7U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__draw_px 
                = ((IData)(vlSelfRef.__PVT__base_px) 
                   | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px));
            if (vlSelfRef.__PVT__unnamedblk1__DOT__draw_px) {
                vlSelfRef.__PVT__hud_active = 1U;
                vlSelfRef.__PVT__hud_pixel = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px)
                                               ? 0x00ff4040U
                                               : 0x00d0d0d0U);
            }
        }
    }
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__x 
        = vlSelfRef.__PVT__local_x;
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__y 
        = vlSelfRef.__PVT__local_y;
}

void Vnes_core_top_hud_controller___act_sequent__TOP__nes_core_top__hud_controller_inst__0(Vnes_core_top_hud_controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_hud_controller___act_sequent__TOP__nes_core_top__hud_controller_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__base_px = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__base;
    vlSelfRef.__PVT__mask_a = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_a;
    vlSelfRef.__PVT__mask_b = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_b;
    vlSelfRef.__PVT__mask_start = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_start;
    vlSelfRef.__PVT__mask_select = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_select;
    vlSelfRef.__PVT__mask_up = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_up;
    vlSelfRef.__PVT__mask_down = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_down;
    vlSelfRef.__PVT__mask_left = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_left;
    vlSelfRef.__PVT__mask_right = vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__mask_right;
    vlSelfRef.__PVT__unnamedblk1__DOT__count = ((2U 
                                                 == (IData)(vlSelfRef.__PVT__hud_mode))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__hud_mode))
                                                  ? 1U
                                                  : 0U));
    vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul = 
        (((IData)(vlSelfRef.__PVT__hud_scale) & (1U 
                                                 == vlSelfRef.__PVT__unnamedblk1__DOT__count))
          ? 2U : 1U);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w = VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h = VL_MULS_III(32, (IData)(0x00000020U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__gap = VL_MULS_III(32, (IData)(8U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__total_w = ((2U 
                                                   == vlSelfRef.__PVT__unnamedblk1__DOT__count)
                                                   ? 
                                                  (VL_MULS_III(32, (IData)(2U), vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w) 
                                                   + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                                                   : vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w);
    if ((0U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 0U;
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0U;
    }
    vlSelfRef.__PVT__hud_active = 0U;
    vlSelfRef.__PVT__hud_pixel = 0U;
    vlSelfRef.__PVT__local_x = 0U;
    vlSelfRef.__PVT__local_y = 0U;
    vlSelfRef.__PVT__active_buttons = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__draw_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__lit_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__x_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__x));
    vlSelfRef.__PVT__unnamedblk1__DOT__y_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__y));
    if ((((((0U != vlSelfRef.__PVT__unnamedblk1__DOT__count) 
            & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) 
           & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, 
                        (vlSelfRef.__PVT__unnamedblk1__DOT__x0 
                         + vlSelfRef.__PVT__unnamedblk1__DOT__total_w))) 
          & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) 
         & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, 
                      (vlSelfRef.__PVT__unnamedblk1__DOT__y0 
                       + vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__x_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__x0);
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_y = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__y_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__y0);
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 0U;
        if (((2U == vlSelfRef.__PVT__unnamedblk1__DOT__count) 
             & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_x, 
                           (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                            + vlSelfRef.__PVT__unnamedblk1__DOT__gap)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 1U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__rel_x 
             - ((1U == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                 ? (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                    + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                 : 0U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x) 
             & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w))) {
            if ((2U == vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul)) {
                vlSelfRef.__PVT__local_x = (0x0000007fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 7));
                vlSelfRef.__PVT__local_y = (0x0000003fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 6));
            } else {
                vlSelfRef.__PVT__local_x = VL_CONCAT_III(7,6,1, 
                                                         (0x0000003fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 6)), 0U);
                vlSelfRef.__PVT__local_y = VL_CONCAT_III(6,5,1, 
                                                         (0x0000001fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 5)), 0U);
            }
            vlSelfRef.__PVT__active_buttons = ((0U 
                                                == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                                                ? (IData)(vlSelfRef.__PVT__p1_frame)
                                                : (IData)(vlSelfRef.__PVT__p2_frame));
            vlSelfRef.__PVT__unnamedblk1__DOT__lit_px 
                = (((((((((IData)(vlSelfRef.__PVT__mask_a) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 0U)) 
                         | ((IData)(vlSelfRef.__PVT__mask_b) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 1U))) 
                        | ((IData)(vlSelfRef.__PVT__mask_select) 
                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 2U))) 
                       | ((IData)(vlSelfRef.__PVT__mask_start) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 3U))) 
                      | ((IData)(vlSelfRef.__PVT__mask_up) 
                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 4U))) 
                     | ((IData)(vlSelfRef.__PVT__mask_down) 
                        & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 5U))) 
                    | ((IData)(vlSelfRef.__PVT__mask_left) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 6U))) 
                   | ((IData)(vlSelfRef.__PVT__mask_right) 
                      & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 7U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__draw_px 
                = ((IData)(vlSelfRef.__PVT__base_px) 
                   | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px));
            if (vlSelfRef.__PVT__unnamedblk1__DOT__draw_px) {
                vlSelfRef.__PVT__hud_active = 1U;
                vlSelfRef.__PVT__hud_pixel = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px)
                                               ? 0x00ff4040U
                                               : 0x00d0d0d0U);
            }
        }
    }
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__x 
        = vlSelfRef.__PVT__local_x;
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__y 
        = vlSelfRef.__PVT__local_y;
}

void Vnes_core_top_hud_controller___nba_comb__TOP__nes_core_top__hud_controller_inst__0(Vnes_core_top_hud_controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_hud_controller___nba_comb__TOP__nes_core_top__hud_controller_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__count = ((2U 
                                                 == (IData)(vlSelfRef.__PVT__hud_mode))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__hud_mode))
                                                  ? 1U
                                                  : 0U));
    vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul = 
        (((IData)(vlSelfRef.__PVT__hud_scale) & (1U 
                                                 == vlSelfRef.__PVT__unnamedblk1__DOT__count))
          ? 2U : 1U);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w = VL_MULS_III(32, (IData)(0x00000040U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h = VL_MULS_III(32, (IData)(0x00000020U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__gap = VL_MULS_III(32, (IData)(8U), vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul);
    vlSelfRef.__PVT__unnamedblk1__DOT__total_w = ((2U 
                                                   == vlSelfRef.__PVT__unnamedblk1__DOT__count)
                                                   ? 
                                                  (VL_MULS_III(32, (IData)(2U), vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w) 
                                                   + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                                                   : vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w);
    if ((0U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__hud_position))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = (((IData)(0x00000100U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__total_w) 
                                                 - (IData)(8U));
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = (((IData)(0x000000f0U) 
                                                  - vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h) 
                                                 - (IData)(8U));
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__x0 = 0U;
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) {
        vlSelfRef.__PVT__unnamedblk1__DOT__y0 = 0U;
    }
    vlSelfRef.__PVT__hud_active = 0U;
    vlSelfRef.__PVT__hud_pixel = 0U;
    vlSelfRef.__PVT__local_x = 0U;
    vlSelfRef.__PVT__local_y = 0U;
    vlSelfRef.__PVT__active_buttons = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__draw_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__lit_px = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__x_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__x));
    vlSelfRef.__PVT__unnamedblk1__DOT__y_i = VL_EXTEND_II(32,9, (IData)(vlSelfRef.__PVT__y));
    if ((((((0U != vlSelfRef.__PVT__unnamedblk1__DOT__count) 
            & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, vlSelfRef.__PVT__unnamedblk1__DOT__x0)) 
           & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__x_i, 
                        (vlSelfRef.__PVT__unnamedblk1__DOT__x0 
                         + vlSelfRef.__PVT__unnamedblk1__DOT__total_w))) 
          & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, vlSelfRef.__PVT__unnamedblk1__DOT__y0)) 
         & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__y_i, 
                      (vlSelfRef.__PVT__unnamedblk1__DOT__y0 
                       + vlSelfRef.__PVT__unnamedblk1__DOT__sprite_h)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__x_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__x0);
        vlSelfRef.__PVT__unnamedblk1__DOT__rel_y = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__y_i 
             - vlSelfRef.__PVT__unnamedblk1__DOT__y0);
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 0U;
        if (((2U == vlSelfRef.__PVT__unnamedblk1__DOT__count) 
             & VL_GTES_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_x, 
                           (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                            + vlSelfRef.__PVT__unnamedblk1__DOT__gap)))) {
            vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel = 1U;
        }
        vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x = 
            (vlSelfRef.__PVT__unnamedblk1__DOT__rel_x 
             - ((1U == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                 ? (vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w 
                    + vlSelfRef.__PVT__unnamedblk1__DOT__gap)
                 : 0U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x) 
             & VL_LTS_III(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, vlSelfRef.__PVT__unnamedblk1__DOT__sprite_w))) {
            if ((2U == vlSelfRef.__PVT__unnamedblk1__DOT__scale_mul)) {
                vlSelfRef.__PVT__local_x = (0x0000007fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 7));
                vlSelfRef.__PVT__local_y = (0x0000003fU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 6));
            } else {
                vlSelfRef.__PVT__local_x = VL_CONCAT_III(7,6,1, 
                                                         (0x0000003fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_x, 0U, 6)), 0U);
                vlSelfRef.__PVT__local_y = VL_CONCAT_III(6,5,1, 
                                                         (0x0000001fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__rel_y, 0U, 5)), 0U);
            }
            vlSelfRef.__PVT__active_buttons = ((0U 
                                                == vlSelfRef.__PVT__unnamedblk1__DOT__ctrl_sel)
                                                ? (IData)(vlSelfRef.__PVT__p1_frame)
                                                : (IData)(vlSelfRef.__PVT__p2_frame));
            vlSelfRef.__PVT__unnamedblk1__DOT__lit_px 
                = (((((((((IData)(vlSelfRef.__PVT__mask_a) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 0U)) 
                         | ((IData)(vlSelfRef.__PVT__mask_b) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 1U))) 
                        | ((IData)(vlSelfRef.__PVT__mask_select) 
                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 2U))) 
                       | ((IData)(vlSelfRef.__PVT__mask_start) 
                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 3U))) 
                      | ((IData)(vlSelfRef.__PVT__mask_up) 
                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 4U))) 
                     | ((IData)(vlSelfRef.__PVT__mask_down) 
                        & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 5U))) 
                    | ((IData)(vlSelfRef.__PVT__mask_left) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 6U))) 
                   | ((IData)(vlSelfRef.__PVT__mask_right) 
                      & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__active_buttons), 7U)));
            vlSelfRef.__PVT__unnamedblk1__DOT__draw_px 
                = ((IData)(vlSelfRef.__PVT__base_px) 
                   | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px));
            if (vlSelfRef.__PVT__unnamedblk1__DOT__draw_px) {
                vlSelfRef.__PVT__hud_active = 1U;
                vlSelfRef.__PVT__hud_pixel = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__lit_px)
                                               ? 0x00ff4040U
                                               : 0x00d0d0d0U);
            }
        }
    }
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__x 
        = vlSelfRef.__PVT__local_x;
    vlSymsp->TOP__nes_core_top__hud_controller_inst__assets.__PVT__y 
        = vlSelfRef.__PVT__local_y;
}

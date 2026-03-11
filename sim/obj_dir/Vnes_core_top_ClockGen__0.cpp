// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_ClockGen___nba_sequent__TOP__nes_core_top__nes_inst__clockgen_pause__0(Vnes_core_top_ClockGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen___nba_sequent__TOP__nes_core_top__nes_inst__clockgen_pause__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__is_even_frame = vlSelfRef.__PVT__is_even_frame;
    vlSelfRef.__Vdly__scanline = vlSelfRef.__PVT__scanline;
    vlSelfRef.__Vdly__rendering_sr = vlSelfRef.__PVT__rendering_sr;
    vlSelfRef.__Vdly__cycle = vlSelfRef.__PVT__cycle;
    vlSelfRef.__Vdly__vblank = vlSelfRef.__PVT__vblank;
    vlSelfRef.__Vdly__hblank = vlSelfRef.__PVT__hblank;
    vlSelfRef.__Vdly__vsync = vlSelfRef.__PVT__vsync;
    vlSelfRef.__Vdly__hsync = vlSelfRef.__PVT__hsync;
    vlSelfRef.__Vdly__is_in_vblank = vlSelfRef.__PVT__is_in_vblank;
    vlSelfRef.__Vdly__skip_next = vlSelfRef.__PVT__skip_next;
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__skip_next = 0U;
        vlSelfRef.__Vdly__cycle = 0U;
        vlSelfRef.__Vdly__is_in_vblank = 0U;
        vlSelfRef.__Vdly__rendering_sr = 0U;
        vlSelfRef.__Vdly__skip_next = 0U;
        vlSelfRef.__Vdly__vblank = 0U;
        vlSelfRef.__Vdly__hblank = 0U;
        vlSelfRef.__Vdly__vsync = 0U;
        vlSelfRef.__Vdly__hsync = 0U;
    } else if (vlSelfRef.__PVT__ce) {
        if ((0x0152U == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__skip_next = ((((IData)(vlSelfRef.__PVT__is_pre_render) 
                                             & (~ (IData)(vlSelfRef.__PVT__is_even_frame))) 
                                            & (IData)(vlSelfRef.__PVT__is_rendering)) 
                                           & (IData)(vlSelfRef.__PVT__skip_en));
        }
        vlSelfRef.__Vdly__rendering_sr = VL_CONCAT_III(4,3,1, 
                                                       (7U 
                                                        & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rendering_sr), 0U, 3)), (IData)(vlSelfRef.__PVT__is_rendering));
        vlSelfRef.__Vdly__cycle = (0x000001ffU & ((IData)(vlSelfRef.__PVT__end_of_line)
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__cycle))));
        vlSelfRef.__Vdly__is_in_vblank = vlSelfRef.__PVT__new_is_in_vblank;
        vlSelfRef.__Vdly__hsync = vlSelfRef.__PVT__hsync_period;
        vlSelfRef.__Vdly__hblank = vlSelfRef.__PVT__hblank_period;
        if ((((IData)(vlSelfRef.__PVT__scanline) == (IData)(vlSelfRef.__PVT__vsync_start_sl)) 
             & (IData)(vlSelfRef.__PVT__hsync_period))) {
            vlSelfRef.__Vdly__vsync = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__scanline) == 
              (0x000001ffU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__vsync_start_sl)))) 
             & (IData)(vlSelfRef.__PVT__hsync_period))) {
            vlSelfRef.__Vdly__vsync = 0U;
        }
        if (((0x00f1U == (IData)(vlSelfRef.__PVT__scanline)) 
             & (IData)(vlSelfRef.__PVT__hblank_period))) {
            vlSelfRef.__Vdly__vblank = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__is_pre_render) 
             & (IData)(vlSelfRef.__PVT__hblank_period))) {
            vlSelfRef.__Vdly__vblank = 0U;
        }
    }
    vlSelfRef.__PVT__rendering_sr = vlSelfRef.__Vdly__rendering_sr;
    vlSelfRef.__PVT__vblank = vlSelfRef.__Vdly__vblank;
    vlSelfRef.__PVT__hblank = vlSelfRef.__Vdly__hblank;
    vlSelfRef.__PVT__vsync = vlSelfRef.__Vdly__vsync;
    vlSelfRef.__PVT__hsync = vlSelfRef.__Vdly__hsync;
    vlSelfRef.__PVT__is_in_vblank = vlSelfRef.__Vdly__is_in_vblank;
    vlSelfRef.__PVT__skip_next = vlSelfRef.__Vdly__skip_next;
    vlSelfRef.__PVT__cycle = vlSelfRef.__Vdly__cycle;
    vlSelfRef.__Vdly__is_pre_render = vlSelfRef.__PVT__is_pre_render;
    vlSelfRef.__PVT__skip_pixel = ((IData)(vlSelfRef.__PVT__skip_next) 
                                   & (IData)(vlSelfRef.__PVT__skip_en));
    vlSelfRef.__PVT__hsync_period = ((0x0116U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                     & (0x012eU >= (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__hblank_period = ((0x010dU <= (IData)(vlSelfRef.__PVT__cycle)) 
                                      & (0x0146U >= (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__at_last_cycle_group = (0x2aU == 
                                            (0x0000003fU 
                                             & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 3U, 6)));
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__scanline = 0U;
        vlSelfRef.__Vdly__is_pre_render = 0U;
        vlSelfRef.__Vdly__is_even_frame = 0U;
    } else if (((IData)(vlSelfRef.__PVT__ce) & (IData)(vlSelfRef.__PVT__end_of_line))) {
        vlSelfRef.__Vdly__scanline = (0x000001ffU & 
                                      (((IData)(vlSelfRef.__PVT__scanline) 
                                        == (IData)(vlSelfRef.__PVT__vblank_end_sl))
                                        ? 0x01ffU : 
                                       ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__scanline))));
        vlSelfRef.__Vdly__is_pre_render = ((IData)(vlSelfRef.__PVT__scanline) 
                                           == (IData)(vlSelfRef.__PVT__vblank_end_sl));
        if ((0x00ffU == (IData)(vlSelfRef.__PVT__scanline))) {
            vlSelfRef.__Vdly__is_even_frame = (1U & 
                                               (~ (IData)(vlSelfRef.__PVT__is_even_frame)));
        }
    }
    vlSelfRef.__PVT__is_even_frame = vlSelfRef.__Vdly__is_even_frame;
    vlSelfRef.__PVT__is_pre_render = vlSelfRef.__Vdly__is_pre_render;
    vlSelfRef.__PVT__end_of_line = ((IData)(vlSelfRef.__PVT__at_last_cycle_group) 
                                    & (VL_EXTEND_II(32,4, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 4))) 
                                       == ((IData)(vlSelfRef.__PVT__skip_pixel)
                                            ? 3U : 4U)));
    vlSelfRef.__PVT__scanline = vlSelfRef.__Vdly__scanline;
    vlSelfRef.__PVT__evenframe = vlSelfRef.__PVT__is_even_frame;
    vlSelfRef.__PVT__exiting_vblank = ((0U == (IData)(vlSelfRef.__PVT__cycle)) 
                                       & (IData)(vlSelfRef.__PVT__is_pre_render));
    vlSelfRef.__PVT__short_frame = ((IData)(vlSelfRef.__PVT__end_of_line) 
                                    & (IData)(vlSelfRef.__PVT__skip_pixel));
    vlSelfRef.__PVT__is_vbe_sl = ((IData)(vlSelfRef.__PVT__scanline) 
                                  == (IData)(vlSelfRef.__PVT__vblank_end_sl));
    vlSelfRef.__PVT__entering_vblank = ((0U == (IData)(vlSelfRef.__PVT__cycle)) 
                                        & ((IData)(vlSelfRef.__PVT__scanline) 
                                           == (IData)(vlSelfRef.__PVT__vblank_start_sl)));
    vlSelfRef.__PVT__new_is_in_vblank = ((IData)(vlSelfRef.__PVT__entering_vblank) 
                                         | ((~ (IData)(vlSelfRef.__PVT__exiting_vblank)) 
                                            & (IData)(vlSelfRef.__PVT__is_in_vblank)));
}

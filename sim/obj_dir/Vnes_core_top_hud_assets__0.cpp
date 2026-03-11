// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_hud_assets___act_sequent__TOP__nes_core_top__hud_controller_inst__assets__0(Vnes_core_top_hud_assets* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_hud_assets___act_sequent__TOP__nes_core_top__hud_controller_inst__assets__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__px = VL_EXTEND_II(32,7, (IData)(vlSelfRef.__PVT__x));
    vlSelfRef.__PVT__unnamedblk1__DOT__py = VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__y));
    vlSelfRef.__Vfunc_in_round_rect__0__rr = 0x0000000aU;
    vlSelfRef.__Vfunc_in_round_rect__0__rh = 0x00000034U;
    vlSelfRef.__Vfunc_in_round_rect__0__rw = 0x0000007cU;
    vlSelfRef.__Vfunc_in_round_rect__0__y0 = 6U;
    vlSelfRef.__Vfunc_in_round_rect__0__x0 = 2U;
    vlSelfRef.__Vfunc_in_round_rect__0__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_round_rect__0__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_round_rect__0__Vfuncout = 0U;
    vlSelf->__Vfunc_in_round_rect__0__x1 = 0;
    vlSelf->__Vfunc_in_round_rect__0__y1 = 0;
    vlSelf->__Vfunc_in_round_rect__0__nx = 0;
    vlSelf->__Vfunc_in_round_rect__0__ny = 0;
    vlSelf->__Vfunc_in_round_rect__0__dx = 0;
    vlSelf->__Vfunc_in_round_rect__0__dy = 0;
    vlSelfRef.__Vfunc_in_round_rect__0__x1 = ((vlSelfRef.__Vfunc_in_round_rect__0__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__0__rw) 
                                              - (IData)(1U));
    vlSelfRef.__Vfunc_in_round_rect__0__y1 = ((vlSelfRef.__Vfunc_in_round_rect__0__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__0__rh) 
                                              - (IData)(1U));
    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__px, vlSelfRef.__Vfunc_in_round_rect__0__x0) 
           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__px, vlSelfRef.__Vfunc_in_round_rect__0__x1)) 
          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__py, vlSelfRef.__Vfunc_in_round_rect__0__y0)) 
         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__py, vlSelfRef.__Vfunc_in_round_rect__0__y1))) {
        vlSelfRef.__Vfunc_in_round_rect__0__Vfuncout = 0U;
    } else {
        vlSelfRef.__Vfunc_in_round_rect__0__nx = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__px, 
                                                             (vlSelfRef.__Vfunc_in_round_rect__0__x0 
                                                              + vlSelfRef.__Vfunc_in_round_rect__0__rr))
                                                   ? 
                                                  (vlSelfRef.__Vfunc_in_round_rect__0__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__0__rr)
                                                   : 
                                                  (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__0__x1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__0__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__0__x1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__0__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__0__px));
        vlSelfRef.__Vfunc_in_round_rect__0__ny = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__py, 
                                                             (vlSelfRef.__Vfunc_in_round_rect__0__y0 
                                                              + vlSelfRef.__Vfunc_in_round_rect__0__rr))
                                                   ? 
                                                  (vlSelfRef.__Vfunc_in_round_rect__0__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__0__rr)
                                                   : 
                                                  (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__0__y1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__0__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__0__y1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__0__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__0__py));
        vlSelfRef.__Vfunc_in_round_rect__0__dx = (vlSelfRef.__Vfunc_in_round_rect__0__px 
                                                  - vlSelfRef.__Vfunc_in_round_rect__0__nx);
        vlSelfRef.__Vfunc_in_round_rect__0__dy = (vlSelfRef.__Vfunc_in_round_rect__0__py 
                                                  - vlSelfRef.__Vfunc_in_round_rect__0__ny);
        vlSelfRef.__Vfunc_in_round_rect__0__Vfuncout 
            = VL_LTES_III(32, (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__dx, vlSelfRef.__Vfunc_in_round_rect__0__dx) 
                               + VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__dy, vlSelfRef.__Vfunc_in_round_rect__0__dy)), 
                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__0__rr, vlSelfRef.__Vfunc_in_round_rect__0__rr));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__body_outer = vlSelfRef.__Vfunc_in_round_rect__0__Vfuncout;
    vlSelfRef.__Vfunc_in_round_rect__1__rr = 9U;
    vlSelfRef.__Vfunc_in_round_rect__1__rh = 0x00000032U;
    vlSelfRef.__Vfunc_in_round_rect__1__rw = 0x0000007aU;
    vlSelfRef.__Vfunc_in_round_rect__1__y0 = 7U;
    vlSelfRef.__Vfunc_in_round_rect__1__x0 = 3U;
    vlSelfRef.__Vfunc_in_round_rect__1__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_round_rect__1__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_round_rect__1__Vfuncout = 0U;
    vlSelf->__Vfunc_in_round_rect__1__x1 = 0;
    vlSelf->__Vfunc_in_round_rect__1__y1 = 0;
    vlSelf->__Vfunc_in_round_rect__1__nx = 0;
    vlSelf->__Vfunc_in_round_rect__1__ny = 0;
    vlSelf->__Vfunc_in_round_rect__1__dx = 0;
    vlSelf->__Vfunc_in_round_rect__1__dy = 0;
    vlSelfRef.__Vfunc_in_round_rect__1__x1 = ((vlSelfRef.__Vfunc_in_round_rect__1__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__1__rw) 
                                              - (IData)(1U));
    vlSelfRef.__Vfunc_in_round_rect__1__y1 = ((vlSelfRef.__Vfunc_in_round_rect__1__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__1__rh) 
                                              - (IData)(1U));
    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__px, vlSelfRef.__Vfunc_in_round_rect__1__x0) 
           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__px, vlSelfRef.__Vfunc_in_round_rect__1__x1)) 
          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__py, vlSelfRef.__Vfunc_in_round_rect__1__y0)) 
         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__py, vlSelfRef.__Vfunc_in_round_rect__1__y1))) {
        vlSelfRef.__Vfunc_in_round_rect__1__Vfuncout = 0U;
    } else {
        vlSelfRef.__Vfunc_in_round_rect__1__nx = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__px, 
                                                             (vlSelfRef.__Vfunc_in_round_rect__1__x0 
                                                              + vlSelfRef.__Vfunc_in_round_rect__1__rr))
                                                   ? 
                                                  (vlSelfRef.__Vfunc_in_round_rect__1__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__1__rr)
                                                   : 
                                                  (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__1__x1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__1__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__1__x1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__1__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__1__px));
        vlSelfRef.__Vfunc_in_round_rect__1__ny = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__py, 
                                                             (vlSelfRef.__Vfunc_in_round_rect__1__y0 
                                                              + vlSelfRef.__Vfunc_in_round_rect__1__rr))
                                                   ? 
                                                  (vlSelfRef.__Vfunc_in_round_rect__1__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__1__rr)
                                                   : 
                                                  (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__1__y1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__1__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__1__y1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__1__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__1__py));
        vlSelfRef.__Vfunc_in_round_rect__1__dx = (vlSelfRef.__Vfunc_in_round_rect__1__px 
                                                  - vlSelfRef.__Vfunc_in_round_rect__1__nx);
        vlSelfRef.__Vfunc_in_round_rect__1__dy = (vlSelfRef.__Vfunc_in_round_rect__1__py 
                                                  - vlSelfRef.__Vfunc_in_round_rect__1__ny);
        vlSelfRef.__Vfunc_in_round_rect__1__Vfuncout 
            = VL_LTES_III(32, (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__dx, vlSelfRef.__Vfunc_in_round_rect__1__dx) 
                               + VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__dy, vlSelfRef.__Vfunc_in_round_rect__1__dy)), 
                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__1__rr, vlSelfRef.__Vfunc_in_round_rect__1__rr));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__body_inner = vlSelfRef.__Vfunc_in_round_rect__1__Vfuncout;
    vlSelfRef.__PVT__unnamedblk1__DOT__body_raw = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_outer) 
                                                   & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_inner)));
    vlSelfRef.__PVT__unnamedblk1__DOT__body_fix = (
                                                   (((~ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__px, 0U)) 
                                                     & (~ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__unnamedblk1__DOT__py, 0U))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_raw))) 
                                                   & (((((((([&]() {
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__py 
                                                = vlSelfRef.__PVT__unnamedblk1__DOT__py;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__px 
                                                = (vlSelfRef.__PVT__unnamedblk1__DOT__px 
                                                   - (IData)(1U));
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__Vfuncout = 0U;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__outer = 0U;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__inner = 0U;
                                            vlSelfRef.__Vfunc_in_round_rect__3__rr = 0x0000000aU;
                                            vlSelfRef.__Vfunc_in_round_rect__3__rh = 0x00000034U;
                                            vlSelfRef.__Vfunc_in_round_rect__3__rw = 0x0000007cU;
                                            vlSelfRef.__Vfunc_in_round_rect__3__y0 = 6U;
                                            vlSelfRef.__Vfunc_in_round_rect__3__x0 = 2U;
                                            vlSelfRef.__Vfunc_in_round_rect__3__py 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__2__py;
                                            vlSelfRef.__Vfunc_in_round_rect__3__px 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__2__px;
                                            vlSelfRef.__Vfunc_in_round_rect__3__Vfuncout = 0U;
                                            vlSelf->__Vfunc_in_round_rect__3__x1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__3__y1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__3__nx = 0;
                                            vlSelf->__Vfunc_in_round_rect__3__ny = 0;
                                            vlSelf->__Vfunc_in_round_rect__3__dx = 0;
                                            vlSelf->__Vfunc_in_round_rect__3__dy = 0;
                                            vlSelfRef.__Vfunc_in_round_rect__3__x1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__3__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__3__rw) 
                                                   - (IData)(1U));
                                            vlSelfRef.__Vfunc_in_round_rect__3__y1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__3__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__3__rh) 
                                                   - (IData)(1U));
                                            if ((((
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__px, vlSelfRef.__Vfunc_in_round_rect__3__x0) 
                                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__px, vlSelfRef.__Vfunc_in_round_rect__3__x1)) 
                                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__py, vlSelfRef.__Vfunc_in_round_rect__3__y0)) 
                                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__py, vlSelfRef.__Vfunc_in_round_rect__3__y1))) {
                                                vlSelfRef.__Vfunc_in_round_rect__3__Vfuncout = 0U;
                                            } else {
                                                vlSelfRef.__Vfunc_in_round_rect__3__nx 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__px, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__3__x0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__3__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__3__x0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__3__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__px, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__3__x1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__3__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__3__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__3__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__3__px));
                                                vlSelfRef.__Vfunc_in_round_rect__3__ny 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__py, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__3__y0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__3__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__3__y0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__3__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__py, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__3__y1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__3__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__3__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__3__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__3__py));
                                                vlSelfRef.__Vfunc_in_round_rect__3__dx 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__3__px 
                                                     - vlSelfRef.__Vfunc_in_round_rect__3__nx);
                                                vlSelfRef.__Vfunc_in_round_rect__3__dy 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__3__py 
                                                     - vlSelfRef.__Vfunc_in_round_rect__3__ny);
                                                vlSelfRef.__Vfunc_in_round_rect__3__Vfuncout 
                                                    = 
                                                    VL_LTES_III(32, 
                                                                (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__dx, vlSelfRef.__Vfunc_in_round_rect__3__dx) 
                                                                 + 
                                                                 VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__dy, vlSelfRef.__Vfunc_in_round_rect__3__dy)), 
                                                                VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__3__rr, vlSelfRef.__Vfunc_in_round_rect__3__rr));
                                            }
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__outer 
                                                = vlSelfRef.__Vfunc_in_round_rect__3__Vfuncout;
                                            vlSelfRef.__Vfunc_in_round_rect__4__rr = 9U;
                                            vlSelfRef.__Vfunc_in_round_rect__4__rh = 0x00000032U;
                                            vlSelfRef.__Vfunc_in_round_rect__4__rw = 0x0000007aU;
                                            vlSelfRef.__Vfunc_in_round_rect__4__y0 = 7U;
                                            vlSelfRef.__Vfunc_in_round_rect__4__x0 = 3U;
                                            vlSelfRef.__Vfunc_in_round_rect__4__py 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__2__py;
                                            vlSelfRef.__Vfunc_in_round_rect__4__px 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__2__px;
                                            vlSelfRef.__Vfunc_in_round_rect__4__Vfuncout = 0U;
                                            vlSelf->__Vfunc_in_round_rect__4__x1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__4__y1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__4__nx = 0;
                                            vlSelf->__Vfunc_in_round_rect__4__ny = 0;
                                            vlSelf->__Vfunc_in_round_rect__4__dx = 0;
                                            vlSelf->__Vfunc_in_round_rect__4__dy = 0;
                                            vlSelfRef.__Vfunc_in_round_rect__4__x1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__4__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__4__rw) 
                                                   - (IData)(1U));
                                            vlSelfRef.__Vfunc_in_round_rect__4__y1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__4__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__4__rh) 
                                                   - (IData)(1U));
                                            if ((((
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__px, vlSelfRef.__Vfunc_in_round_rect__4__x0) 
                                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__px, vlSelfRef.__Vfunc_in_round_rect__4__x1)) 
                                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__py, vlSelfRef.__Vfunc_in_round_rect__4__y0)) 
                                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__py, vlSelfRef.__Vfunc_in_round_rect__4__y1))) {
                                                vlSelfRef.__Vfunc_in_round_rect__4__Vfuncout = 0U;
                                            } else {
                                                vlSelfRef.__Vfunc_in_round_rect__4__nx 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__px, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__4__x0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__4__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__4__x0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__4__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__px, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__4__x1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__4__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__4__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__4__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__4__px));
                                                vlSelfRef.__Vfunc_in_round_rect__4__ny 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__py, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__4__y0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__4__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__4__y0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__4__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__py, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__4__y1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__4__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__4__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__4__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__4__py));
                                                vlSelfRef.__Vfunc_in_round_rect__4__dx 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__4__px 
                                                     - vlSelfRef.__Vfunc_in_round_rect__4__nx);
                                                vlSelfRef.__Vfunc_in_round_rect__4__dy 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__4__py 
                                                     - vlSelfRef.__Vfunc_in_round_rect__4__ny);
                                                vlSelfRef.__Vfunc_in_round_rect__4__Vfuncout 
                                                    = 
                                                    VL_LTES_III(32, 
                                                                (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__dx, vlSelfRef.__Vfunc_in_round_rect__4__dx) 
                                                                 + 
                                                                 VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__dy, vlSelfRef.__Vfunc_in_round_rect__4__dy)), 
                                                                VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__4__rr, vlSelfRef.__Vfunc_in_round_rect__4__rr));
                                            }
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__inner 
                                                = vlSelfRef.__Vfunc_in_round_rect__4__Vfuncout;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__2__Vfuncout 
                                                = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__2__outer) 
                                                   & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__2__inner)));
                                        }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__2__Vfuncout)) 
                                                            | ([&]() {
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__py 
                                                = vlSelfRef.__PVT__unnamedblk1__DOT__py;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__px 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.__PVT__unnamedblk1__DOT__px);
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__Vfuncout = 0U;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__outer = 0U;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__inner = 0U;
                                            vlSelfRef.__Vfunc_in_round_rect__6__rr = 0x0000000aU;
                                            vlSelfRef.__Vfunc_in_round_rect__6__rh = 0x00000034U;
                                            vlSelfRef.__Vfunc_in_round_rect__6__rw = 0x0000007cU;
                                            vlSelfRef.__Vfunc_in_round_rect__6__y0 = 6U;
                                            vlSelfRef.__Vfunc_in_round_rect__6__x0 = 2U;
                                            vlSelfRef.__Vfunc_in_round_rect__6__py 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__5__py;
                                            vlSelfRef.__Vfunc_in_round_rect__6__px 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__5__px;
                                            vlSelfRef.__Vfunc_in_round_rect__6__Vfuncout = 0U;
                                            vlSelf->__Vfunc_in_round_rect__6__x1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__6__y1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__6__nx = 0;
                                            vlSelf->__Vfunc_in_round_rect__6__ny = 0;
                                            vlSelf->__Vfunc_in_round_rect__6__dx = 0;
                                            vlSelf->__Vfunc_in_round_rect__6__dy = 0;
                                            vlSelfRef.__Vfunc_in_round_rect__6__x1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__6__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__6__rw) 
                                                   - (IData)(1U));
                                            vlSelfRef.__Vfunc_in_round_rect__6__y1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__6__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__6__rh) 
                                                   - (IData)(1U));
                                            if ((((
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__px, vlSelfRef.__Vfunc_in_round_rect__6__x0) 
                                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__px, vlSelfRef.__Vfunc_in_round_rect__6__x1)) 
                                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__py, vlSelfRef.__Vfunc_in_round_rect__6__y0)) 
                                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__py, vlSelfRef.__Vfunc_in_round_rect__6__y1))) {
                                                vlSelfRef.__Vfunc_in_round_rect__6__Vfuncout = 0U;
                                            } else {
                                                vlSelfRef.__Vfunc_in_round_rect__6__nx 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__px, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__6__x0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__6__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__6__x0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__6__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__px, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__6__x1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__6__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__6__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__6__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__6__px));
                                                vlSelfRef.__Vfunc_in_round_rect__6__ny 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__py, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__6__y0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__6__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__6__y0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__6__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__py, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__6__y1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__6__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__6__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__6__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__6__py));
                                                vlSelfRef.__Vfunc_in_round_rect__6__dx 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__6__px 
                                                     - vlSelfRef.__Vfunc_in_round_rect__6__nx);
                                                vlSelfRef.__Vfunc_in_round_rect__6__dy 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__6__py 
                                                     - vlSelfRef.__Vfunc_in_round_rect__6__ny);
                                                vlSelfRef.__Vfunc_in_round_rect__6__Vfuncout 
                                                    = 
                                                    VL_LTES_III(32, 
                                                                (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__dx, vlSelfRef.__Vfunc_in_round_rect__6__dx) 
                                                                 + 
                                                                 VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__dy, vlSelfRef.__Vfunc_in_round_rect__6__dy)), 
                                                                VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__6__rr, vlSelfRef.__Vfunc_in_round_rect__6__rr));
                                            }
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__outer 
                                                = vlSelfRef.__Vfunc_in_round_rect__6__Vfuncout;
                                            vlSelfRef.__Vfunc_in_round_rect__7__rr = 9U;
                                            vlSelfRef.__Vfunc_in_round_rect__7__rh = 0x00000032U;
                                            vlSelfRef.__Vfunc_in_round_rect__7__rw = 0x0000007aU;
                                            vlSelfRef.__Vfunc_in_round_rect__7__y0 = 7U;
                                            vlSelfRef.__Vfunc_in_round_rect__7__x0 = 3U;
                                            vlSelfRef.__Vfunc_in_round_rect__7__py 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__5__py;
                                            vlSelfRef.__Vfunc_in_round_rect__7__px 
                                                = vlSelfRef.__Vfunc_body_outline_raw_at__5__px;
                                            vlSelfRef.__Vfunc_in_round_rect__7__Vfuncout = 0U;
                                            vlSelf->__Vfunc_in_round_rect__7__x1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__7__y1 = 0;
                                            vlSelf->__Vfunc_in_round_rect__7__nx = 0;
                                            vlSelf->__Vfunc_in_round_rect__7__ny = 0;
                                            vlSelf->__Vfunc_in_round_rect__7__dx = 0;
                                            vlSelf->__Vfunc_in_round_rect__7__dy = 0;
                                            vlSelfRef.__Vfunc_in_round_rect__7__x1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__7__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__7__rw) 
                                                   - (IData)(1U));
                                            vlSelfRef.__Vfunc_in_round_rect__7__y1 
                                                = (
                                                   (vlSelfRef.__Vfunc_in_round_rect__7__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__7__rh) 
                                                   - (IData)(1U));
                                            if ((((
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__px, vlSelfRef.__Vfunc_in_round_rect__7__x0) 
                                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__px, vlSelfRef.__Vfunc_in_round_rect__7__x1)) 
                                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__py, vlSelfRef.__Vfunc_in_round_rect__7__y0)) 
                                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__py, vlSelfRef.__Vfunc_in_round_rect__7__y1))) {
                                                vlSelfRef.__Vfunc_in_round_rect__7__Vfuncout = 0U;
                                            } else {
                                                vlSelfRef.__Vfunc_in_round_rect__7__nx 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__px, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__7__x0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__7__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__7__x0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__7__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__px, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__7__x1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__7__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__7__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__7__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__7__px));
                                                vlSelfRef.__Vfunc_in_round_rect__7__ny 
                                                    = 
                                                    (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__py, 
                                                                (vlSelfRef.__Vfunc_in_round_rect__7__y0 
                                                                 + vlSelfRef.__Vfunc_in_round_rect__7__rr))
                                                      ? 
                                                     (vlSelfRef.__Vfunc_in_round_rect__7__y0 
                                                      + vlSelfRef.__Vfunc_in_round_rect__7__rr)
                                                      : 
                                                     (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__py, 
                                                                 (vlSelfRef.__Vfunc_in_round_rect__7__y1 
                                                                  - vlSelfRef.__Vfunc_in_round_rect__7__rr))
                                                       ? 
                                                      (vlSelfRef.__Vfunc_in_round_rect__7__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__7__rr)
                                                       : vlSelfRef.__Vfunc_in_round_rect__7__py));
                                                vlSelfRef.__Vfunc_in_round_rect__7__dx 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__7__px 
                                                     - vlSelfRef.__Vfunc_in_round_rect__7__nx);
                                                vlSelfRef.__Vfunc_in_round_rect__7__dy 
                                                    = 
                                                    (vlSelfRef.__Vfunc_in_round_rect__7__py 
                                                     - vlSelfRef.__Vfunc_in_round_rect__7__ny);
                                                vlSelfRef.__Vfunc_in_round_rect__7__Vfuncout 
                                                    = 
                                                    VL_LTES_III(32, 
                                                                (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__dx, vlSelfRef.__Vfunc_in_round_rect__7__dx) 
                                                                 + 
                                                                 VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__dy, vlSelfRef.__Vfunc_in_round_rect__7__dy)), 
                                                                VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__7__rr, vlSelfRef.__Vfunc_in_round_rect__7__rr));
                                            }
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__inner 
                                                = vlSelfRef.__Vfunc_in_round_rect__7__Vfuncout;
                                            vlSelfRef.__Vfunc_body_outline_raw_at__5__Vfuncout 
                                                = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__5__outer) 
                                                   & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__5__inner)));
                                        }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__5__Vfuncout))) 
                                                           | ([&]() {
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__py 
                                            = (vlSelfRef.__PVT__unnamedblk1__DOT__py 
                                               - (IData)(1U));
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__px 
                                            = vlSelfRef.__PVT__unnamedblk1__DOT__px;
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__Vfuncout = 0U;
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__outer = 0U;
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__inner = 0U;
                                        vlSelfRef.__Vfunc_in_round_rect__9__rr = 0x0000000aU;
                                        vlSelfRef.__Vfunc_in_round_rect__9__rh = 0x00000034U;
                                        vlSelfRef.__Vfunc_in_round_rect__9__rw = 0x0000007cU;
                                        vlSelfRef.__Vfunc_in_round_rect__9__y0 = 6U;
                                        vlSelfRef.__Vfunc_in_round_rect__9__x0 = 2U;
                                        vlSelfRef.__Vfunc_in_round_rect__9__py 
                                            = vlSelfRef.__Vfunc_body_outline_raw_at__8__py;
                                        vlSelfRef.__Vfunc_in_round_rect__9__px 
                                            = vlSelfRef.__Vfunc_body_outline_raw_at__8__px;
                                        vlSelfRef.__Vfunc_in_round_rect__9__Vfuncout = 0U;
                                        vlSelf->__Vfunc_in_round_rect__9__x1 = 0;
                                        vlSelf->__Vfunc_in_round_rect__9__y1 = 0;
                                        vlSelf->__Vfunc_in_round_rect__9__nx = 0;
                                        vlSelf->__Vfunc_in_round_rect__9__ny = 0;
                                        vlSelf->__Vfunc_in_round_rect__9__dx = 0;
                                        vlSelf->__Vfunc_in_round_rect__9__dy = 0;
                                        vlSelfRef.__Vfunc_in_round_rect__9__x1 
                                            = ((vlSelfRef.__Vfunc_in_round_rect__9__x0 
                                                + vlSelfRef.__Vfunc_in_round_rect__9__rw) 
                                               - (IData)(1U));
                                        vlSelfRef.__Vfunc_in_round_rect__9__y1 
                                            = ((vlSelfRef.__Vfunc_in_round_rect__9__y0 
                                                + vlSelfRef.__Vfunc_in_round_rect__9__rh) 
                                               - (IData)(1U));
                                        if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__px, vlSelfRef.__Vfunc_in_round_rect__9__x0) 
                                               | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__px, vlSelfRef.__Vfunc_in_round_rect__9__x1)) 
                                              | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__py, vlSelfRef.__Vfunc_in_round_rect__9__y0)) 
                                             | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__py, vlSelfRef.__Vfunc_in_round_rect__9__y1))) {
                                            vlSelfRef.__Vfunc_in_round_rect__9__Vfuncout = 0U;
                                        } else {
                                            vlSelfRef.__Vfunc_in_round_rect__9__nx 
                                                = (
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__9__x0 
                                                               + vlSelfRef.__Vfunc_in_round_rect__9__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__9__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__9__rr)
                                                    : 
                                                   (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__px, 
                                                               (vlSelfRef.__Vfunc_in_round_rect__9__x1 
                                                                - vlSelfRef.__Vfunc_in_round_rect__9__rr))
                                                     ? 
                                                    (vlSelfRef.__Vfunc_in_round_rect__9__x1 
                                                     - vlSelfRef.__Vfunc_in_round_rect__9__rr)
                                                     : vlSelfRef.__Vfunc_in_round_rect__9__px));
                                            vlSelfRef.__Vfunc_in_round_rect__9__ny 
                                                = (
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__9__y0 
                                                               + vlSelfRef.__Vfunc_in_round_rect__9__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__9__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__9__rr)
                                                    : 
                                                   (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__py, 
                                                               (vlSelfRef.__Vfunc_in_round_rect__9__y1 
                                                                - vlSelfRef.__Vfunc_in_round_rect__9__rr))
                                                     ? 
                                                    (vlSelfRef.__Vfunc_in_round_rect__9__y1 
                                                     - vlSelfRef.__Vfunc_in_round_rect__9__rr)
                                                     : vlSelfRef.__Vfunc_in_round_rect__9__py));
                                            vlSelfRef.__Vfunc_in_round_rect__9__dx 
                                                = (vlSelfRef.__Vfunc_in_round_rect__9__px 
                                                   - vlSelfRef.__Vfunc_in_round_rect__9__nx);
                                            vlSelfRef.__Vfunc_in_round_rect__9__dy 
                                                = (vlSelfRef.__Vfunc_in_round_rect__9__py 
                                                   - vlSelfRef.__Vfunc_in_round_rect__9__ny);
                                            vlSelfRef.__Vfunc_in_round_rect__9__Vfuncout 
                                                = VL_LTES_III(32, 
                                                              (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__dx, vlSelfRef.__Vfunc_in_round_rect__9__dx) 
                                                               + 
                                                               VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__dy, vlSelfRef.__Vfunc_in_round_rect__9__dy)), 
                                                              VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__9__rr, vlSelfRef.__Vfunc_in_round_rect__9__rr));
                                        }
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__outer 
                                            = vlSelfRef.__Vfunc_in_round_rect__9__Vfuncout;
                                        vlSelfRef.__Vfunc_in_round_rect__10__rr = 9U;
                                        vlSelfRef.__Vfunc_in_round_rect__10__rh = 0x00000032U;
                                        vlSelfRef.__Vfunc_in_round_rect__10__rw = 0x0000007aU;
                                        vlSelfRef.__Vfunc_in_round_rect__10__y0 = 7U;
                                        vlSelfRef.__Vfunc_in_round_rect__10__x0 = 3U;
                                        vlSelfRef.__Vfunc_in_round_rect__10__py 
                                            = vlSelfRef.__Vfunc_body_outline_raw_at__8__py;
                                        vlSelfRef.__Vfunc_in_round_rect__10__px 
                                            = vlSelfRef.__Vfunc_body_outline_raw_at__8__px;
                                        vlSelfRef.__Vfunc_in_round_rect__10__Vfuncout = 0U;
                                        vlSelf->__Vfunc_in_round_rect__10__x1 = 0;
                                        vlSelf->__Vfunc_in_round_rect__10__y1 = 0;
                                        vlSelf->__Vfunc_in_round_rect__10__nx = 0;
                                        vlSelf->__Vfunc_in_round_rect__10__ny = 0;
                                        vlSelf->__Vfunc_in_round_rect__10__dx = 0;
                                        vlSelf->__Vfunc_in_round_rect__10__dy = 0;
                                        vlSelfRef.__Vfunc_in_round_rect__10__x1 
                                            = ((vlSelfRef.__Vfunc_in_round_rect__10__x0 
                                                + vlSelfRef.__Vfunc_in_round_rect__10__rw) 
                                               - (IData)(1U));
                                        vlSelfRef.__Vfunc_in_round_rect__10__y1 
                                            = ((vlSelfRef.__Vfunc_in_round_rect__10__y0 
                                                + vlSelfRef.__Vfunc_in_round_rect__10__rh) 
                                               - (IData)(1U));
                                        if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__px, vlSelfRef.__Vfunc_in_round_rect__10__x0) 
                                               | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__px, vlSelfRef.__Vfunc_in_round_rect__10__x1)) 
                                              | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__py, vlSelfRef.__Vfunc_in_round_rect__10__y0)) 
                                             | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__py, vlSelfRef.__Vfunc_in_round_rect__10__y1))) {
                                            vlSelfRef.__Vfunc_in_round_rect__10__Vfuncout = 0U;
                                        } else {
                                            vlSelfRef.__Vfunc_in_round_rect__10__nx 
                                                = (
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__10__x0 
                                                               + vlSelfRef.__Vfunc_in_round_rect__10__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__10__x0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__10__rr)
                                                    : 
                                                   (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__px, 
                                                               (vlSelfRef.__Vfunc_in_round_rect__10__x1 
                                                                - vlSelfRef.__Vfunc_in_round_rect__10__rr))
                                                     ? 
                                                    (vlSelfRef.__Vfunc_in_round_rect__10__x1 
                                                     - vlSelfRef.__Vfunc_in_round_rect__10__rr)
                                                     : vlSelfRef.__Vfunc_in_round_rect__10__px));
                                            vlSelfRef.__Vfunc_in_round_rect__10__ny 
                                                = (
                                                   VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__10__y0 
                                                               + vlSelfRef.__Vfunc_in_round_rect__10__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__10__y0 
                                                    + vlSelfRef.__Vfunc_in_round_rect__10__rr)
                                                    : 
                                                   (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__py, 
                                                               (vlSelfRef.__Vfunc_in_round_rect__10__y1 
                                                                - vlSelfRef.__Vfunc_in_round_rect__10__rr))
                                                     ? 
                                                    (vlSelfRef.__Vfunc_in_round_rect__10__y1 
                                                     - vlSelfRef.__Vfunc_in_round_rect__10__rr)
                                                     : vlSelfRef.__Vfunc_in_round_rect__10__py));
                                            vlSelfRef.__Vfunc_in_round_rect__10__dx 
                                                = (vlSelfRef.__Vfunc_in_round_rect__10__px 
                                                   - vlSelfRef.__Vfunc_in_round_rect__10__nx);
                                            vlSelfRef.__Vfunc_in_round_rect__10__dy 
                                                = (vlSelfRef.__Vfunc_in_round_rect__10__py 
                                                   - vlSelfRef.__Vfunc_in_round_rect__10__ny);
                                            vlSelfRef.__Vfunc_in_round_rect__10__Vfuncout 
                                                = VL_LTES_III(32, 
                                                              (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__dx, vlSelfRef.__Vfunc_in_round_rect__10__dx) 
                                                               + 
                                                               VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__dy, vlSelfRef.__Vfunc_in_round_rect__10__dy)), 
                                                              VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__10__rr, vlSelfRef.__Vfunc_in_round_rect__10__rr));
                                        }
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__inner 
                                            = vlSelfRef.__Vfunc_in_round_rect__10__Vfuncout;
                                        vlSelfRef.__Vfunc_body_outline_raw_at__8__Vfuncout 
                                            = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__8__outer) 
                                               & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__8__inner)));
                                    }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__8__Vfuncout))) 
                                                          | ([&]() {
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__py 
                                        = ((IData)(1U) 
                                           + vlSelfRef.__PVT__unnamedblk1__DOT__py);
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__px 
                                        = vlSelfRef.__PVT__unnamedblk1__DOT__px;
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__Vfuncout = 0U;
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__outer = 0U;
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__inner = 0U;
                                    vlSelfRef.__Vfunc_in_round_rect__12__rr = 0x0000000aU;
                                    vlSelfRef.__Vfunc_in_round_rect__12__rh = 0x00000034U;
                                    vlSelfRef.__Vfunc_in_round_rect__12__rw = 0x0000007cU;
                                    vlSelfRef.__Vfunc_in_round_rect__12__y0 = 6U;
                                    vlSelfRef.__Vfunc_in_round_rect__12__x0 = 2U;
                                    vlSelfRef.__Vfunc_in_round_rect__12__py 
                                        = vlSelfRef.__Vfunc_body_outline_raw_at__11__py;
                                    vlSelfRef.__Vfunc_in_round_rect__12__px 
                                        = vlSelfRef.__Vfunc_body_outline_raw_at__11__px;
                                    vlSelfRef.__Vfunc_in_round_rect__12__Vfuncout = 0U;
                                    vlSelf->__Vfunc_in_round_rect__12__x1 = 0;
                                    vlSelf->__Vfunc_in_round_rect__12__y1 = 0;
                                    vlSelf->__Vfunc_in_round_rect__12__nx = 0;
                                    vlSelf->__Vfunc_in_round_rect__12__ny = 0;
                                    vlSelf->__Vfunc_in_round_rect__12__dx = 0;
                                    vlSelf->__Vfunc_in_round_rect__12__dy = 0;
                                    vlSelfRef.__Vfunc_in_round_rect__12__x1 
                                        = ((vlSelfRef.__Vfunc_in_round_rect__12__x0 
                                            + vlSelfRef.__Vfunc_in_round_rect__12__rw) 
                                           - (IData)(1U));
                                    vlSelfRef.__Vfunc_in_round_rect__12__y1 
                                        = ((vlSelfRef.__Vfunc_in_round_rect__12__y0 
                                            + vlSelfRef.__Vfunc_in_round_rect__12__rh) 
                                           - (IData)(1U));
                                    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__px, vlSelfRef.__Vfunc_in_round_rect__12__x0) 
                                           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__px, vlSelfRef.__Vfunc_in_round_rect__12__x1)) 
                                          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__py, vlSelfRef.__Vfunc_in_round_rect__12__y0)) 
                                         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__py, vlSelfRef.__Vfunc_in_round_rect__12__y1))) {
                                        vlSelfRef.__Vfunc_in_round_rect__12__Vfuncout = 0U;
                                    } else {
                                        vlSelfRef.__Vfunc_in_round_rect__12__nx 
                                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__px, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__12__x0 
                                                           + vlSelfRef.__Vfunc_in_round_rect__12__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__12__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__12__rr)
                                                : (
                                                   VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__12__x1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__12__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__12__x1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__12__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__12__px));
                                        vlSelfRef.__Vfunc_in_round_rect__12__ny 
                                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__py, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__12__y0 
                                                           + vlSelfRef.__Vfunc_in_round_rect__12__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__12__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__12__rr)
                                                : (
                                                   VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__12__y1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__12__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__12__y1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__12__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__12__py));
                                        vlSelfRef.__Vfunc_in_round_rect__12__dx 
                                            = (vlSelfRef.__Vfunc_in_round_rect__12__px 
                                               - vlSelfRef.__Vfunc_in_round_rect__12__nx);
                                        vlSelfRef.__Vfunc_in_round_rect__12__dy 
                                            = (vlSelfRef.__Vfunc_in_round_rect__12__py 
                                               - vlSelfRef.__Vfunc_in_round_rect__12__ny);
                                        vlSelfRef.__Vfunc_in_round_rect__12__Vfuncout 
                                            = VL_LTES_III(32, 
                                                          (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__dx, vlSelfRef.__Vfunc_in_round_rect__12__dx) 
                                                           + 
                                                           VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__dy, vlSelfRef.__Vfunc_in_round_rect__12__dy)), 
                                                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__12__rr, vlSelfRef.__Vfunc_in_round_rect__12__rr));
                                    }
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__outer 
                                        = vlSelfRef.__Vfunc_in_round_rect__12__Vfuncout;
                                    vlSelfRef.__Vfunc_in_round_rect__13__rr = 9U;
                                    vlSelfRef.__Vfunc_in_round_rect__13__rh = 0x00000032U;
                                    vlSelfRef.__Vfunc_in_round_rect__13__rw = 0x0000007aU;
                                    vlSelfRef.__Vfunc_in_round_rect__13__y0 = 7U;
                                    vlSelfRef.__Vfunc_in_round_rect__13__x0 = 3U;
                                    vlSelfRef.__Vfunc_in_round_rect__13__py 
                                        = vlSelfRef.__Vfunc_body_outline_raw_at__11__py;
                                    vlSelfRef.__Vfunc_in_round_rect__13__px 
                                        = vlSelfRef.__Vfunc_body_outline_raw_at__11__px;
                                    vlSelfRef.__Vfunc_in_round_rect__13__Vfuncout = 0U;
                                    vlSelf->__Vfunc_in_round_rect__13__x1 = 0;
                                    vlSelf->__Vfunc_in_round_rect__13__y1 = 0;
                                    vlSelf->__Vfunc_in_round_rect__13__nx = 0;
                                    vlSelf->__Vfunc_in_round_rect__13__ny = 0;
                                    vlSelf->__Vfunc_in_round_rect__13__dx = 0;
                                    vlSelf->__Vfunc_in_round_rect__13__dy = 0;
                                    vlSelfRef.__Vfunc_in_round_rect__13__x1 
                                        = ((vlSelfRef.__Vfunc_in_round_rect__13__x0 
                                            + vlSelfRef.__Vfunc_in_round_rect__13__rw) 
                                           - (IData)(1U));
                                    vlSelfRef.__Vfunc_in_round_rect__13__y1 
                                        = ((vlSelfRef.__Vfunc_in_round_rect__13__y0 
                                            + vlSelfRef.__Vfunc_in_round_rect__13__rh) 
                                           - (IData)(1U));
                                    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__px, vlSelfRef.__Vfunc_in_round_rect__13__x0) 
                                           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__px, vlSelfRef.__Vfunc_in_round_rect__13__x1)) 
                                          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__py, vlSelfRef.__Vfunc_in_round_rect__13__y0)) 
                                         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__py, vlSelfRef.__Vfunc_in_round_rect__13__y1))) {
                                        vlSelfRef.__Vfunc_in_round_rect__13__Vfuncout = 0U;
                                    } else {
                                        vlSelfRef.__Vfunc_in_round_rect__13__nx 
                                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__px, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__13__x0 
                                                           + vlSelfRef.__Vfunc_in_round_rect__13__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__13__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__13__rr)
                                                : (
                                                   VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__px, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__13__x1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__13__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__13__x1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__13__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__13__px));
                                        vlSelfRef.__Vfunc_in_round_rect__13__ny 
                                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__py, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__13__y0 
                                                           + vlSelfRef.__Vfunc_in_round_rect__13__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__13__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__13__rr)
                                                : (
                                                   VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__py, 
                                                              (vlSelfRef.__Vfunc_in_round_rect__13__y1 
                                                               - vlSelfRef.__Vfunc_in_round_rect__13__rr))
                                                    ? 
                                                   (vlSelfRef.__Vfunc_in_round_rect__13__y1 
                                                    - vlSelfRef.__Vfunc_in_round_rect__13__rr)
                                                    : vlSelfRef.__Vfunc_in_round_rect__13__py));
                                        vlSelfRef.__Vfunc_in_round_rect__13__dx 
                                            = (vlSelfRef.__Vfunc_in_round_rect__13__px 
                                               - vlSelfRef.__Vfunc_in_round_rect__13__nx);
                                        vlSelfRef.__Vfunc_in_round_rect__13__dy 
                                            = (vlSelfRef.__Vfunc_in_round_rect__13__py 
                                               - vlSelfRef.__Vfunc_in_round_rect__13__ny);
                                        vlSelfRef.__Vfunc_in_round_rect__13__Vfuncout 
                                            = VL_LTES_III(32, 
                                                          (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__dx, vlSelfRef.__Vfunc_in_round_rect__13__dx) 
                                                           + 
                                                           VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__dy, vlSelfRef.__Vfunc_in_round_rect__13__dy)), 
                                                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__13__rr, vlSelfRef.__Vfunc_in_round_rect__13__rr));
                                    }
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__inner 
                                        = vlSelfRef.__Vfunc_in_round_rect__13__Vfuncout;
                                    vlSelfRef.__Vfunc_body_outline_raw_at__11__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__11__outer) 
                                           & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__11__inner)));
                                }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__11__Vfuncout))) 
                                                         | ([&]() {
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__py 
                                    = (vlSelfRef.__PVT__unnamedblk1__DOT__py 
                                       - (IData)(1U));
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__px 
                                    = (vlSelfRef.__PVT__unnamedblk1__DOT__px 
                                       - (IData)(1U));
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__Vfuncout = 0U;
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__outer = 0U;
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__inner = 0U;
                                vlSelfRef.__Vfunc_in_round_rect__15__rr = 0x0000000aU;
                                vlSelfRef.__Vfunc_in_round_rect__15__rh = 0x00000034U;
                                vlSelfRef.__Vfunc_in_round_rect__15__rw = 0x0000007cU;
                                vlSelfRef.__Vfunc_in_round_rect__15__y0 = 6U;
                                vlSelfRef.__Vfunc_in_round_rect__15__x0 = 2U;
                                vlSelfRef.__Vfunc_in_round_rect__15__py 
                                    = vlSelfRef.__Vfunc_body_outline_raw_at__14__py;
                                vlSelfRef.__Vfunc_in_round_rect__15__px 
                                    = vlSelfRef.__Vfunc_body_outline_raw_at__14__px;
                                vlSelfRef.__Vfunc_in_round_rect__15__Vfuncout = 0U;
                                vlSelf->__Vfunc_in_round_rect__15__x1 = 0;
                                vlSelf->__Vfunc_in_round_rect__15__y1 = 0;
                                vlSelf->__Vfunc_in_round_rect__15__nx = 0;
                                vlSelf->__Vfunc_in_round_rect__15__ny = 0;
                                vlSelf->__Vfunc_in_round_rect__15__dx = 0;
                                vlSelf->__Vfunc_in_round_rect__15__dy = 0;
                                vlSelfRef.__Vfunc_in_round_rect__15__x1 
                                    = ((vlSelfRef.__Vfunc_in_round_rect__15__x0 
                                        + vlSelfRef.__Vfunc_in_round_rect__15__rw) 
                                       - (IData)(1U));
                                vlSelfRef.__Vfunc_in_round_rect__15__y1 
                                    = ((vlSelfRef.__Vfunc_in_round_rect__15__y0 
                                        + vlSelfRef.__Vfunc_in_round_rect__15__rh) 
                                       - (IData)(1U));
                                if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__px, vlSelfRef.__Vfunc_in_round_rect__15__x0) 
                                       | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__px, vlSelfRef.__Vfunc_in_round_rect__15__x1)) 
                                      | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__py, vlSelfRef.__Vfunc_in_round_rect__15__y0)) 
                                     | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__py, vlSelfRef.__Vfunc_in_round_rect__15__y1))) {
                                    vlSelfRef.__Vfunc_in_round_rect__15__Vfuncout = 0U;
                                } else {
                                    vlSelfRef.__Vfunc_in_round_rect__15__nx 
                                        = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__px, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__15__x0 
                                                       + vlSelfRef.__Vfunc_in_round_rect__15__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__15__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__15__rr)
                                            : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__px, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__15__x1 
                                                           - vlSelfRef.__Vfunc_in_round_rect__15__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__15__x1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__15__rr)
                                                : vlSelfRef.__Vfunc_in_round_rect__15__px));
                                    vlSelfRef.__Vfunc_in_round_rect__15__ny 
                                        = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__py, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__15__y0 
                                                       + vlSelfRef.__Vfunc_in_round_rect__15__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__15__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__15__rr)
                                            : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__py, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__15__y1 
                                                           - vlSelfRef.__Vfunc_in_round_rect__15__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__15__y1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__15__rr)
                                                : vlSelfRef.__Vfunc_in_round_rect__15__py));
                                    vlSelfRef.__Vfunc_in_round_rect__15__dx 
                                        = (vlSelfRef.__Vfunc_in_round_rect__15__px 
                                           - vlSelfRef.__Vfunc_in_round_rect__15__nx);
                                    vlSelfRef.__Vfunc_in_round_rect__15__dy 
                                        = (vlSelfRef.__Vfunc_in_round_rect__15__py 
                                           - vlSelfRef.__Vfunc_in_round_rect__15__ny);
                                    vlSelfRef.__Vfunc_in_round_rect__15__Vfuncout 
                                        = VL_LTES_III(32, 
                                                      (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__dx, vlSelfRef.__Vfunc_in_round_rect__15__dx) 
                                                       + 
                                                       VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__dy, vlSelfRef.__Vfunc_in_round_rect__15__dy)), 
                                                      VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__15__rr, vlSelfRef.__Vfunc_in_round_rect__15__rr));
                                }
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__outer 
                                    = vlSelfRef.__Vfunc_in_round_rect__15__Vfuncout;
                                vlSelfRef.__Vfunc_in_round_rect__16__rr = 9U;
                                vlSelfRef.__Vfunc_in_round_rect__16__rh = 0x00000032U;
                                vlSelfRef.__Vfunc_in_round_rect__16__rw = 0x0000007aU;
                                vlSelfRef.__Vfunc_in_round_rect__16__y0 = 7U;
                                vlSelfRef.__Vfunc_in_round_rect__16__x0 = 3U;
                                vlSelfRef.__Vfunc_in_round_rect__16__py 
                                    = vlSelfRef.__Vfunc_body_outline_raw_at__14__py;
                                vlSelfRef.__Vfunc_in_round_rect__16__px 
                                    = vlSelfRef.__Vfunc_body_outline_raw_at__14__px;
                                vlSelfRef.__Vfunc_in_round_rect__16__Vfuncout = 0U;
                                vlSelf->__Vfunc_in_round_rect__16__x1 = 0;
                                vlSelf->__Vfunc_in_round_rect__16__y1 = 0;
                                vlSelf->__Vfunc_in_round_rect__16__nx = 0;
                                vlSelf->__Vfunc_in_round_rect__16__ny = 0;
                                vlSelf->__Vfunc_in_round_rect__16__dx = 0;
                                vlSelf->__Vfunc_in_round_rect__16__dy = 0;
                                vlSelfRef.__Vfunc_in_round_rect__16__x1 
                                    = ((vlSelfRef.__Vfunc_in_round_rect__16__x0 
                                        + vlSelfRef.__Vfunc_in_round_rect__16__rw) 
                                       - (IData)(1U));
                                vlSelfRef.__Vfunc_in_round_rect__16__y1 
                                    = ((vlSelfRef.__Vfunc_in_round_rect__16__y0 
                                        + vlSelfRef.__Vfunc_in_round_rect__16__rh) 
                                       - (IData)(1U));
                                if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__px, vlSelfRef.__Vfunc_in_round_rect__16__x0) 
                                       | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__px, vlSelfRef.__Vfunc_in_round_rect__16__x1)) 
                                      | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__py, vlSelfRef.__Vfunc_in_round_rect__16__y0)) 
                                     | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__py, vlSelfRef.__Vfunc_in_round_rect__16__y1))) {
                                    vlSelfRef.__Vfunc_in_round_rect__16__Vfuncout = 0U;
                                } else {
                                    vlSelfRef.__Vfunc_in_round_rect__16__nx 
                                        = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__px, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__16__x0 
                                                       + vlSelfRef.__Vfunc_in_round_rect__16__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__16__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__16__rr)
                                            : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__px, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__16__x1 
                                                           - vlSelfRef.__Vfunc_in_round_rect__16__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__16__x1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__16__rr)
                                                : vlSelfRef.__Vfunc_in_round_rect__16__px));
                                    vlSelfRef.__Vfunc_in_round_rect__16__ny 
                                        = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__py, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__16__y0 
                                                       + vlSelfRef.__Vfunc_in_round_rect__16__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__16__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__16__rr)
                                            : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__py, 
                                                          (vlSelfRef.__Vfunc_in_round_rect__16__y1 
                                                           - vlSelfRef.__Vfunc_in_round_rect__16__rr))
                                                ? (vlSelfRef.__Vfunc_in_round_rect__16__y1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__16__rr)
                                                : vlSelfRef.__Vfunc_in_round_rect__16__py));
                                    vlSelfRef.__Vfunc_in_round_rect__16__dx 
                                        = (vlSelfRef.__Vfunc_in_round_rect__16__px 
                                           - vlSelfRef.__Vfunc_in_round_rect__16__nx);
                                    vlSelfRef.__Vfunc_in_round_rect__16__dy 
                                        = (vlSelfRef.__Vfunc_in_round_rect__16__py 
                                           - vlSelfRef.__Vfunc_in_round_rect__16__ny);
                                    vlSelfRef.__Vfunc_in_round_rect__16__Vfuncout 
                                        = VL_LTES_III(32, 
                                                      (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__dx, vlSelfRef.__Vfunc_in_round_rect__16__dx) 
                                                       + 
                                                       VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__dy, vlSelfRef.__Vfunc_in_round_rect__16__dy)), 
                                                      VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__16__rr, vlSelfRef.__Vfunc_in_round_rect__16__rr));
                                }
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__inner 
                                    = vlSelfRef.__Vfunc_in_round_rect__16__Vfuncout;
                                vlSelfRef.__Vfunc_body_outline_raw_at__14__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__14__outer) 
                                       & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__14__inner)));
                            }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__14__Vfuncout))) 
                                                        | ([&]() {
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__py 
                                = (vlSelfRef.__PVT__unnamedblk1__DOT__py 
                                   - (IData)(1U));
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__px 
                                = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__px);
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__Vfuncout = 0U;
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__outer = 0U;
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__inner = 0U;
                            vlSelfRef.__Vfunc_in_round_rect__18__rr = 0x0000000aU;
                            vlSelfRef.__Vfunc_in_round_rect__18__rh = 0x00000034U;
                            vlSelfRef.__Vfunc_in_round_rect__18__rw = 0x0000007cU;
                            vlSelfRef.__Vfunc_in_round_rect__18__y0 = 6U;
                            vlSelfRef.__Vfunc_in_round_rect__18__x0 = 2U;
                            vlSelfRef.__Vfunc_in_round_rect__18__py 
                                = vlSelfRef.__Vfunc_body_outline_raw_at__17__py;
                            vlSelfRef.__Vfunc_in_round_rect__18__px 
                                = vlSelfRef.__Vfunc_body_outline_raw_at__17__px;
                            vlSelfRef.__Vfunc_in_round_rect__18__Vfuncout = 0U;
                            vlSelf->__Vfunc_in_round_rect__18__x1 = 0;
                            vlSelf->__Vfunc_in_round_rect__18__y1 = 0;
                            vlSelf->__Vfunc_in_round_rect__18__nx = 0;
                            vlSelf->__Vfunc_in_round_rect__18__ny = 0;
                            vlSelf->__Vfunc_in_round_rect__18__dx = 0;
                            vlSelf->__Vfunc_in_round_rect__18__dy = 0;
                            vlSelfRef.__Vfunc_in_round_rect__18__x1 
                                = ((vlSelfRef.__Vfunc_in_round_rect__18__x0 
                                    + vlSelfRef.__Vfunc_in_round_rect__18__rw) 
                                   - (IData)(1U));
                            vlSelfRef.__Vfunc_in_round_rect__18__y1 
                                = ((vlSelfRef.__Vfunc_in_round_rect__18__y0 
                                    + vlSelfRef.__Vfunc_in_round_rect__18__rh) 
                                   - (IData)(1U));
                            if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__px, vlSelfRef.__Vfunc_in_round_rect__18__x0) 
                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__px, vlSelfRef.__Vfunc_in_round_rect__18__x1)) 
                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__py, vlSelfRef.__Vfunc_in_round_rect__18__y0)) 
                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__py, vlSelfRef.__Vfunc_in_round_rect__18__y1))) {
                                vlSelfRef.__Vfunc_in_round_rect__18__Vfuncout = 0U;
                            } else {
                                vlSelfRef.__Vfunc_in_round_rect__18__nx 
                                    = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__px, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__18__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__18__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__18__x0 
                                           + vlSelfRef.__Vfunc_in_round_rect__18__rr)
                                        : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__px, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__18__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__18__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__18__x1 
                                               - vlSelfRef.__Vfunc_in_round_rect__18__rr)
                                            : vlSelfRef.__Vfunc_in_round_rect__18__px));
                                vlSelfRef.__Vfunc_in_round_rect__18__ny 
                                    = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__py, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__18__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__18__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__18__y0 
                                           + vlSelfRef.__Vfunc_in_round_rect__18__rr)
                                        : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__py, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__18__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__18__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__18__y1 
                                               - vlSelfRef.__Vfunc_in_round_rect__18__rr)
                                            : vlSelfRef.__Vfunc_in_round_rect__18__py));
                                vlSelfRef.__Vfunc_in_round_rect__18__dx 
                                    = (vlSelfRef.__Vfunc_in_round_rect__18__px 
                                       - vlSelfRef.__Vfunc_in_round_rect__18__nx);
                                vlSelfRef.__Vfunc_in_round_rect__18__dy 
                                    = (vlSelfRef.__Vfunc_in_round_rect__18__py 
                                       - vlSelfRef.__Vfunc_in_round_rect__18__ny);
                                vlSelfRef.__Vfunc_in_round_rect__18__Vfuncout 
                                    = VL_LTES_III(32, 
                                                  (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__dx, vlSelfRef.__Vfunc_in_round_rect__18__dx) 
                                                   + 
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__dy, vlSelfRef.__Vfunc_in_round_rect__18__dy)), 
                                                  VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__18__rr, vlSelfRef.__Vfunc_in_round_rect__18__rr));
                            }
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__outer 
                                = vlSelfRef.__Vfunc_in_round_rect__18__Vfuncout;
                            vlSelfRef.__Vfunc_in_round_rect__19__rr = 9U;
                            vlSelfRef.__Vfunc_in_round_rect__19__rh = 0x00000032U;
                            vlSelfRef.__Vfunc_in_round_rect__19__rw = 0x0000007aU;
                            vlSelfRef.__Vfunc_in_round_rect__19__y0 = 7U;
                            vlSelfRef.__Vfunc_in_round_rect__19__x0 = 3U;
                            vlSelfRef.__Vfunc_in_round_rect__19__py 
                                = vlSelfRef.__Vfunc_body_outline_raw_at__17__py;
                            vlSelfRef.__Vfunc_in_round_rect__19__px 
                                = vlSelfRef.__Vfunc_body_outline_raw_at__17__px;
                            vlSelfRef.__Vfunc_in_round_rect__19__Vfuncout = 0U;
                            vlSelf->__Vfunc_in_round_rect__19__x1 = 0;
                            vlSelf->__Vfunc_in_round_rect__19__y1 = 0;
                            vlSelf->__Vfunc_in_round_rect__19__nx = 0;
                            vlSelf->__Vfunc_in_round_rect__19__ny = 0;
                            vlSelf->__Vfunc_in_round_rect__19__dx = 0;
                            vlSelf->__Vfunc_in_round_rect__19__dy = 0;
                            vlSelfRef.__Vfunc_in_round_rect__19__x1 
                                = ((vlSelfRef.__Vfunc_in_round_rect__19__x0 
                                    + vlSelfRef.__Vfunc_in_round_rect__19__rw) 
                                   - (IData)(1U));
                            vlSelfRef.__Vfunc_in_round_rect__19__y1 
                                = ((vlSelfRef.__Vfunc_in_round_rect__19__y0 
                                    + vlSelfRef.__Vfunc_in_round_rect__19__rh) 
                                   - (IData)(1U));
                            if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__px, vlSelfRef.__Vfunc_in_round_rect__19__x0) 
                                   | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__px, vlSelfRef.__Vfunc_in_round_rect__19__x1)) 
                                  | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__py, vlSelfRef.__Vfunc_in_round_rect__19__y0)) 
                                 | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__py, vlSelfRef.__Vfunc_in_round_rect__19__y1))) {
                                vlSelfRef.__Vfunc_in_round_rect__19__Vfuncout = 0U;
                            } else {
                                vlSelfRef.__Vfunc_in_round_rect__19__nx 
                                    = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__px, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__19__x0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__19__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__19__x0 
                                           + vlSelfRef.__Vfunc_in_round_rect__19__rr)
                                        : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__px, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__19__x1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__19__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__19__x1 
                                               - vlSelfRef.__Vfunc_in_round_rect__19__rr)
                                            : vlSelfRef.__Vfunc_in_round_rect__19__px));
                                vlSelfRef.__Vfunc_in_round_rect__19__ny 
                                    = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__py, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__19__y0 
                                                   + vlSelfRef.__Vfunc_in_round_rect__19__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__19__y0 
                                           + vlSelfRef.__Vfunc_in_round_rect__19__rr)
                                        : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__py, 
                                                      (vlSelfRef.__Vfunc_in_round_rect__19__y1 
                                                       - vlSelfRef.__Vfunc_in_round_rect__19__rr))
                                            ? (vlSelfRef.__Vfunc_in_round_rect__19__y1 
                                               - vlSelfRef.__Vfunc_in_round_rect__19__rr)
                                            : vlSelfRef.__Vfunc_in_round_rect__19__py));
                                vlSelfRef.__Vfunc_in_round_rect__19__dx 
                                    = (vlSelfRef.__Vfunc_in_round_rect__19__px 
                                       - vlSelfRef.__Vfunc_in_round_rect__19__nx);
                                vlSelfRef.__Vfunc_in_round_rect__19__dy 
                                    = (vlSelfRef.__Vfunc_in_round_rect__19__py 
                                       - vlSelfRef.__Vfunc_in_round_rect__19__ny);
                                vlSelfRef.__Vfunc_in_round_rect__19__Vfuncout 
                                    = VL_LTES_III(32, 
                                                  (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__dx, vlSelfRef.__Vfunc_in_round_rect__19__dx) 
                                                   + 
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__dy, vlSelfRef.__Vfunc_in_round_rect__19__dy)), 
                                                  VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__19__rr, vlSelfRef.__Vfunc_in_round_rect__19__rr));
                            }
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__inner 
                                = vlSelfRef.__Vfunc_in_round_rect__19__Vfuncout;
                            vlSelfRef.__Vfunc_body_outline_raw_at__17__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__17__outer) 
                                   & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__17__inner)));
                        }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__17__Vfuncout))) 
                                                       | ([&]() {
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__py 
                            = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__py);
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__px 
                            = (vlSelfRef.__PVT__unnamedblk1__DOT__px 
                               - (IData)(1U));
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__Vfuncout = 0U;
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__outer = 0U;
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__inner = 0U;
                        vlSelfRef.__Vfunc_in_round_rect__21__rr = 0x0000000aU;
                        vlSelfRef.__Vfunc_in_round_rect__21__rh = 0x00000034U;
                        vlSelfRef.__Vfunc_in_round_rect__21__rw = 0x0000007cU;
                        vlSelfRef.__Vfunc_in_round_rect__21__y0 = 6U;
                        vlSelfRef.__Vfunc_in_round_rect__21__x0 = 2U;
                        vlSelfRef.__Vfunc_in_round_rect__21__py 
                            = vlSelfRef.__Vfunc_body_outline_raw_at__20__py;
                        vlSelfRef.__Vfunc_in_round_rect__21__px 
                            = vlSelfRef.__Vfunc_body_outline_raw_at__20__px;
                        vlSelfRef.__Vfunc_in_round_rect__21__Vfuncout = 0U;
                        vlSelf->__Vfunc_in_round_rect__21__x1 = 0;
                        vlSelf->__Vfunc_in_round_rect__21__y1 = 0;
                        vlSelf->__Vfunc_in_round_rect__21__nx = 0;
                        vlSelf->__Vfunc_in_round_rect__21__ny = 0;
                        vlSelf->__Vfunc_in_round_rect__21__dx = 0;
                        vlSelf->__Vfunc_in_round_rect__21__dy = 0;
                        vlSelfRef.__Vfunc_in_round_rect__21__x1 
                            = ((vlSelfRef.__Vfunc_in_round_rect__21__x0 
                                + vlSelfRef.__Vfunc_in_round_rect__21__rw) 
                               - (IData)(1U));
                        vlSelfRef.__Vfunc_in_round_rect__21__y1 
                            = ((vlSelfRef.__Vfunc_in_round_rect__21__y0 
                                + vlSelfRef.__Vfunc_in_round_rect__21__rh) 
                               - (IData)(1U));
                        if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__px, vlSelfRef.__Vfunc_in_round_rect__21__x0) 
                               | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__px, vlSelfRef.__Vfunc_in_round_rect__21__x1)) 
                              | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__py, vlSelfRef.__Vfunc_in_round_rect__21__y0)) 
                             | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__py, vlSelfRef.__Vfunc_in_round_rect__21__y1))) {
                            vlSelfRef.__Vfunc_in_round_rect__21__Vfuncout = 0U;
                        } else {
                            vlSelfRef.__Vfunc_in_round_rect__21__nx 
                                = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__px, 
                                              (vlSelfRef.__Vfunc_in_round_rect__21__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__21__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__21__x0 
                                       + vlSelfRef.__Vfunc_in_round_rect__21__rr)
                                    : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__px, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__21__x1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__21__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__21__x1 
                                           - vlSelfRef.__Vfunc_in_round_rect__21__rr)
                                        : vlSelfRef.__Vfunc_in_round_rect__21__px));
                            vlSelfRef.__Vfunc_in_round_rect__21__ny 
                                = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__py, 
                                              (vlSelfRef.__Vfunc_in_round_rect__21__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__21__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__21__y0 
                                       + vlSelfRef.__Vfunc_in_round_rect__21__rr)
                                    : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__py, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__21__y1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__21__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__21__y1 
                                           - vlSelfRef.__Vfunc_in_round_rect__21__rr)
                                        : vlSelfRef.__Vfunc_in_round_rect__21__py));
                            vlSelfRef.__Vfunc_in_round_rect__21__dx 
                                = (vlSelfRef.__Vfunc_in_round_rect__21__px 
                                   - vlSelfRef.__Vfunc_in_round_rect__21__nx);
                            vlSelfRef.__Vfunc_in_round_rect__21__dy 
                                = (vlSelfRef.__Vfunc_in_round_rect__21__py 
                                   - vlSelfRef.__Vfunc_in_round_rect__21__ny);
                            vlSelfRef.__Vfunc_in_round_rect__21__Vfuncout 
                                = VL_LTES_III(32, (
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__dx, vlSelfRef.__Vfunc_in_round_rect__21__dx) 
                                                   + 
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__dy, vlSelfRef.__Vfunc_in_round_rect__21__dy)), 
                                              VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__21__rr, vlSelfRef.__Vfunc_in_round_rect__21__rr));
                        }
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__outer 
                            = vlSelfRef.__Vfunc_in_round_rect__21__Vfuncout;
                        vlSelfRef.__Vfunc_in_round_rect__22__rr = 9U;
                        vlSelfRef.__Vfunc_in_round_rect__22__rh = 0x00000032U;
                        vlSelfRef.__Vfunc_in_round_rect__22__rw = 0x0000007aU;
                        vlSelfRef.__Vfunc_in_round_rect__22__y0 = 7U;
                        vlSelfRef.__Vfunc_in_round_rect__22__x0 = 3U;
                        vlSelfRef.__Vfunc_in_round_rect__22__py 
                            = vlSelfRef.__Vfunc_body_outline_raw_at__20__py;
                        vlSelfRef.__Vfunc_in_round_rect__22__px 
                            = vlSelfRef.__Vfunc_body_outline_raw_at__20__px;
                        vlSelfRef.__Vfunc_in_round_rect__22__Vfuncout = 0U;
                        vlSelf->__Vfunc_in_round_rect__22__x1 = 0;
                        vlSelf->__Vfunc_in_round_rect__22__y1 = 0;
                        vlSelf->__Vfunc_in_round_rect__22__nx = 0;
                        vlSelf->__Vfunc_in_round_rect__22__ny = 0;
                        vlSelf->__Vfunc_in_round_rect__22__dx = 0;
                        vlSelf->__Vfunc_in_round_rect__22__dy = 0;
                        vlSelfRef.__Vfunc_in_round_rect__22__x1 
                            = ((vlSelfRef.__Vfunc_in_round_rect__22__x0 
                                + vlSelfRef.__Vfunc_in_round_rect__22__rw) 
                               - (IData)(1U));
                        vlSelfRef.__Vfunc_in_round_rect__22__y1 
                            = ((vlSelfRef.__Vfunc_in_round_rect__22__y0 
                                + vlSelfRef.__Vfunc_in_round_rect__22__rh) 
                               - (IData)(1U));
                        if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__px, vlSelfRef.__Vfunc_in_round_rect__22__x0) 
                               | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__px, vlSelfRef.__Vfunc_in_round_rect__22__x1)) 
                              | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__py, vlSelfRef.__Vfunc_in_round_rect__22__y0)) 
                             | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__py, vlSelfRef.__Vfunc_in_round_rect__22__y1))) {
                            vlSelfRef.__Vfunc_in_round_rect__22__Vfuncout = 0U;
                        } else {
                            vlSelfRef.__Vfunc_in_round_rect__22__nx 
                                = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__px, 
                                              (vlSelfRef.__Vfunc_in_round_rect__22__x0 
                                               + vlSelfRef.__Vfunc_in_round_rect__22__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__22__x0 
                                       + vlSelfRef.__Vfunc_in_round_rect__22__rr)
                                    : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__px, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__22__x1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__22__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__22__x1 
                                           - vlSelfRef.__Vfunc_in_round_rect__22__rr)
                                        : vlSelfRef.__Vfunc_in_round_rect__22__px));
                            vlSelfRef.__Vfunc_in_round_rect__22__ny 
                                = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__py, 
                                              (vlSelfRef.__Vfunc_in_round_rect__22__y0 
                                               + vlSelfRef.__Vfunc_in_round_rect__22__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__22__y0 
                                       + vlSelfRef.__Vfunc_in_round_rect__22__rr)
                                    : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__py, 
                                                  (vlSelfRef.__Vfunc_in_round_rect__22__y1 
                                                   - vlSelfRef.__Vfunc_in_round_rect__22__rr))
                                        ? (vlSelfRef.__Vfunc_in_round_rect__22__y1 
                                           - vlSelfRef.__Vfunc_in_round_rect__22__rr)
                                        : vlSelfRef.__Vfunc_in_round_rect__22__py));
                            vlSelfRef.__Vfunc_in_round_rect__22__dx 
                                = (vlSelfRef.__Vfunc_in_round_rect__22__px 
                                   - vlSelfRef.__Vfunc_in_round_rect__22__nx);
                            vlSelfRef.__Vfunc_in_round_rect__22__dy 
                                = (vlSelfRef.__Vfunc_in_round_rect__22__py 
                                   - vlSelfRef.__Vfunc_in_round_rect__22__ny);
                            vlSelfRef.__Vfunc_in_round_rect__22__Vfuncout 
                                = VL_LTES_III(32, (
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__dx, vlSelfRef.__Vfunc_in_round_rect__22__dx) 
                                                   + 
                                                   VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__dy, vlSelfRef.__Vfunc_in_round_rect__22__dy)), 
                                              VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__22__rr, vlSelfRef.__Vfunc_in_round_rect__22__rr));
                        }
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__inner 
                            = vlSelfRef.__Vfunc_in_round_rect__22__Vfuncout;
                        vlSelfRef.__Vfunc_body_outline_raw_at__20__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__20__outer) 
                               & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__20__inner)));
                    }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__20__Vfuncout))) 
                                                      | ([&]() {
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__py 
                        = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__py);
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__px 
                        = ((IData)(1U) + vlSelfRef.__PVT__unnamedblk1__DOT__px);
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__Vfuncout = 0U;
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__outer = 0U;
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__inner = 0U;
                    vlSelfRef.__Vfunc_in_round_rect__24__rr = 0x0000000aU;
                    vlSelfRef.__Vfunc_in_round_rect__24__rh = 0x00000034U;
                    vlSelfRef.__Vfunc_in_round_rect__24__rw = 0x0000007cU;
                    vlSelfRef.__Vfunc_in_round_rect__24__y0 = 6U;
                    vlSelfRef.__Vfunc_in_round_rect__24__x0 = 2U;
                    vlSelfRef.__Vfunc_in_round_rect__24__py 
                        = vlSelfRef.__Vfunc_body_outline_raw_at__23__py;
                    vlSelfRef.__Vfunc_in_round_rect__24__px 
                        = vlSelfRef.__Vfunc_body_outline_raw_at__23__px;
                    vlSelfRef.__Vfunc_in_round_rect__24__Vfuncout = 0U;
                    vlSelf->__Vfunc_in_round_rect__24__x1 = 0;
                    vlSelf->__Vfunc_in_round_rect__24__y1 = 0;
                    vlSelf->__Vfunc_in_round_rect__24__nx = 0;
                    vlSelf->__Vfunc_in_round_rect__24__ny = 0;
                    vlSelf->__Vfunc_in_round_rect__24__dx = 0;
                    vlSelf->__Vfunc_in_round_rect__24__dy = 0;
                    vlSelfRef.__Vfunc_in_round_rect__24__x1 
                        = ((vlSelfRef.__Vfunc_in_round_rect__24__x0 
                            + vlSelfRef.__Vfunc_in_round_rect__24__rw) 
                           - (IData)(1U));
                    vlSelfRef.__Vfunc_in_round_rect__24__y1 
                        = ((vlSelfRef.__Vfunc_in_round_rect__24__y0 
                            + vlSelfRef.__Vfunc_in_round_rect__24__rh) 
                           - (IData)(1U));
                    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__px, vlSelfRef.__Vfunc_in_round_rect__24__x0) 
                           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__px, vlSelfRef.__Vfunc_in_round_rect__24__x1)) 
                          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__py, vlSelfRef.__Vfunc_in_round_rect__24__y0)) 
                         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__py, vlSelfRef.__Vfunc_in_round_rect__24__y1))) {
                        vlSelfRef.__Vfunc_in_round_rect__24__Vfuncout = 0U;
                    } else {
                        vlSelfRef.__Vfunc_in_round_rect__24__nx 
                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__px, 
                                          (vlSelfRef.__Vfunc_in_round_rect__24__x0 
                                           + vlSelfRef.__Vfunc_in_round_rect__24__rr))
                                ? (vlSelfRef.__Vfunc_in_round_rect__24__x0 
                                   + vlSelfRef.__Vfunc_in_round_rect__24__rr)
                                : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__px, 
                                              (vlSelfRef.__Vfunc_in_round_rect__24__x1 
                                               - vlSelfRef.__Vfunc_in_round_rect__24__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__24__x1 
                                       - vlSelfRef.__Vfunc_in_round_rect__24__rr)
                                    : vlSelfRef.__Vfunc_in_round_rect__24__px));
                        vlSelfRef.__Vfunc_in_round_rect__24__ny 
                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__py, 
                                          (vlSelfRef.__Vfunc_in_round_rect__24__y0 
                                           + vlSelfRef.__Vfunc_in_round_rect__24__rr))
                                ? (vlSelfRef.__Vfunc_in_round_rect__24__y0 
                                   + vlSelfRef.__Vfunc_in_round_rect__24__rr)
                                : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__py, 
                                              (vlSelfRef.__Vfunc_in_round_rect__24__y1 
                                               - vlSelfRef.__Vfunc_in_round_rect__24__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__24__y1 
                                       - vlSelfRef.__Vfunc_in_round_rect__24__rr)
                                    : vlSelfRef.__Vfunc_in_round_rect__24__py));
                        vlSelfRef.__Vfunc_in_round_rect__24__dx 
                            = (vlSelfRef.__Vfunc_in_round_rect__24__px 
                               - vlSelfRef.__Vfunc_in_round_rect__24__nx);
                        vlSelfRef.__Vfunc_in_round_rect__24__dy 
                            = (vlSelfRef.__Vfunc_in_round_rect__24__py 
                               - vlSelfRef.__Vfunc_in_round_rect__24__ny);
                        vlSelfRef.__Vfunc_in_round_rect__24__Vfuncout 
                            = VL_LTES_III(32, (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__dx, vlSelfRef.__Vfunc_in_round_rect__24__dx) 
                                               + VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__dy, vlSelfRef.__Vfunc_in_round_rect__24__dy)), 
                                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__24__rr, vlSelfRef.__Vfunc_in_round_rect__24__rr));
                    }
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__outer 
                        = vlSelfRef.__Vfunc_in_round_rect__24__Vfuncout;
                    vlSelfRef.__Vfunc_in_round_rect__25__rr = 9U;
                    vlSelfRef.__Vfunc_in_round_rect__25__rh = 0x00000032U;
                    vlSelfRef.__Vfunc_in_round_rect__25__rw = 0x0000007aU;
                    vlSelfRef.__Vfunc_in_round_rect__25__y0 = 7U;
                    vlSelfRef.__Vfunc_in_round_rect__25__x0 = 3U;
                    vlSelfRef.__Vfunc_in_round_rect__25__py 
                        = vlSelfRef.__Vfunc_body_outline_raw_at__23__py;
                    vlSelfRef.__Vfunc_in_round_rect__25__px 
                        = vlSelfRef.__Vfunc_body_outline_raw_at__23__px;
                    vlSelfRef.__Vfunc_in_round_rect__25__Vfuncout = 0U;
                    vlSelf->__Vfunc_in_round_rect__25__x1 = 0;
                    vlSelf->__Vfunc_in_round_rect__25__y1 = 0;
                    vlSelf->__Vfunc_in_round_rect__25__nx = 0;
                    vlSelf->__Vfunc_in_round_rect__25__ny = 0;
                    vlSelf->__Vfunc_in_round_rect__25__dx = 0;
                    vlSelf->__Vfunc_in_round_rect__25__dy = 0;
                    vlSelfRef.__Vfunc_in_round_rect__25__x1 
                        = ((vlSelfRef.__Vfunc_in_round_rect__25__x0 
                            + vlSelfRef.__Vfunc_in_round_rect__25__rw) 
                           - (IData)(1U));
                    vlSelfRef.__Vfunc_in_round_rect__25__y1 
                        = ((vlSelfRef.__Vfunc_in_round_rect__25__y0 
                            + vlSelfRef.__Vfunc_in_round_rect__25__rh) 
                           - (IData)(1U));
                    if ((((VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__px, vlSelfRef.__Vfunc_in_round_rect__25__x0) 
                           | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__px, vlSelfRef.__Vfunc_in_round_rect__25__x1)) 
                          | VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__py, vlSelfRef.__Vfunc_in_round_rect__25__y0)) 
                         | VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__py, vlSelfRef.__Vfunc_in_round_rect__25__y1))) {
                        vlSelfRef.__Vfunc_in_round_rect__25__Vfuncout = 0U;
                    } else {
                        vlSelfRef.__Vfunc_in_round_rect__25__nx 
                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__px, 
                                          (vlSelfRef.__Vfunc_in_round_rect__25__x0 
                                           + vlSelfRef.__Vfunc_in_round_rect__25__rr))
                                ? (vlSelfRef.__Vfunc_in_round_rect__25__x0 
                                   + vlSelfRef.__Vfunc_in_round_rect__25__rr)
                                : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__px, 
                                              (vlSelfRef.__Vfunc_in_round_rect__25__x1 
                                               - vlSelfRef.__Vfunc_in_round_rect__25__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__25__x1 
                                       - vlSelfRef.__Vfunc_in_round_rect__25__rr)
                                    : vlSelfRef.__Vfunc_in_round_rect__25__px));
                        vlSelfRef.__Vfunc_in_round_rect__25__ny 
                            = (VL_LTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__py, 
                                          (vlSelfRef.__Vfunc_in_round_rect__25__y0 
                                           + vlSelfRef.__Vfunc_in_round_rect__25__rr))
                                ? (vlSelfRef.__Vfunc_in_round_rect__25__y0 
                                   + vlSelfRef.__Vfunc_in_round_rect__25__rr)
                                : (VL_GTS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__py, 
                                              (vlSelfRef.__Vfunc_in_round_rect__25__y1 
                                               - vlSelfRef.__Vfunc_in_round_rect__25__rr))
                                    ? (vlSelfRef.__Vfunc_in_round_rect__25__y1 
                                       - vlSelfRef.__Vfunc_in_round_rect__25__rr)
                                    : vlSelfRef.__Vfunc_in_round_rect__25__py));
                        vlSelfRef.__Vfunc_in_round_rect__25__dx 
                            = (vlSelfRef.__Vfunc_in_round_rect__25__px 
                               - vlSelfRef.__Vfunc_in_round_rect__25__nx);
                        vlSelfRef.__Vfunc_in_round_rect__25__dy 
                            = (vlSelfRef.__Vfunc_in_round_rect__25__py 
                               - vlSelfRef.__Vfunc_in_round_rect__25__ny);
                        vlSelfRef.__Vfunc_in_round_rect__25__Vfuncout 
                            = VL_LTES_III(32, (VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__dx, vlSelfRef.__Vfunc_in_round_rect__25__dx) 
                                               + VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__dy, vlSelfRef.__Vfunc_in_round_rect__25__dy)), 
                                          VL_MULS_III(32, vlSelfRef.__Vfunc_in_round_rect__25__rr, vlSelfRef.__Vfunc_in_round_rect__25__rr));
                    }
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__inner 
                        = vlSelfRef.__Vfunc_in_round_rect__25__Vfuncout;
                    vlSelfRef.__Vfunc_body_outline_raw_at__23__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_body_outline_raw_at__23__outer) 
                           & (~ (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__23__inner)));
                }(), (IData)(vlSelfRef.__Vfunc_body_outline_raw_at__23__Vfuncout))));
    vlSelfRef.__PVT__unnamedblk1__DOT__body_outline 
        = ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_raw) 
           | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_fix));
    vlSelfRef.__Vfunc_in_rect__26__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__26__rw = 6U;
    vlSelfRef.__Vfunc_in_rect__26__y0 = 0x0000001dU;
    vlSelfRef.__Vfunc_in_rect__26__x0 = 0x00000019U;
    vlSelfRef.__Vfunc_in_rect__26__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__26__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__26__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__26__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__26__px, vlSelfRef.__Vfunc_in_rect__26__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__26__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__26__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__26__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__26__py, vlSelfRef.__Vfunc_in_rect__26__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__26__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__26__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__26__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_center = vlSelfRef.__Vfunc_in_rect__26__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__27__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__27__rw = 6U;
    vlSelfRef.__Vfunc_in_rect__27__y0 = 0x00000017U;
    vlSelfRef.__Vfunc_in_rect__27__x0 = 0x00000019U;
    vlSelfRef.__Vfunc_in_rect__27__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__27__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__27__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__27__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__27__px, vlSelfRef.__Vfunc_in_rect__27__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__27__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__27__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__27__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__27__py, vlSelfRef.__Vfunc_in_rect__27__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__27__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__27__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__27__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_up = vlSelfRef.__Vfunc_in_rect__27__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__28__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__28__rw = 6U;
    vlSelfRef.__Vfunc_in_rect__28__y0 = 0x00000023U;
    vlSelfRef.__Vfunc_in_rect__28__x0 = 0x00000019U;
    vlSelfRef.__Vfunc_in_rect__28__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__28__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__28__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__28__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__28__px, vlSelfRef.__Vfunc_in_rect__28__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__28__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__28__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__28__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__28__py, vlSelfRef.__Vfunc_in_rect__28__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__28__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__28__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__28__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_down = vlSelfRef.__Vfunc_in_rect__28__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__29__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__29__rw = 6U;
    vlSelfRef.__Vfunc_in_rect__29__y0 = 0x0000001dU;
    vlSelfRef.__Vfunc_in_rect__29__x0 = 0x00000013U;
    vlSelfRef.__Vfunc_in_rect__29__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__29__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__29__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__29__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__29__px, vlSelfRef.__Vfunc_in_rect__29__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__29__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__29__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__29__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__29__py, vlSelfRef.__Vfunc_in_rect__29__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__29__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__29__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__29__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_left = vlSelfRef.__Vfunc_in_rect__29__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__30__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__30__rw = 6U;
    vlSelfRef.__Vfunc_in_rect__30__y0 = 0x0000001dU;
    vlSelfRef.__Vfunc_in_rect__30__x0 = 0x0000001fU;
    vlSelfRef.__Vfunc_in_rect__30__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__30__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__30__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__30__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__30__px, vlSelfRef.__Vfunc_in_rect__30__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__30__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__30__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__30__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__30__py, vlSelfRef.__Vfunc_in_rect__30__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__30__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__30__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__30__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_right = vlSelfRef.__Vfunc_in_rect__30__Vfuncout;
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_fill = ((
                                                   (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_center) 
                                                     | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_up)) 
                                                    | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_down)) 
                                                   | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_left)) 
                                                  | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_right));
    vlSelfRef.__Vfunc_in_rect__31__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__31__rw = 8U;
    vlSelfRef.__Vfunc_in_rect__31__y0 = 0x0000001cU;
    vlSelfRef.__Vfunc_in_rect__31__x0 = 0x00000018U;
    vlSelfRef.__Vfunc_in_rect__31__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__31__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__31__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__31__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__31__px, vlSelfRef.__Vfunc_in_rect__31__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__31__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__31__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__31__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__31__py, vlSelfRef.__Vfunc_in_rect__31__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__31__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__31__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__31__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_center_o 
        = vlSelfRef.__Vfunc_in_rect__31__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__32__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__32__rw = 8U;
    vlSelfRef.__Vfunc_in_rect__32__y0 = 0x00000016U;
    vlSelfRef.__Vfunc_in_rect__32__x0 = 0x00000018U;
    vlSelfRef.__Vfunc_in_rect__32__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__32__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__32__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__32__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__32__px, vlSelfRef.__Vfunc_in_rect__32__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__32__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__32__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__32__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__32__py, vlSelfRef.__Vfunc_in_rect__32__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__32__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__32__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__32__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_up_o = vlSelfRef.__Vfunc_in_rect__32__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__33__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__33__rw = 8U;
    vlSelfRef.__Vfunc_in_rect__33__y0 = 0x00000022U;
    vlSelfRef.__Vfunc_in_rect__33__x0 = 0x00000018U;
    vlSelfRef.__Vfunc_in_rect__33__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__33__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__33__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__33__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__33__px, vlSelfRef.__Vfunc_in_rect__33__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__33__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__33__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__33__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__33__py, vlSelfRef.__Vfunc_in_rect__33__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__33__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__33__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__33__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_down_o = vlSelfRef.__Vfunc_in_rect__33__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__34__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__34__rw = 8U;
    vlSelfRef.__Vfunc_in_rect__34__y0 = 0x0000001cU;
    vlSelfRef.__Vfunc_in_rect__34__x0 = 0x00000012U;
    vlSelfRef.__Vfunc_in_rect__34__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__34__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__34__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__34__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__34__px, vlSelfRef.__Vfunc_in_rect__34__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__34__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__34__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__34__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__34__py, vlSelfRef.__Vfunc_in_rect__34__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__34__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__34__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__34__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_left_o = vlSelfRef.__Vfunc_in_rect__34__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__35__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__35__rw = 8U;
    vlSelfRef.__Vfunc_in_rect__35__y0 = 0x0000001cU;
    vlSelfRef.__Vfunc_in_rect__35__x0 = 0x0000001eU;
    vlSelfRef.__Vfunc_in_rect__35__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__35__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__35__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__35__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__35__px, vlSelfRef.__Vfunc_in_rect__35__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__35__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__35__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__35__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__35__py, vlSelfRef.__Vfunc_in_rect__35__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__35__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__35__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__35__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_right_o = vlSelfRef.__Vfunc_in_rect__35__Vfuncout;
    vlSelfRef.__PVT__unnamedblk1__DOT__dp_outer = (
                                                   ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_center_o) 
                                                      | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_up_o)) 
                                                     | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_down_o)) 
                                                    | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_left_o)) 
                                                   | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_right_o));
    vlSelfRef.__Vfunc_in_circle__36__r = 5U;
    vlSelfRef.__Vfunc_in_circle__36__cy = 0x00000020U;
    vlSelfRef.__Vfunc_in_circle__36__cx = 0x0000006aU;
    vlSelfRef.__Vfunc_in_circle__36__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_circle__36__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_circle__36__Vfuncout = 0U;
    vlSelf->__Vfunc_in_circle__36__dx = 0;
    vlSelf->__Vfunc_in_circle__36__dy = 0;
    vlSelfRef.__Vfunc_in_circle__36__dx = (vlSelfRef.__Vfunc_in_circle__36__px 
                                           - vlSelfRef.__Vfunc_in_circle__36__cx);
    vlSelfRef.__Vfunc_in_circle__36__dy = (vlSelfRef.__Vfunc_in_circle__36__py 
                                           - vlSelfRef.__Vfunc_in_circle__36__cy);
    vlSelfRef.__Vfunc_in_circle__36__Vfuncout = VL_LTES_III(32, 
                                                            (VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__36__dx, vlSelfRef.__Vfunc_in_circle__36__dx) 
                                                             + 
                                                             VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__36__dy, vlSelfRef.__Vfunc_in_circle__36__dy)), 
                                                            VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__36__r, vlSelfRef.__Vfunc_in_circle__36__r));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_fill = vlSelfRef.__Vfunc_in_circle__36__Vfuncout;
    vlSelfRef.__Vfunc_in_circle__37__r = 5U;
    vlSelfRef.__Vfunc_in_circle__37__cy = 0x00000020U;
    vlSelfRef.__Vfunc_in_circle__37__cx = 0x00000058U;
    vlSelfRef.__Vfunc_in_circle__37__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_circle__37__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_circle__37__Vfuncout = 0U;
    vlSelf->__Vfunc_in_circle__37__dx = 0;
    vlSelf->__Vfunc_in_circle__37__dy = 0;
    vlSelfRef.__Vfunc_in_circle__37__dx = (vlSelfRef.__Vfunc_in_circle__37__px 
                                           - vlSelfRef.__Vfunc_in_circle__37__cx);
    vlSelfRef.__Vfunc_in_circle__37__dy = (vlSelfRef.__Vfunc_in_circle__37__py 
                                           - vlSelfRef.__Vfunc_in_circle__37__cy);
    vlSelfRef.__Vfunc_in_circle__37__Vfuncout = VL_LTES_III(32, 
                                                            (VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__37__dx, vlSelfRef.__Vfunc_in_circle__37__dx) 
                                                             + 
                                                             VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__37__dy, vlSelfRef.__Vfunc_in_circle__37__dy)), 
                                                            VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__37__r, vlSelfRef.__Vfunc_in_circle__37__r));
    vlSelfRef.__PVT__unnamedblk1__DOT__b_fill = vlSelfRef.__Vfunc_in_circle__37__Vfuncout;
    vlSelfRef.__Vfunc_in_circle__38__r = 7U;
    vlSelfRef.__Vfunc_in_circle__38__cy = 0x00000020U;
    vlSelfRef.__Vfunc_in_circle__38__cx = 0x0000006aU;
    vlSelfRef.__Vfunc_in_circle__38__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_circle__38__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_circle__38__Vfuncout = 0U;
    vlSelf->__Vfunc_in_circle__38__dx = 0;
    vlSelf->__Vfunc_in_circle__38__dy = 0;
    vlSelfRef.__Vfunc_in_circle__38__dx = (vlSelfRef.__Vfunc_in_circle__38__px 
                                           - vlSelfRef.__Vfunc_in_circle__38__cx);
    vlSelfRef.__Vfunc_in_circle__38__dy = (vlSelfRef.__Vfunc_in_circle__38__py 
                                           - vlSelfRef.__Vfunc_in_circle__38__cy);
    vlSelfRef.__Vfunc_in_circle__38__Vfuncout = VL_LTES_III(32, 
                                                            (VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__38__dx, vlSelfRef.__Vfunc_in_circle__38__dx) 
                                                             + 
                                                             VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__38__dy, vlSelfRef.__Vfunc_in_circle__38__dy)), 
                                                            VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__38__r, vlSelfRef.__Vfunc_in_circle__38__r));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_out = vlSelfRef.__Vfunc_in_circle__38__Vfuncout;
    vlSelfRef.__Vfunc_in_circle__39__r = 7U;
    vlSelfRef.__Vfunc_in_circle__39__cy = 0x00000020U;
    vlSelfRef.__Vfunc_in_circle__39__cx = 0x00000058U;
    vlSelfRef.__Vfunc_in_circle__39__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_circle__39__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_circle__39__Vfuncout = 0U;
    vlSelf->__Vfunc_in_circle__39__dx = 0;
    vlSelf->__Vfunc_in_circle__39__dy = 0;
    vlSelfRef.__Vfunc_in_circle__39__dx = (vlSelfRef.__Vfunc_in_circle__39__px 
                                           - vlSelfRef.__Vfunc_in_circle__39__cx);
    vlSelfRef.__Vfunc_in_circle__39__dy = (vlSelfRef.__Vfunc_in_circle__39__py 
                                           - vlSelfRef.__Vfunc_in_circle__39__cy);
    vlSelfRef.__Vfunc_in_circle__39__Vfuncout = VL_LTES_III(32, 
                                                            (VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__39__dx, vlSelfRef.__Vfunc_in_circle__39__dx) 
                                                             + 
                                                             VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__39__dy, vlSelfRef.__Vfunc_in_circle__39__dy)), 
                                                            VL_MULS_III(32, vlSelfRef.__Vfunc_in_circle__39__r, vlSelfRef.__Vfunc_in_circle__39__r));
    vlSelfRef.__PVT__unnamedblk1__DOT__b_out = vlSelfRef.__Vfunc_in_circle__39__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__40__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__40__rw = 0x0000000fU;
    vlSelfRef.__Vfunc_in_rect__40__y0 = 0x00000022U;
    vlSelfRef.__Vfunc_in_rect__40__x0 = 0x0000003dU;
    vlSelfRef.__Vfunc_in_rect__40__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__40__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__40__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__40__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__40__px, vlSelfRef.__Vfunc_in_rect__40__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__40__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__40__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__40__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__40__py, vlSelfRef.__Vfunc_in_rect__40__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__40__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__40__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__40__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__start_out = vlSelfRef.__Vfunc_in_rect__40__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__41__rh = 8U;
    vlSelfRef.__Vfunc_in_rect__41__rw = 0x0000000fU;
    vlSelfRef.__Vfunc_in_rect__41__y0 = 0x00000022U;
    vlSelfRef.__Vfunc_in_rect__41__x0 = 0x0000002dU;
    vlSelfRef.__Vfunc_in_rect__41__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__41__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__41__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__41__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__41__px, vlSelfRef.__Vfunc_in_rect__41__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__41__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__41__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__41__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__41__py, vlSelfRef.__Vfunc_in_rect__41__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__41__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__41__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__41__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__select_out = vlSelfRef.__Vfunc_in_rect__41__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__42__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__42__rw = 0x0000000dU;
    vlSelfRef.__Vfunc_in_rect__42__y0 = 0x00000023U;
    vlSelfRef.__Vfunc_in_rect__42__x0 = 0x0000003eU;
    vlSelfRef.__Vfunc_in_rect__42__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__42__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__42__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__42__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__42__px, vlSelfRef.__Vfunc_in_rect__42__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__42__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__42__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__42__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__42__py, vlSelfRef.__Vfunc_in_rect__42__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__42__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__42__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__42__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__start_in = vlSelfRef.__Vfunc_in_rect__42__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__43__rh = 6U;
    vlSelfRef.__Vfunc_in_rect__43__rw = 0x0000000dU;
    vlSelfRef.__Vfunc_in_rect__43__y0 = 0x00000023U;
    vlSelfRef.__Vfunc_in_rect__43__x0 = 0x0000002eU;
    vlSelfRef.__Vfunc_in_rect__43__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__43__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__43__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__43__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__43__px, vlSelfRef.__Vfunc_in_rect__43__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__43__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__43__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__43__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__43__py, vlSelfRef.__Vfunc_in_rect__43__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__43__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__43__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__43__rh)));
    vlSelfRef.__PVT__unnamedblk1__DOT__select_in = vlSelfRef.__Vfunc_in_rect__43__Vfuncout;
    vlSelfRef.__PVT__base = ((((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__body_outline) 
                                 | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_outer) 
                                    & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__dp_fill)))) 
                                | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__start_out) 
                                   & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__start_in)))) 
                               | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__select_out) 
                                  & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__select_in)))) 
                              | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_out) 
                                 & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_fill)))) 
                             | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__b_out) 
                                & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__b_fill))));
    vlSelfRef.__PVT__mask_a = vlSelfRef.__PVT__unnamedblk1__DOT__a_fill;
    vlSelfRef.__PVT__mask_b = vlSelfRef.__PVT__unnamedblk1__DOT__b_fill;
    vlSelfRef.__Vfunc_in_rect__44__rh = 3U;
    vlSelfRef.__Vfunc_in_rect__44__rw = 0x0000000bU;
    vlSelfRef.__Vfunc_in_rect__44__y0 = 0x00000024U;
    vlSelfRef.__Vfunc_in_rect__44__x0 = 0x0000003fU;
    vlSelfRef.__Vfunc_in_rect__44__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__44__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__44__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__44__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__44__px, vlSelfRef.__Vfunc_in_rect__44__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__44__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__44__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__44__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__44__py, vlSelfRef.__Vfunc_in_rect__44__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__44__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__44__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__44__rh)));
    vlSelfRef.__PVT__mask_start = vlSelfRef.__Vfunc_in_rect__44__Vfuncout;
    vlSelfRef.__Vfunc_in_rect__45__rh = 3U;
    vlSelfRef.__Vfunc_in_rect__45__rw = 0x0000000bU;
    vlSelfRef.__Vfunc_in_rect__45__y0 = 0x00000024U;
    vlSelfRef.__Vfunc_in_rect__45__x0 = 0x0000002fU;
    vlSelfRef.__Vfunc_in_rect__45__py = vlSelfRef.__PVT__unnamedblk1__DOT__py;
    vlSelfRef.__Vfunc_in_rect__45__px = vlSelfRef.__PVT__unnamedblk1__DOT__px;
    vlSelfRef.__Vfunc_in_rect__45__Vfuncout = 0U;
    vlSelfRef.__Vfunc_in_rect__45__Vfuncout = (((VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__45__px, vlSelfRef.__Vfunc_in_rect__45__x0) 
                                                 & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__45__px, 
                                                              (vlSelfRef.__Vfunc_in_rect__45__x0 
                                                               + vlSelfRef.__Vfunc_in_rect__45__rw))) 
                                                & VL_GTES_III(32, vlSelfRef.__Vfunc_in_rect__45__py, vlSelfRef.__Vfunc_in_rect__45__y0)) 
                                               & VL_LTS_III(32, vlSelfRef.__Vfunc_in_rect__45__py, 
                                                            (vlSelfRef.__Vfunc_in_rect__45__y0 
                                                             + vlSelfRef.__Vfunc_in_rect__45__rh)));
    vlSelfRef.__PVT__mask_select = vlSelfRef.__Vfunc_in_rect__45__Vfuncout;
    vlSelfRef.__PVT__mask_up = vlSelfRef.__PVT__unnamedblk1__DOT__dp_up;
    vlSelfRef.__PVT__mask_down = vlSelfRef.__PVT__unnamedblk1__DOT__dp_down;
    vlSelfRef.__PVT__mask_left = vlSelfRef.__PVT__unnamedblk1__DOT__dp_left;
    vlSelfRef.__PVT__mask_right = vlSelfRef.__PVT__unnamedblk1__DOT__dp_right;
}

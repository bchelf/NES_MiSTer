// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_HUD_CONTROLLER_H_
#define VERILATED_VNES_CORE_TOP_HUD_CONTROLLER_H_  // guard

#include "verilated.h"
class Vnes_core_top_hud_assets;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_hud_controller final {
  public:
    // CELLS
    Vnes_core_top_hud_assets* __PVT__assets;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*7:0*/ __PVT__p1_frame;
    CData/*7:0*/ __PVT__p2_frame;
    CData/*1:0*/ __PVT__hud_mode;
    CData/*1:0*/ __PVT__hud_position;
    CData/*0:0*/ __PVT__hud_scale;
    CData/*0:0*/ __PVT__hud_active;
    CData/*0:0*/ __PVT__base_px;
    CData/*0:0*/ __PVT__mask_a;
    CData/*0:0*/ __PVT__mask_b;
    CData/*0:0*/ __PVT__mask_start;
    CData/*0:0*/ __PVT__mask_select;
    CData/*0:0*/ __PVT__mask_up;
    CData/*0:0*/ __PVT__mask_down;
    CData/*0:0*/ __PVT__mask_left;
    CData/*0:0*/ __PVT__mask_right;
    CData/*6:0*/ __PVT__local_x;
    CData/*5:0*/ __PVT__local_y;
    CData/*7:0*/ __PVT__active_buttons;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__lit_px;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__draw_px;
    SData/*8:0*/ __PVT__x;
    SData/*8:0*/ __PVT__y;
    IData/*23:0*/ __PVT__hud_pixel;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__scale_mul;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__sprite_w;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__sprite_h;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__gap;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__count;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__total_w;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__x0;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__y0;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__rel_x;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__rel_y;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__ctrl_sel;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__ctrl_x;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__x_i;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__y_i;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_hud_controller();
    ~Vnes_core_top_hud_controller();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_hud_controller);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

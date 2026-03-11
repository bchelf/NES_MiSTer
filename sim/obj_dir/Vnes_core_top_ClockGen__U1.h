// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_CLOCKGEN__U1_H_
#define VERILATED_VNES_CORE_TOP_CLOCKGEN__U1_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az9;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_ClockGen__U1 final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az9* __PVT__genblk1__DOT__iREG_SAVESTATE;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__reset;
    CData/*1:0*/ __PVT__sys_type;
    CData/*0:0*/ __PVT__is_rendering;
    CData/*0:0*/ __PVT__is_in_vblank;
    CData/*0:0*/ __PVT__end_of_line;
    CData/*0:0*/ __PVT__at_last_cycle_group;
    CData/*0:0*/ __PVT__exiting_vblank;
    CData/*0:0*/ __PVT__entering_vblank;
    CData/*0:0*/ __PVT__is_pre_render;
    CData/*0:0*/ __PVT__short_frame;
    CData/*0:0*/ __PVT__is_vbe_sl;
    CData/*0:0*/ __PVT__evenframe;
    CData/*0:0*/ __PVT__hsync;
    CData/*0:0*/ __PVT__vsync;
    CData/*0:0*/ __PVT__hblank;
    CData/*0:0*/ __PVT__vblank;
    CData/*0:0*/ __PVT__SaveStateBus_wren;
    CData/*0:0*/ __PVT__SaveStateBus_rst;
    CData/*0:0*/ __PVT__is_even_frame;
    CData/*0:0*/ __PVT__skip_en;
    CData/*3:0*/ __PVT__rendering_sr;
    CData/*0:0*/ __PVT__skip_next;
    CData/*0:0*/ __PVT__skip_pixel;
    CData/*0:0*/ __PVT__new_is_in_vblank;
    CData/*0:0*/ __PVT__hsync_period;
    CData/*0:0*/ __PVT__hblank_period;
    CData/*0:0*/ __Vdly__skip_next;
    CData/*0:0*/ __Vdly__is_in_vblank;
    CData/*3:0*/ __Vdly__rendering_sr;
    CData/*0:0*/ __Vdly__vblank;
    CData/*0:0*/ __Vdly__hblank;
    CData/*0:0*/ __Vdly__vsync;
    CData/*0:0*/ __Vdly__hsync;
    CData/*0:0*/ __Vdly__is_pre_render;
    CData/*0:0*/ __Vdly__is_even_frame;
    SData/*8:0*/ __PVT__scanline;
    SData/*8:0*/ __PVT__cycle;
    SData/*9:0*/ __PVT__SaveStateBus_Adr;
    SData/*8:0*/ __PVT__vblank_start_sl;
    SData/*8:0*/ __PVT__vblank_end_sl;
    SData/*8:0*/ __PVT__vsync_start_sl;
    SData/*8:0*/ __Vdly__cycle;
    SData/*8:0*/ __Vdly__scanline;
    QData/*63:0*/ __PVT__SaveStateBus_Din;
    QData/*63:0*/ __PVT__SaveStateBus_Dout;
    QData/*63:0*/ __PVT__SS_CLKGEN;
    QData/*63:0*/ __PVT__genblk1__DOT__SS_CLKGEN_BACK;
    QData/*63:0*/ __PVT__genblk1__DOT__SS_CLKGEN_OUT;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_ClockGen__U1();
    ~Vnes_core_top_ClockGen__U1();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_ClockGen__U1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

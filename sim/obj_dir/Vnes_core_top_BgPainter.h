// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_BGPAINTER_H_
#define VERILATED_VNES_CORE_TOP_BGPAINTER_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_BgPainter final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__pclk0;
    CData/*0:0*/ __PVT__clear;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__latch_nametable;
    CData/*0:0*/ __PVT__latch_attrtable;
    CData/*0:0*/ __PVT__latch_pattern1;
    CData/*0:0*/ __PVT__latch_pattern2;
    CData/*2:0*/ __PVT__fine_x_scroll;
    CData/*7:0*/ __PVT__name_table;
    CData/*7:0*/ __PVT__vram_data;
    CData/*3:0*/ __PVT__pixel;
    CData/*7:0*/ __PVT__current_name_table;
    CData/*1:0*/ __PVT__current_attribute_table;
    CData/*7:0*/ __PVT__bg0;
    CData/*7:0*/ __PVT__bg1;
    CData/*3:0*/ __PVT__i;
    CData/*7:0*/ __Vdly__current_name_table;
    CData/*1:0*/ __Vdly__current_attribute_table;
    CData/*7:0*/ __Vdly__bg0;
    SData/*14:0*/ __PVT__vram_v;
    SData/*15:0*/ __PVT__playfield_pipe_1;
    SData/*15:0*/ __PVT__playfield_pipe_2;
    SData/*8:0*/ __PVT__playfield_pipe_3;
    SData/*8:0*/ __PVT__playfield_pipe_4;
    SData/*15:0*/ __Vdly__playfield_pipe_1;
    SData/*15:0*/ __Vdly__playfield_pipe_2;
    SData/*8:0*/ __Vdly__playfield_pipe_3;
    SData/*8:0*/ __Vdly__playfield_pipe_4;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_BgPainter();
    ~Vnes_core_top_BgPainter();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_BgPainter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

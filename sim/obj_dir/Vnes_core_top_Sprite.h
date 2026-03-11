// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SPRITE_H_
#define VERILATED_VNES_CORE_TOP_SPRITE_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_Sprite final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__counting;
    CData/*0:0*/ __PVT__rendering;
    CData/*3:0*/ __PVT__load;
    CData/*4:0*/ __PVT__bits;
    CData/*1:0*/ __PVT__upper_color;
    CData/*7:0*/ __PVT__x_coord;
    CData/*7:0*/ __PVT__pix1;
    CData/*7:0*/ __PVT__pix2;
    CData/*0:0*/ __PVT__aprio;
    CData/*0:0*/ __PVT__active;
    CData/*7:0*/ __Vdly__x_coord;
    CData/*7:0*/ __Vdly__pix1;
    CData/*7:0*/ __Vdly__pix2;
    CData/*1:0*/ __Vdly__upper_color;
    CData/*0:0*/ __Vdly__aprio;
    IData/*26:0*/ __PVT__load_in;
    IData/*26:0*/ __PVT__load_out;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_Sprite();
    ~Vnes_core_top_Sprite();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_Sprite);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_PIXELMUXER_H_
#define VERILATED_VNES_CORE_TOP_PIXELMUXER_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_PixelMuxer final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__bg;
    CData/*3:0*/ __PVT__obj;
    CData/*0:0*/ __PVT__obj_prio;
    CData/*4:0*/ __PVT__out;
    CData/*0:0*/ __PVT__is_obj;
    CData/*0:0*/ __PVT__bg_valid;
    CData/*0:0*/ __PVT__obj_valid;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_PixelMuxer();
    ~Vnes_core_top_PixelMuxer();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_PixelMuxer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_DEBUG_DOTS_H_
#define VERILATED_VNES_CORE_TOP_DEBUG_DOTS_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_debug_dots final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__enable;
    CData/*5:0*/ __PVT__color;
    CData/*0:0*/ __PVT__custom1;
    CData/*0:0*/ __PVT__custom2;
    CData/*0:0*/ __PVT__w2000;
    CData/*0:0*/ __PVT__w2001;
    CData/*0:0*/ __PVT__r2002;
    CData/*0:0*/ __PVT__w2003;
    CData/*0:0*/ __PVT__r2004;
    CData/*0:0*/ __PVT__w2004;
    CData/*0:0*/ __PVT__w2005;
    CData/*0:0*/ __PVT__w2006;
    CData/*0:0*/ __PVT__r2007;
    CData/*0:0*/ __PVT__w2007;
    CData/*5:0*/ __PVT__new_color;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_debug_dots();
    ~Vnes_core_top_debug_dots();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_debug_dots);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

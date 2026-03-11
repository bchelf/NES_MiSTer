// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_STATEMANAGER__PI1_H_
#define VERILATED_VNES_CORE_TOP_STATEMANAGER__PI1_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_statemanager__pi1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__rewind_on;
    CData/*0:0*/ __PVT__rewind_active;
    CData/*1:0*/ __PVT__savestate_number;
    CData/*0:0*/ __PVT__save;
    CData/*0:0*/ __PVT__load;
    CData/*0:0*/ __PVT__sleep_rewind;
    CData/*0:0*/ __PVT__vsync;
    CData/*0:0*/ __PVT__request_savestate;
    CData/*0:0*/ __PVT__request_loadstate;
    CData/*0:0*/ __PVT__request_busy;
    IData/*31:0*/ __PVT__request_address;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_statemanager__pi1();
    ~Vnes_core_top_statemanager__pi1();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_statemanager__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

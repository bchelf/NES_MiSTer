// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SAVESTATES_H_
#define VERILATED_VNES_CORE_TOP_SAVESTATES_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_savestates final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__reset_in;
    CData/*0:0*/ __PVT__reset_ss;
    CData/*0:0*/ __PVT__reset_delay;
    CData/*0:0*/ __PVT__load_done;
    CData/*0:0*/ __PVT__increaseSSHeaderCount;
    CData/*0:0*/ __PVT__save;
    CData/*0:0*/ __PVT__load;
    CData/*0:0*/ __PVT__savestate_busy;
    CData/*0:0*/ __PVT__paused;
    CData/*0:0*/ __PVT__BUS_wren;
    CData/*0:0*/ __PVT__BUS_rst;
    CData/*0:0*/ __PVT__loading_savestate;
    CData/*0:0*/ __PVT__saving_savestate;
    CData/*0:0*/ __PVT__sleep_savestate;
    CData/*0:0*/ __PVT__Save_RAMRdEn;
    CData/*0:0*/ __PVT__Save_RAMWrEn;
    CData/*7:0*/ __PVT__Save_RAMWriteData;
    CData/*7:0*/ __PVT__Save_RAMReadData;
    CData/*2:0*/ __PVT__Save_RAMType;
    CData/*0:0*/ __PVT__bus_out_rnw;
    CData/*0:0*/ __PVT__bus_out_ena;
    CData/*7:0*/ __PVT__bus_out_be;
    CData/*0:0*/ __PVT__bus_out_done;
    SData/*9:0*/ __PVT__BUS_Adr;
    IData/*31:0*/ __PVT__savestate_address;
    IData/*24:0*/ __PVT__Save_RAMAddr;
    IData/*25:0*/ __PVT__bus_out_Adr;
    QData/*63:0*/ __PVT__BUS_Din;
    QData/*63:0*/ __PVT__BUS_Dout;
    QData/*63:0*/ __PVT__bus_out_Din;
    QData/*63:0*/ __PVT__bus_out_Dout;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_savestates();
    ~Vnes_core_top_savestates();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_savestates);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

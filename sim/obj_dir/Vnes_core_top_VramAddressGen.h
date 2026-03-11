// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_VRAMADDRESSGEN_H_
#define VERILATED_VNES_CORE_TOP_VRAMADDRESSGEN_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az10;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_VramAddressGen final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az10* __PVT__iREG_SAVESTATE;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__clear;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__is_rendering;
    CData/*2:0*/ __PVT__ain;
    CData/*7:0*/ __PVT__din;
    CData/*0:0*/ __PVT__read;
    CData/*0:0*/ __PVT__write;
    CData/*0:0*/ __PVT__is_pre_render;
    CData/*0:0*/ __PVT__trigger_2007;
    CData/*2:0*/ __PVT__fine_x_scroll;
    CData/*0:0*/ __PVT__SaveStateBus_wren;
    CData/*0:0*/ __PVT__SaveStateBus_rst;
    CData/*0:0*/ __PVT__ppu_incr;
    CData/*2:0*/ __PVT__vram_x;
    CData/*0:0*/ __PVT__ppu_address_latch;
    CData/*1:0*/ __PVT__write_shift;
    CData/*0:0*/ __PVT__write_2006b;
    CData/*0:0*/ __PVT__inc_horizontal;
    CData/*0:0*/ __PVT__inc_vertical;
    CData/*0:0*/ __PVT__copy_hscroll;
    CData/*0:0*/ __PVT__copy_vscroll;
    CData/*0:0*/ __Vdly__ppu_incr;
    CData/*2:0*/ __Vdly__vram_x;
    CData/*0:0*/ __Vdly__ppu_address_latch;
    CData/*1:0*/ __Vdly__write_shift;
    SData/*8:0*/ __PVT__cycle;
    SData/*14:0*/ __PVT__vram;
    SData/*9:0*/ __PVT__SaveStateBus_Adr;
    SData/*14:0*/ __PVT__vram_v;
    SData/*14:0*/ __PVT__vram_t;
    SData/*14:0*/ __PVT__vram_t_mask;
    SData/*14:0*/ __Vdly__vram_v;
    SData/*14:0*/ __Vdly__vram_t;
    QData/*63:0*/ __PVT__SaveStateBus_Din;
    QData/*63:0*/ __PVT__SaveStateBus_Dout;
    QData/*63:0*/ __PVT__SS_vram;
    QData/*63:0*/ __PVT__SS_vram_BACK;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_VramAddressGen();
    ~Vnes_core_top_VramAddressGen();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_VramAddressGen);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

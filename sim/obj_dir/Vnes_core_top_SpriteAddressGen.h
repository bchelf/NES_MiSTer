// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SPRITEADDRESSGEN_H_
#define VERILATED_VNES_CORE_TOP_SPRITEADDRESSGEN_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_SpriteAddressGen final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__rendering;
    CData/*0:0*/ __PVT__enabled;
    CData/*0:0*/ __PVT__obj_size;
    CData/*0:0*/ __PVT__obj_patt;
    CData/*0:0*/ __PVT__in_range;
    CData/*7:0*/ __PVT__temp;
    CData/*7:0*/ __PVT__vram_data;
    CData/*3:0*/ __PVT__load;
    CData/*2:0*/ __PVT__count;
    CData/*7:0*/ __PVT__temp_tile;
    CData/*3:0*/ __PVT__temp_y;
    CData/*0:0*/ __PVT__flip_x;
    CData/*0:0*/ __PVT__flip_y;
    CData/*0:0*/ __PVT__load_y;
    CData/*0:0*/ __PVT__load_tile;
    CData/*0:0*/ __PVT__load_attr;
    CData/*0:0*/ __PVT__load_x;
    CData/*0:0*/ __PVT__load_pix1;
    CData/*0:0*/ __PVT__load_pix2;
    CData/*0:0*/ __PVT__dummy_sprite;
    CData/*7:0*/ __PVT__vram_f;
    CData/*3:0*/ __PVT__y_f;
    CData/*7:0*/ __PVT__scanline_y;
    CData/*2:0*/ __Vdly__count;
    CData/*3:0*/ __Vdly__temp_y;
    CData/*0:0*/ __Vdly__dummy_sprite;
    CData/*7:0*/ __Vdly__temp_tile;
    CData/*0:0*/ __Vdly__flip_y;
    CData/*0:0*/ __Vdly__flip_x;
    SData/*8:0*/ __PVT__scanline;
    SData/*12:0*/ __PVT__vram_addr;
    IData/*26:0*/ __PVT__load_in;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_SpriteAddressGen();
    ~Vnes_core_top_SpriteAddressGen();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_SpriteAddressGen);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

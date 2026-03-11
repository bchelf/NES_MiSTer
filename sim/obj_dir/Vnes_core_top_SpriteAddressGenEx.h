// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SPRITEADDRESSGENEX_H_
#define VERILATED_VNES_CORE_TOP_SPRITEADDRESSGENEX_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_SpriteAddressGenEx final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__rendering;
    CData/*0:0*/ __PVT__enabled;
    CData/*0:0*/ __PVT__obj_size;
    CData/*0:0*/ __PVT__obj_patt;
    CData/*7:0*/ __PVT__scanline;
    CData/*7:0*/ __PVT__vram_data;
    CData/*3:0*/ __PVT__load;
    CData/*0:0*/ __PVT__use_ex;
    CData/*0:0*/ __PVT__masked_sprites;
    CData/*2:0*/ __PVT__count;
    CData/*0:0*/ __PVT__load_tile;
    CData/*0:0*/ __PVT__load_attr;
    CData/*0:0*/ __PVT__load_x;
    CData/*0:0*/ __PVT__load_pix1;
    CData/*0:0*/ __PVT__load_pix2;
    CData/*7:0*/ __PVT__pix1_latch;
    CData/*7:0*/ __PVT__pix2_latch;
    CData/*7:0*/ __PVT__temp_y;
    CData/*7:0*/ __PVT__tile;
    CData/*7:0*/ __PVT__attr;
    CData/*7:0*/ __PVT__temp_x;
    CData/*0:0*/ __PVT__flip_x;
    CData/*0:0*/ __PVT__flip_y;
    CData/*0:0*/ __PVT__dummy_sprite;
    CData/*7:0*/ __PVT__vram_f;
    CData/*3:0*/ __PVT__y_f;
    CData/*7:0*/ __PVT__load_temp;
    CData/*2:0*/ __Vdly__count;
    CData/*7:0*/ __Vdly__pix1_latch;
    CData/*7:0*/ __Vdly__pix2_latch;
    SData/*12:0*/ __PVT__vram_addr;
    IData/*31:0*/ __PVT__temp;
    IData/*26:0*/ __PVT__load_in;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_SpriteAddressGenEx();
    ~Vnes_core_top_SpriteAddressGenEx();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_SpriteAddressGenEx);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

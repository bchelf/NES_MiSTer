// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SPRITESET_H_
#define VERILATED_VNES_CORE_TOP_SPRITESET_H_  // guard

#include "verilated.h"
class Vnes_core_top_Sprite;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_SpriteSet final {
  public:
    // CELLS
    Vnes_core_top_Sprite* __PVT__sprite15;
    Vnes_core_top_Sprite* __PVT__sprite14;
    Vnes_core_top_Sprite* __PVT__sprite13;
    Vnes_core_top_Sprite* __PVT__sprite12;
    Vnes_core_top_Sprite* __PVT__sprite11;
    Vnes_core_top_Sprite* __PVT__sprite10;
    Vnes_core_top_Sprite* __PVT__sprite9;
    Vnes_core_top_Sprite* __PVT__sprite8;
    Vnes_core_top_Sprite* __PVT__sprite7;
    Vnes_core_top_Sprite* __PVT__sprite6;
    Vnes_core_top_Sprite* __PVT__sprite5;
    Vnes_core_top_Sprite* __PVT__sprite4;
    Vnes_core_top_Sprite* __PVT__sprite3;
    Vnes_core_top_Sprite* __PVT__sprite2;
    Vnes_core_top_Sprite* __PVT__sprite1;
    Vnes_core_top_Sprite* __PVT__sprite0;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__counting;
    CData/*0:0*/ __PVT__rendering;
    CData/*3:0*/ __PVT__load;
    CData/*3:0*/ __PVT__load_ex;
    CData/*4:0*/ __PVT__bits;
    CData/*0:0*/ __PVT__is_sprite0;
    CData/*0:0*/ __PVT__extra_sprites;
    CData/*4:0*/ __PVT__bits7;
    CData/*4:0*/ __PVT__bits6;
    CData/*4:0*/ __PVT__bits5;
    CData/*4:0*/ __PVT__bits4;
    CData/*4:0*/ __PVT__bits3;
    CData/*4:0*/ __PVT__bits2;
    CData/*4:0*/ __PVT__bits1;
    CData/*4:0*/ __PVT__bits0;
    CData/*4:0*/ __PVT__bits15;
    CData/*4:0*/ __PVT__bits14;
    CData/*4:0*/ __PVT__bits13;
    CData/*4:0*/ __PVT__bits12;
    CData/*4:0*/ __PVT__bits11;
    CData/*4:0*/ __PVT__bits10;
    CData/*4:0*/ __PVT__bits9;
    CData/*4:0*/ __PVT__bits8;
    CData/*4:0*/ __PVT__bits_orig;
    CData/*4:0*/ __PVT__bits_ex;
    IData/*26:0*/ __PVT__load_in;
    IData/*26:0*/ __PVT__load_in_ex;
    IData/*26:0*/ __PVT__load_out7;
    IData/*26:0*/ __PVT__load_out6;
    IData/*26:0*/ __PVT__load_out5;
    IData/*26:0*/ __PVT__load_out4;
    IData/*26:0*/ __PVT__load_out3;
    IData/*26:0*/ __PVT__load_out2;
    IData/*26:0*/ __PVT__load_out1;
    IData/*26:0*/ __PVT__load_out0;
    IData/*26:0*/ __PVT__load_out15;
    IData/*26:0*/ __PVT__load_out14;
    IData/*26:0*/ __PVT__load_out13;
    IData/*26:0*/ __PVT__load_out12;
    IData/*26:0*/ __PVT__load_out11;
    IData/*26:0*/ __PVT__load_out10;
    IData/*26:0*/ __PVT__load_out9;
    IData/*26:0*/ __PVT__load_out8;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_SpriteSet();
    ~Vnes_core_top_SpriteSet();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_SpriteSet);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

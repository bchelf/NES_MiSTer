// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_PPU_H_
#define VERILATED_VNES_CORE_TOP_PPU_H_  // guard

#include "verilated.h"
class Vnes_core_top_BgPainter;
class Vnes_core_top_ClockGen__U1;
class Vnes_core_top_OAMEval;
class Vnes_core_top_PaletteRam;
class Vnes_core_top_PixelMuxer;
class Vnes_core_top_SpriteAddressGen;
class Vnes_core_top_SpriteAddressGenEx;
class Vnes_core_top_SpriteSet;
class Vnes_core_top_VramAddressGen;
class Vnes_core_top_debug_dots;
class Vnes_core_top_eReg_SavestateV__Az6;
class Vnes_core_top_eReg_SavestateV__Az7;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_PPU final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az6* __PVT__iREG_SAVESTATE_PPU;
    Vnes_core_top_eReg_SavestateV__Az7* __PVT__iREG_SAVESTATE_PPU_DECAY;
    Vnes_core_top_ClockGen__U1* __PVT__clock;
    Vnes_core_top_VramAddressGen* __PVT__vram0;
    Vnes_core_top_BgPainter* __PVT__bg_painter;
    Vnes_core_top_OAMEval* __PVT__spriteeval;
    Vnes_core_top_SpriteAddressGen* __PVT__address_gen;
    Vnes_core_top_SpriteAddressGenEx* __PVT__address_gen_ex;
    Vnes_core_top_SpriteSet* __PVT__sprite_gen;
    Vnes_core_top_PixelMuxer* __PVT__pixel_muxer;
    Vnes_core_top_PaletteRam* __PVT__palette_ram;
    Vnes_core_top_debug_dots* __PVT__debug_d;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__cs;
        CData/*0:0*/ __PVT__RWn;
        CData/*0:0*/ __PVT__rst_behavior;
        CData/*0:0*/ __PVT__ce;
        CData/*0:0*/ __PVT__debug_dots;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__cold_reset;
        CData/*1:0*/ __PVT__sys_type;
        CData/*5:0*/ __PVT__color;
        CData/*7:0*/ __PVT__din;
        CData/*7:0*/ __PVT__dout;
        CData/*2:0*/ __PVT__ain;
        CData/*0:0*/ __PVT__read;
        CData/*0:0*/ __PVT__write;
        CData/*0:0*/ __PVT__nmi;
        CData/*0:0*/ __PVT__vram_r;
        CData/*0:0*/ __PVT__vram_r_ex;
        CData/*0:0*/ __PVT__vram_w;
        CData/*7:0*/ __PVT__vram_dbus_in;
        CData/*7:0*/ __PVT__vram_dout;
        CData/*2:0*/ __PVT__emphasis;
        CData/*0:0*/ __PVT__hsync;
        CData/*0:0*/ __PVT__vsync;
        CData/*0:0*/ __PVT__hblank;
        CData/*0:0*/ __PVT__vblank;
        CData/*0:0*/ __PVT__short_frame;
        CData/*0:0*/ __PVT__extra_sprites;
        CData/*1:0*/ __PVT__mask;
        CData/*0:0*/ __PVT__render_ena_out;
        CData/*0:0*/ __PVT__evenframe;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*0:0*/ __PVT__SaveStateBus_load;
        CData/*7:0*/ __PVT__Savestate_OAMAddr;
        CData/*0:0*/ __PVT__Savestate_OAMRdEn;
        CData/*0:0*/ __PVT__Savestate_OAMWrEn;
        CData/*7:0*/ __PVT__Savestate_OAMWriteData;
        CData/*7:0*/ __PVT__Savestate_OAMReadData;
        CData/*0:0*/ __PVT__obj_patt;
        CData/*0:0*/ __PVT__obj_patt1;
        CData/*0:0*/ __PVT__bg_patt;
        CData/*0:0*/ __PVT__bg_patt1;
        CData/*0:0*/ __PVT__obj_size;
        CData/*0:0*/ __PVT__obj_size1;
        CData/*0:0*/ __PVT__vbl_enable;
        CData/*0:0*/ __PVT__clear;
        CData/*0:0*/ __PVT__grayscale;
        CData/*0:0*/ __PVT__playfield_clip;
        CData/*0:0*/ __PVT__object_clip;
        CData/*0:0*/ __PVT__in_range;
        CData/*0:0*/ __PVT__nmi_occured;
        CData/*7:0*/ __PVT__vram_latch;
        CData/*0:0*/ __PVT__is_in_vblank;
        CData/*0:0*/ __PVT__end_of_line;
        CData/*0:0*/ __PVT__at_last_cycle_group;
        CData/*0:0*/ __PVT__exiting_vblank;
        CData/*0:0*/ __PVT__entering_vblank;
        CData/*0:0*/ __PVT__is_pre_render_line;
        CData/*0:0*/ __PVT__enable_playfield;
        CData/*0:0*/ __PVT__enable_objects;
        CData/*2:0*/ __PVT__re_sr;
        CData/*2:0*/ __PVT__eo_sr;
        CData/*2:0*/ __PVT__eb_sr;
    };
    struct {
        CData/*0:0*/ __PVT__rendering_enabled;
        CData/*0:0*/ __PVT__rendering_regs;
        CData/*0:0*/ __PVT__is_rendering;
        CData/*0:0*/ __PVT__is_rendering_d;
        CData/*0:0*/ __PVT__is_vbe_sl;
        CData/*0:0*/ __PVT__clear_signal;
        CData/*7:0*/ __PVT__vram_a_byte;
        CData/*2:0*/ __PVT__fine_x_scroll;
        CData/*0:0*/ __Vcellinp__vram0__trigger_2007;
        CData/*0:0*/ __PVT__is_pal_address;
        CData/*7:0*/ __PVT__bg_name_table;
        CData/*3:0*/ __PVT__bg_pixel_noblank;
        CData/*0:0*/ __PVT__in_visible_frame;
        CData/*0:0*/ __PVT__out_of_clip;
        CData/*0:0*/ __PVT__bgp_en;
        CData/*0:0*/ __Vcellinp__bg_painter__latch_pattern2;
        CData/*0:0*/ __Vcellinp__bg_painter__latch_pattern1;
        CData/*0:0*/ __Vcellinp__bg_painter__latch_attrtable;
        CData/*0:0*/ __Vcellinp__bg_painter__latch_nametable;
        CData/*0:0*/ __PVT__show_bg_on_pixel;
        CData/*3:0*/ __PVT__bg_pixel;
        CData/*0:0*/ __PVT__masked_sprites;
        CData/*0:0*/ __Vcellinp__spriteeval__PAL;
        CData/*0:0*/ __Vcellinp__spriteeval__oam_data_write;
        CData/*0:0*/ __Vcellinp__spriteeval__oam_addr_write;
        CData/*7:0*/ __PVT__oam_bus;
        CData/*0:0*/ __PVT__sprite_overflow;
        CData/*0:0*/ __PVT__obj0_on_line;
        CData/*4:0*/ __PVT__obj_pixel_noblank;
        CData/*0:0*/ __PVT__is_obj0_pixel;
        CData/*3:0*/ __PVT__spriteset_load;
        CData/*2:0*/ __PVT__emph_reg;
        CData/*0:0*/ __PVT__sprite_load_en;
        CData/*7:0*/ __Vcellinp__address_gen__temp;
        CData/*0:0*/ __Vcellinp__address_gen__in_range;
        CData/*3:0*/ __PVT__spriteset_load_ex;
        CData/*0:0*/ __PVT__use_ex;
        CData/*7:0*/ __Vcellinp__address_gen_ex__scanline;
        CData/*3:0*/ __PVT__sprite_sr;
        CData/*0:0*/ __Vcellinp__sprite_gen__counting;
        CData/*0:0*/ __PVT__show_obj_on_pixel;
        CData/*4:0*/ __PVT__obj_pixel;
        CData/*0:0*/ __PVT__sprite0_hit_bg;
        CData/*0:0*/ __PVT__spr0_hit;
        CData/*4:0*/ __PVT__pixel;
        CData/*0:0*/ __PVT__pixel_is_obj;
        CData/*0:0*/ __Vcellinp__pixel_muxer__obj_prio;
        CData/*3:0*/ __Vcellinp__pixel_muxer__obj;
        CData/*0:0*/ __PVT__special_dot;
        CData/*0:0*/ __PVT__nametable_read;
        CData/*0:0*/ __PVT__attribute_read;
        CData/*0:0*/ __PVT__pattern_table_upper;
        CData/*0:0*/ __PVT__read_cycle;
        CData/*0:0*/ __PVT__vram_r_ppudata;
        CData/*0:0*/ __PVT__vram_r_ppudata_d;
        CData/*0:0*/ __PVT__vram_w_ppudata;
        CData/*0:0*/ __PVT__vram_w_ppudata_d;
        CData/*0:0*/ __PVT__ALE;
        CData/*7:0*/ __PVT__vram_din;
        CData/*0:0*/ __PVT__vram_read_delayed;
        CData/*7:0*/ __PVT__vram_latch_value;
        CData/*5:0*/ __PVT__color2;
        CData/*0:0*/ __PVT__pal_writes_valid;
        CData/*4:0*/ __PVT__pram_addr;
    };
    struct {
        CData/*0:0*/ __PVT__in_rendering_frame;
        CData/*4:0*/ __Vcellinp__palette_ram__raw_addr;
        CData/*0:0*/ __Vcellinp__palette_ram__c_corrupt;
        CData/*0:0*/ __Vcellinp__palette_ram__write;
        CData/*5:0*/ __Vcellinp__palette_ram__din;
        CData/*4:0*/ __PVT__write_2007_delayed;
        CData/*4:0*/ __PVT__read_2007_delayed;
        CData/*0:0*/ __PVT__write_2001;
        CData/*0:0*/ __PVT__pal_mask;
        CData/*0:0*/ __PVT__auto_mask;
        CData/*0:0*/ __PVT__mask_left;
        CData/*0:0*/ __PVT__mask_right;
        CData/*0:0*/ __PVT__mask_pal;
        CData/*0:0*/ __PVT__in_draw_range;
        CData/*0:0*/ __PVT__grayscale_bit;
        CData/*0:0*/ __PVT__not_grayscale;
        CData/*0:0*/ __Vcellinp__debug_d__w2007;
        CData/*0:0*/ __Vcellinp__debug_d__r2007;
        CData/*0:0*/ __Vcellinp__debug_d__w2006;
        CData/*0:0*/ __Vcellinp__debug_d__w2005;
        CData/*0:0*/ __Vcellinp__debug_d__w2004;
        CData/*0:0*/ __Vcellinp__debug_d__r2004;
        CData/*0:0*/ __Vcellinp__debug_d__w2003;
        CData/*0:0*/ __Vcellinp__debug_d__r2002;
        CData/*0:0*/ __Vcellinp__debug_d__w2001;
        CData/*0:0*/ __Vcellinp__debug_d__w2000;
        CData/*5:0*/ __PVT__color0;
        CData/*5:0*/ __PVT__color1;
        CData/*0:0*/ __PVT__clear_nmi;
        CData/*0:0*/ __PVT__set_nmi;
        CData/*7:0*/ __PVT__ppu_dbus;
        CData/*7:0*/ __PVT__latched_dout;
        CData/*0:0*/ __PVT__refresh_high;
        CData/*0:0*/ __PVT__refresh_low;
        CData/*1:0*/ sys_type__out;
        CData/*1:0*/ sys_type__en;
        CData/*1:0*/ sys_type__out__strong;
        CData/*1:0*/ sys_type__out__strong__en;
        CData/*1:0*/ sys_type__out__strong__out0;
        CData/*1:0*/ sys_type__out__strong__en0;
        CData/*0:0*/ __Vdly__sprite0_hit_bg;
        CData/*3:0*/ __Vdly__sprite_sr;
        CData/*7:0*/ __Vdly__vram_latch;
        CData/*0:0*/ __Vdly__vram_read_delayed;
        CData/*7:0*/ __Vdly__vram_a_byte;
        CData/*0:0*/ __Vdly__obj_patt;
        CData/*0:0*/ __Vdly__bg_patt;
        CData/*0:0*/ __Vdly__obj_size;
        CData/*0:0*/ __Vdly__vbl_enable;
        CData/*0:0*/ __Vdly__grayscale;
        CData/*0:0*/ __Vdly__playfield_clip;
        CData/*0:0*/ __Vdly__object_clip;
        CData/*0:0*/ __Vdly__enable_playfield;
        CData/*0:0*/ __Vdly__enable_objects;
        CData/*2:0*/ __Vdly__emph_reg;
        CData/*0:0*/ __Vdly__nmi_occured;
        CData/*2:0*/ __Vdly__re_sr;
        CData/*0:0*/ __Vdly__obj_patt1;
        CData/*0:0*/ __Vdly__bg_patt1;
        CData/*0:0*/ __Vdly__obj_size1;
        CData/*2:0*/ __Vdly__eo_sr;
        CData/*2:0*/ __Vdly__eb_sr;
        CData/*0:0*/ __Vdly__clear;
        CData/*0:0*/ __Vdly__refresh_high;
    };
    struct {
        CData/*0:0*/ __Vdly__refresh_low;
        CData/*4:0*/ __Vdly__read_2007_delayed;
        CData/*4:0*/ __Vdly__write_2007_delayed;
        CData/*7:0*/ __Vdly__latched_dout;
        CData/*5:0*/ __VdlyVal__color_pipe__v0;
        CData/*0:0*/ __VdlySet__color_pipe__v0;
        CData/*5:0*/ __VdlyVal__color_pipe__v1;
        CData/*5:0*/ __VdlyVal__color_pipe__v2;
        CData/*5:0*/ __VdlyVal__color_pipe__v3;
        SData/*13:0*/ __PVT__vram_addr;
        SData/*13:0*/ __PVT__vram_a_ex;
        SData/*8:0*/ __PVT__scanline;
        SData/*8:0*/ __PVT__cycle;
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        SData/*13:0*/ __PVT__vram_a;
        SData/*14:0*/ __PVT__vram;
        SData/*8:0*/ __PVT__scanline_nopr;
        SData/*12:0*/ __PVT__sprite_vram_addr;
        SData/*12:0*/ __PVT__sprite_vram_addr_ex;
        IData/*31:0*/ __PVT__oam_bus_ex;
        IData/*26:0*/ __PVT__spriteset_load_in;
        IData/*26:0*/ __PVT__spriteset_load_in_ex;
        IData/*31:0*/ __Vcellinp__address_gen_ex__temp;
        IData/*23:0*/ __PVT__decay_high;
        IData/*23:0*/ __PVT__decay_low;
        IData/*23:0*/ __Vdly__decay_high;
        IData/*23:0*/ __Vdly__decay_low;
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        QData/*63:0*/ __PVT__SS_PPU;
        QData/*63:0*/ __PVT__SS_PPU_BACK;
        QData/*63:0*/ __PVT__SS_PPU_DECAY;
        QData/*63:0*/ __PVT__SS_PPU_DECAY_BACK;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PPU____pinNumber6;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6;
        QData/*63:0*/ __Vcellout__clock__SaveStateBus_Dout;
        QData/*63:0*/ __Vcellout__vram0__SaveStateBus_Dout;
        QData/*63:0*/ __Vcellout__spriteeval__SaveStateBus_Dout;
        QData/*63:0*/ __Vcellout__palette_ram__SaveStateBus_Dout;
        VlUnpacked<QData/*63:0*/, 6> __PVT__SaveStateBus_wired_or;
        VlUnpacked<CData/*5:0*/, 4> __PVT__color_pipe;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_PPU();
    ~Vnes_core_top_PPU();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_PPU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

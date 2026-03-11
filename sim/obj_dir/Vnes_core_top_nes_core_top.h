// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_NES_CORE_TOP_H_
#define VERILATED_VNES_CORE_TOP_NES_CORE_TOP_H_  // guard

#include "verilated.h"
class Vnes_core_top_NES;
class Vnes_core_top_hud_controller;
class Vnes_core_top_input_normalize;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_nes_core_top final {
  public:
    // CELLS
    Vnes_core_top_input_normalize* __PVT__input_normalize_inst;
    Vnes_core_top_NES* __PVT__nes_inst;
    Vnes_core_top_hud_controller* __PVT__hud_controller_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clk;
        CData/*0:0*/ reset;
        CData/*7:0*/ joy1_buttons;
        CData/*7:0*/ joy2_buttons;
        CData/*1:0*/ hud_mode;
        CData/*1:0*/ hud_position;
        CData/*0:0*/ hud_scale;
        CData/*5:0*/ color;
        CData/*0:0*/ hblank;
        CData/*0:0*/ vblank;
        CData/*0:0*/ hsync;
        CData/*0:0*/ vsync;
        CData/*0:0*/ hud_active;
        CData/*0:0*/ dbg_mr_int;
        CData/*0:0*/ dbg_mw_int;
        CData/*7:0*/ dbg_cpu_din;
        CData/*7:0*/ dbg_cpu_dout;
        CData/*0:0*/ dbg_nmi;
        CData/*0:0*/ dbg_pause_cpu;
        CData/*0:0*/ dbg_dma_active;
        CData/*0:0*/ dbg_dma_sprite_trigger;
        CData/*0:0*/ dbg_cpu_ce;
        CData/*0:0*/ dbg_reset_noSS;
        CData/*0:0*/ dbg_cpu_rnw;
        CData/*1:0*/ dbg_dma_spr_state;
        CData/*0:0*/ dbg_dma_get_ce;
        CData/*0:0*/ dbg_dma_put_ce;
        CData/*0:0*/ dbg_odd_or_even;
        CData/*0:0*/ dbg_en_bg;
        CData/*0:0*/ dbg_en_obj;
        CData/*0:0*/ dbg_vbl_en;
        CData/*0:0*/ dbg_nmi_occ;
        CData/*0:0*/ dbg_render_d;
        CData/*0:0*/ dbg_cpumem_read;
        CData/*0:0*/ dbg_cpumem_write;
        CData/*0:0*/ dbg_ppumem_read;
        CData/*0:0*/ dbg_ppumem_write;
        CData/*7:0*/ dbg_chr_to_ppu;
        CData/*7:0*/ dbg_ppumem_din;
        CData/*7:0*/ __PVT__joy1_shift;
        CData/*7:0*/ __PVT__joy2_shift;
        CData/*0:0*/ __PVT__last_joyclk0;
        CData/*0:0*/ __PVT__last_joyclk1;
        CData/*1:0*/ __PVT__joypad_clock;
        CData/*2:0*/ __PVT__joypad_out;
        CData/*4:0*/ __PVT__joypad1_data;
        CData/*4:0*/ __PVT__joypad2_data;
        CData/*7:0*/ __PVT__p1_norm;
        CData/*7:0*/ __PVT__p2_norm;
        CData/*7:0*/ __PVT__p1_frame;
        CData/*7:0*/ __PVT__p2_frame;
        CData/*0:0*/ __PVT__vblank_prev;
        CData/*0:0*/ __PVT__frame_tick;
        CData/*0:0*/ __PVT__cpumem_read;
        CData/*0:0*/ __PVT__cpumem_write;
        CData/*7:0*/ __PVT__cpumem_dout;
        CData/*7:0*/ __PVT__cpumem_din;
        CData/*0:0*/ __PVT__ppumem_read;
        CData/*0:0*/ __PVT__ppumem_write;
        CData/*7:0*/ __PVT__ppumem_dout;
        CData/*7:0*/ __PVT__ppumem_din;
        CData/*7:0*/ __PVT__bram_din;
        CData/*7:0*/ __PVT__bram_dout;
        CData/*0:0*/ __PVT__bram_write;
    };
    struct {
        CData/*0:0*/ __PVT__bram_override;
        CData/*1:0*/ __PVT__nes_div;
        CData/*1:0*/ __PVT__diskside;
        CData/*0:0*/ __PVT__refresh;
        CData/*0:0*/ __PVT__apu_ce;
        CData/*0:0*/ __PVT__gg_avail;
        CData/*2:0*/ __PVT__emphasis;
        CData/*0:0*/ __PVT__save_written;
        CData/*0:0*/ __PVT__mapper_has_flashsaves;
        CData/*0:0*/ __PVT__mapper_has_savestate;
        CData/*0:0*/ __PVT__sleep_savestate;
        CData/*0:0*/ __PVT__state_loaded;
        CData/*0:0*/ __PVT__corepaused;
        CData/*0:0*/ __PVT__savestate_sdram_rden;
        CData/*0:0*/ __PVT__savestate_sdram_wren;
        CData/*7:0*/ __PVT__savestate_sdram_wdata;
        CData/*7:0*/ __PVT__savestate_sdram_rdata;
        CData/*0:0*/ __PVT__savestateext_wren;
        CData/*0:0*/ __PVT__savestateext_rst;
        CData/*0:0*/ __PVT__savestateext_load;
        CData/*0:0*/ __PVT__save_out_rnw;
        CData/*0:0*/ __PVT__save_out_ena;
        CData/*7:0*/ __PVT__save_out_be;
        CData/*0:0*/ __PVT__save_out_done;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type;
        CData/*1:0*/ sys_type__en0;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong__en;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong__out1;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong__en1;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong__out2;
        CData/*1:0*/ __Vcellinpt__nes_inst__sys_type__strong__en2;
        CData/*7:0*/ __Vdly__joy1_shift;
        CData/*7:0*/ __Vdly__joy2_shift;
        CData/*0:0*/ __Vdly__last_joyclk0;
        CData/*0:0*/ __Vdly__last_joyclk1;
        CData/*0:0*/ __Vdly__vblank_prev;
        CData/*7:0*/ __Vdly__p1_frame;
        CData/*7:0*/ __Vdly__p2_frame;
        CData/*7:0*/ __VdlyVal__cpu_ram__v0;
        CData/*0:0*/ __VdlySet__cpu_ram__v0;
        CData/*7:0*/ __VdlyVal__cart_ram__v0;
        CData/*0:0*/ __VdlySet__cart_ram__v0;
        CData/*7:0*/ __VdlyVal__ciram__v0;
        CData/*0:0*/ __VdlySet__ciram__v0;
        CData/*7:0*/ __VdlyVal__chr_rom__v0;
        CData/*0:0*/ __VdlySet__chr_rom__v0;
        SData/*8:0*/ cycle;
        SData/*8:0*/ scanline;
        SData/*15:0*/ sample;
        SData/*15:0*/ dbg_cpu_addr;
        SData/*15:0*/ dbg_cpu_pc;
        SData/*9:0*/ __PVT__savestateext_adr;
        SData/*10:0*/ __VdlyDim0__cpu_ram__v0;
        SData/*10:0*/ __VdlyDim0__cart_ram__v0;
        SData/*10:0*/ __VdlyDim0__ciram__v0;
        SData/*12:0*/ __VdlyDim0__chr_rom__v0;
        IData/*20:0*/ prg_mask_in;
        IData/*19:0*/ chr_mask_in;
        IData/*23:0*/ hud_pixel;
        IData/*24:0*/ dbg_cpumem_addr;
        IData/*21:0*/ dbg_ppumem_addr;
        IData/*24:0*/ __PVT__cpumem_addr;
        IData/*21:0*/ __PVT__ppumem_addr;
    };
    struct {
        IData/*17:0*/ __PVT__bram_addr;
        IData/*24:0*/ __PVT__savestate_sdram_addr;
        IData/*25:0*/ __PVT__save_out_adr;
        QData/*63:0*/ mapper_flags_in;
        QData/*63:0*/ dbg_cpu_regs;
        QData/*63:0*/ __PVT__savestateext_din;
        QData/*63:0*/ __PVT__savestateext_dout;
        QData/*63:0*/ __PVT__save_out_din;
        QData/*63:0*/ __PVT__save_out_dout;
        VlUnpacked<CData/*7:0*/, 32768> __PVT__prg_rom;
        VlUnpacked<CData/*7:0*/, 8192> __PVT__chr_rom;
        VlUnpacked<CData/*7:0*/, 2048> __PVT__cpu_ram;
        VlUnpacked<CData/*7:0*/, 2048> __PVT__ciram;
        VlUnpacked<CData/*7:0*/, 2048> __PVT__cart_ram;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_nes_core_top();
    ~Vnes_core_top_nes_core_top();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_nes_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

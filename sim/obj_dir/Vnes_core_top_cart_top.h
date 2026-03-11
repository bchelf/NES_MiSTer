// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_CART_TOP_H_
#define VERILATED_VNES_CORE_TOP_CART_TOP_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_cart_top final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__ce;
        CData/*0:0*/ __PVT__cpu_ce;
        CData/*0:0*/ __PVT__paused;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__prg_read;
        CData/*0:0*/ __PVT__prg_write;
        CData/*7:0*/ __PVT__prg_din;
        CData/*7:0*/ __PVT__prg_dout;
        CData/*7:0*/ __PVT__prg_from_ram;
        CData/*0:0*/ __PVT__prg_allow;
        CData/*0:0*/ __PVT__prg_bus_write;
        CData/*0:0*/ __PVT__prg_conflict;
        CData/*0:0*/ __PVT__has_savestate;
        CData/*0:0*/ __PVT__prg_conflict_d0;
        CData/*0:0*/ __PVT__has_flashsaves;
        CData/*0:0*/ __PVT__chr_ex;
        CData/*0:0*/ __PVT__chr_read;
        CData/*0:0*/ __PVT__chr_write;
        CData/*7:0*/ __PVT__chr_din;
        CData/*7:0*/ __PVT__chr_dout;
        CData/*0:0*/ __PVT__has_chr_dout;
        CData/*0:0*/ __PVT__chr_allow;
        CData/*0:0*/ __PVT__vram_a10;
        CData/*0:0*/ __PVT__vram_ce;
        CData/*7:0*/ __PVT__mapper_data_in;
        CData/*7:0*/ __PVT__mapper_data_out;
        CData/*0:0*/ __PVT__mapper_prg_write;
        CData/*0:0*/ __PVT__mapper_ovr;
        CData/*0:0*/ __PVT__irq;
        CData/*1:0*/ __PVT__diskside;
        CData/*0:0*/ __PVT__fds_busy;
        CData/*0:0*/ __PVT__fds_eject;
        CData/*0:0*/ __PVT__fds_auto_eject;
        CData/*1:0*/ __PVT__max_diskside;
        CData/*0:0*/ __PVT__fds_fast;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*0:0*/ __PVT__SaveStateBus_load;
        CData/*0:0*/ __PVT__Savestate_MAPRAMactive;
        CData/*0:0*/ __PVT__Savestate_MAPRAMRdEn;
        CData/*0:0*/ __PVT__Savestate_MAPRAMWrEn;
        CData/*7:0*/ __PVT__Savestate_MAPRAMWriteData;
        CData/*7:0*/ __PVT__Savestate_MAPRAMReadData;
        CData/*0:0*/ __PVT__mirroring_vertical;
        CData/*0:0*/ __PVT__chr_is_ram;
        CData/*7:0*/ __PVT__mapper_num;
        CData/*0:0*/ __PVT__prg_16k;
        CData/*0:0*/ __PVT__mapper0;
        CData/*7:0*/ __PVT__prg_rom_byte;
        CData/*7:0*/ __PVT__chr_rom_byte;
        CData/*7:0*/ __PVT__dbg_prg_rom_byte;
        CData/*7:0*/ __PVT__dbg_chr_rom_byte;
        CData/*0:0*/ __PVT__dbg_mapper0_prg_hit;
        CData/*0:0*/ __PVT__dbg_mapper0_chr_hit;
        CData/*0:0*/ __PVT__dbg_chr_is_ram;
        CData/*0:0*/ __PVT___unused_ok;
        SData/*15:0*/ __PVT__prg_ain;
        SData/*9:0*/ __PVT__prg_mask;
        SData/*9:0*/ __PVT__chr_mask;
        SData/*13:0*/ __PVT__chr_ain_orig;
        SData/*13:0*/ __PVT__chr_ain_ex;
        SData/*15:0*/ __PVT__audio_in;
        SData/*15:0*/ __PVT__audio;
    };
    struct {
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        SData/*12:0*/ __PVT__Savestate_MAPRAMAddr;
        SData/*13:0*/ __PVT__chr_ain;
        SData/*14:0*/ __PVT__prg_offs;
        SData/*13:0*/ __PVT__prg_idx;
        IData/*24:0*/ __PVT__prg_aout;
        IData/*21:0*/ __PVT__chr_aout;
        IData/*17:0*/ __PVT__mapper_addr;
        QData/*63:0*/ __PVT__flags;
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        VlUnpacked<CData/*7:0*/, 32768> __PVT__prg_rom;
        VlUnpacked<CData/*7:0*/, 8192> __PVT__chr_rom;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_cart_top();
    ~Vnes_core_top_cart_top();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_cart_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

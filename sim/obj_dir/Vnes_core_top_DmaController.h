// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_DMACONTROLLER_H_
#define VERILATED_VNES_CORE_TOP_DMACONTROLLER_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_DmaController final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__put_cycle;
    CData/*0:0*/ __PVT__put_ce;
    CData/*0:0*/ __PVT__get_ce;
    CData/*0:0*/ __PVT__sprite_trigger;
    CData/*0:0*/ __PVT__dmc_trigger;
    CData/*0:0*/ __PVT__cpu_read;
    CData/*7:0*/ __PVT__data_from_cpu;
    CData/*7:0*/ __PVT__dma_data_to_ram;
    CData/*0:0*/ __PVT__aout_enable;
    CData/*0:0*/ __PVT__read;
    CData/*7:0*/ __PVT__data_to_ram;
    CData/*0:0*/ __PVT__dmc_ack;
    CData/*0:0*/ __PVT__pause_cpu;
    CData/*0:0*/ __PVT__dmc_state;
    CData/*1:0*/ __PVT__spr_state;
    CData/*7:0*/ __PVT__sprite_dma_lastval;
    CData/*0:0*/ __Vdly__dmc_state;
    CData/*1:0*/ __Vdly__spr_state;
    CData/*7:0*/ __Vdly__sprite_dma_lastval;
    SData/*15:0*/ __PVT__dmc_dma_addr;
    SData/*15:0*/ __PVT__aout;
    SData/*15:0*/ __PVT__sprite_dma_addr;
    SData/*8:0*/ __PVT__new_sprite_dma_addr;
    SData/*15:0*/ __Vdly__sprite_dma_addr;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_DmaController();
    ~Vnes_core_top_DmaController();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_DmaController);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

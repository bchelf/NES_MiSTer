// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_PixelMuxer___ctor_var_reset(Vnes_core_top_PixelMuxer* vlSelf);

Vnes_core_top_PixelMuxer::Vnes_core_top_PixelMuxer() = default;
Vnes_core_top_PixelMuxer::~Vnes_core_top_PixelMuxer() = default;

void Vnes_core_top_PixelMuxer::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_PixelMuxer___ctor_var_reset(this);
}

void Vnes_core_top_PixelMuxer::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_PixelMuxer::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_BgPainter___ctor_var_reset(Vnes_core_top_BgPainter* vlSelf);

Vnes_core_top_BgPainter::Vnes_core_top_BgPainter() = default;
Vnes_core_top_BgPainter::~Vnes_core_top_BgPainter() = default;

void Vnes_core_top_BgPainter::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_BgPainter___ctor_var_reset(this);
}

void Vnes_core_top_BgPainter::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_BgPainter::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

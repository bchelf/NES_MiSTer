// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_APUMixer___ctor_var_reset(Vnes_core_top_APUMixer* vlSelf);

Vnes_core_top_APUMixer::Vnes_core_top_APUMixer() = default;
Vnes_core_top_APUMixer::~Vnes_core_top_APUMixer() = default;

void Vnes_core_top_APUMixer::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_APUMixer___ctor_var_reset(this);
}

void Vnes_core_top_APUMixer::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_APUMixer::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

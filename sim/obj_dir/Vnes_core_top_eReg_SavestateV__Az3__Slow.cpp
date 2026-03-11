// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_eReg_SavestateV__Az3___ctor_var_reset(Vnes_core_top_eReg_SavestateV__Az3* vlSelf);

Vnes_core_top_eReg_SavestateV__Az3::Vnes_core_top_eReg_SavestateV__Az3() = default;
Vnes_core_top_eReg_SavestateV__Az3::~Vnes_core_top_eReg_SavestateV__Az3() = default;

void Vnes_core_top_eReg_SavestateV__Az3::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_eReg_SavestateV__Az3___ctor_var_reset(this);
}

void Vnes_core_top_eReg_SavestateV__Az3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_eReg_SavestateV__Az3::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

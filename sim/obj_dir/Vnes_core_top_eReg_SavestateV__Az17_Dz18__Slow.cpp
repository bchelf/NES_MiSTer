// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_eReg_SavestateV__Az17_Dz18___ctor_var_reset(Vnes_core_top_eReg_SavestateV__Az17_Dz18* vlSelf);

Vnes_core_top_eReg_SavestateV__Az17_Dz18::Vnes_core_top_eReg_SavestateV__Az17_Dz18() = default;
Vnes_core_top_eReg_SavestateV__Az17_Dz18::~Vnes_core_top_eReg_SavestateV__Az17_Dz18() = default;

void Vnes_core_top_eReg_SavestateV__Az17_Dz18::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_eReg_SavestateV__Az17_Dz18___ctor_var_reset(this);
}

void Vnes_core_top_eReg_SavestateV__Az17_Dz18::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_eReg_SavestateV__Az17_Dz18::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

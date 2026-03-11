// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top___024root___ctor_var_reset(Vnes_core_top___024root* vlSelf);

Vnes_core_top___024root::Vnes_core_top___024root(Vnes_core_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vnes_core_top___024root___ctor_var_reset(this);
}

void Vnes_core_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnes_core_top___024root::~Vnes_core_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

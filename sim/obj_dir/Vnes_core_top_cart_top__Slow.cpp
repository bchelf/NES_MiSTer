// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_cart_top___ctor_var_reset(Vnes_core_top_cart_top* vlSelf);

Vnes_core_top_cart_top::Vnes_core_top_cart_top() = default;
Vnes_core_top_cart_top::~Vnes_core_top_cart_top() = default;

void Vnes_core_top_cart_top::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_cart_top___ctor_var_reset(this);
}

void Vnes_core_top_cart_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_cart_top::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

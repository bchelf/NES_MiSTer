// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_wrapper_tb.h for the primary calling header

#include "Vcpu_wrapper_tb__pch.h"

void Vcpu_wrapper_tb___024root___ctor_var_reset(Vcpu_wrapper_tb___024root* vlSelf);

Vcpu_wrapper_tb___024root::Vcpu_wrapper_tb___024root(Vcpu_wrapper_tb__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcpu_wrapper_tb___024root___ctor_var_reset(this);
}

void Vcpu_wrapper_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_wrapper_tb___024root::~Vcpu_wrapper_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

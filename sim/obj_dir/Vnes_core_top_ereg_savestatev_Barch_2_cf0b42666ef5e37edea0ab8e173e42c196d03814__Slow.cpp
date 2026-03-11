// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814___ctor_var_reset(Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814* vlSelf);

Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814::Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814() = default;
Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814::~Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814() = default;

void Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814___ctor_var_reset(this);
}

void Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

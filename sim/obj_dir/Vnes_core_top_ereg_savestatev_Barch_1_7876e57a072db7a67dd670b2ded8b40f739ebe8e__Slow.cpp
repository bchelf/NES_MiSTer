// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e___ctor_var_reset(Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e* vlSelf);

Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e::Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e() = default;
Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e::~Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e() = default;

void Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e___ctor_var_reset(this);
}

void Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

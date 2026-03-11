// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___ctor_var_reset(Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6* vlSelf);

Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6::Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6() = default;
Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6::~Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6() = default;

void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6::ctor(Vnes_core_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___ctor_var_reset(this);
}

void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

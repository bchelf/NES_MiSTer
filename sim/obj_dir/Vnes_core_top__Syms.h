// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNES_CORE_TOP__SYMS_H_
#define VERILATED_VNES_CORE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnes_core_top.h"

// INCLUDE MODULE CLASSES
#include "Vnes_core_top___024root.h"
#include "Vnes_core_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnes_core_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnes_core_top___024root        TOP;

    // CONSTRUCTORS
    Vnes_core_top__Syms(VerilatedContext* contextp, const char* namep, Vnes_core_top* modelp);
    ~Vnes_core_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

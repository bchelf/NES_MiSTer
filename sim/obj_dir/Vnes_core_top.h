// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VNES_CORE_TOP_H_
#define VERILATED_VNES_CORE_TOP_H_  // guard

#include "verilated.h"

class Vnes_core_top__Syms;
class Vnes_core_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vnes_core_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&joy1_buttons,7,0);
    VL_IN8(&joy2_buttons,7,0);
    VL_IN8(&hud_mode,1,0);
    VL_IN8(&hud_position,1,0);
    VL_IN8(&hud_scale,0,0);
    VL_OUT8(&color,5,0);
    VL_OUT8(&hblank,0,0);
    VL_OUT8(&vblank,0,0);
    VL_OUT8(&hsync,0,0);
    VL_OUT8(&vsync,0,0);
    VL_OUT8(&hud_active,0,0);
    VL_OUT8(&dbg_mr_int,0,0);
    VL_OUT8(&dbg_mw_int,0,0);
    VL_OUT8(&dbg_cpu_din,7,0);
    VL_OUT8(&dbg_cpu_dout,7,0);
    VL_OUT8(&dbg_nmi,0,0);
    VL_OUT8(&dbg_pause_cpu,0,0);
    VL_OUT8(&dbg_dma_active,0,0);
    VL_OUT8(&dbg_dma_sprite_trigger,0,0);
    VL_OUT8(&dbg_cpu_ce,0,0);
    VL_OUT8(&dbg_reset_noSS,0,0);
    VL_OUT8(&dbg_cpu_rnw,0,0);
    VL_OUT8(&dbg_dma_spr_state,1,0);
    VL_OUT8(&dbg_dma_get_ce,0,0);
    VL_OUT8(&dbg_dma_put_ce,0,0);
    VL_OUT8(&dbg_odd_or_even,0,0);
    VL_OUT8(&dbg_en_bg,0,0);
    VL_OUT8(&dbg_en_obj,0,0);
    VL_OUT8(&dbg_vbl_en,0,0);
    VL_OUT8(&dbg_nmi_occ,0,0);
    VL_OUT8(&dbg_render_d,0,0);
    VL_OUT8(&dbg_cpumem_read,0,0);
    VL_OUT8(&dbg_cpumem_write,0,0);
    VL_OUT8(&dbg_ppumem_read,0,0);
    VL_OUT8(&dbg_ppumem_write,0,0);
    VL_OUT8(&dbg_chr_to_ppu,7,0);
    VL_OUT8(&dbg_ppumem_din,7,0);
    VL_OUT16(&cycle,8,0);
    VL_OUT16(&scanline,8,0);
    VL_OUT16(&sample,15,0);
    VL_OUT16(&dbg_cpu_addr,15,0);
    VL_OUT16(&dbg_cpu_pc,15,0);
    VL_IN(&prg_mask_in,20,0);
    VL_IN(&chr_mask_in,19,0);
    VL_OUT(&hud_pixel,23,0);
    VL_OUT(&dbg_cpumem_addr,24,0);
    VL_OUT(&dbg_ppumem_addr,21,0);
    VL_IN64(&mapper_flags_in,63,0);
    VL_OUT64(&dbg_cpu_regs,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vnes_core_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vnes_core_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vnes_core_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vnes_core_top();
  private:
    VL_UNCOPYABLE(Vnes_core_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard

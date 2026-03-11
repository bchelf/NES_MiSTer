// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnes_core_top__pch.h"

//============================================================
// Constructors

Vnes_core_top::Vnes_core_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnes_core_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , joy1_buttons{vlSymsp->TOP.joy1_buttons}
    , joy2_buttons{vlSymsp->TOP.joy2_buttons}
    , hud_mode{vlSymsp->TOP.hud_mode}
    , hud_position{vlSymsp->TOP.hud_position}
    , hud_scale{vlSymsp->TOP.hud_scale}
    , color{vlSymsp->TOP.color}
    , hblank{vlSymsp->TOP.hblank}
    , vblank{vlSymsp->TOP.vblank}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , hud_active{vlSymsp->TOP.hud_active}
    , dbg_mr_int{vlSymsp->TOP.dbg_mr_int}
    , dbg_mw_int{vlSymsp->TOP.dbg_mw_int}
    , dbg_cpu_din{vlSymsp->TOP.dbg_cpu_din}
    , dbg_cpu_dout{vlSymsp->TOP.dbg_cpu_dout}
    , dbg_nmi{vlSymsp->TOP.dbg_nmi}
    , dbg_pause_cpu{vlSymsp->TOP.dbg_pause_cpu}
    , dbg_dma_active{vlSymsp->TOP.dbg_dma_active}
    , dbg_dma_sprite_trigger{vlSymsp->TOP.dbg_dma_sprite_trigger}
    , dbg_cpu_ce{vlSymsp->TOP.dbg_cpu_ce}
    , dbg_reset_noSS{vlSymsp->TOP.dbg_reset_noSS}
    , dbg_cpu_rnw{vlSymsp->TOP.dbg_cpu_rnw}
    , dbg_dma_spr_state{vlSymsp->TOP.dbg_dma_spr_state}
    , dbg_dma_get_ce{vlSymsp->TOP.dbg_dma_get_ce}
    , dbg_dma_put_ce{vlSymsp->TOP.dbg_dma_put_ce}
    , dbg_odd_or_even{vlSymsp->TOP.dbg_odd_or_even}
    , dbg_en_bg{vlSymsp->TOP.dbg_en_bg}
    , dbg_en_obj{vlSymsp->TOP.dbg_en_obj}
    , dbg_vbl_en{vlSymsp->TOP.dbg_vbl_en}
    , dbg_nmi_occ{vlSymsp->TOP.dbg_nmi_occ}
    , dbg_render_d{vlSymsp->TOP.dbg_render_d}
    , dbg_cpumem_read{vlSymsp->TOP.dbg_cpumem_read}
    , dbg_cpumem_write{vlSymsp->TOP.dbg_cpumem_write}
    , dbg_ppumem_read{vlSymsp->TOP.dbg_ppumem_read}
    , dbg_ppumem_write{vlSymsp->TOP.dbg_ppumem_write}
    , dbg_chr_to_ppu{vlSymsp->TOP.dbg_chr_to_ppu}
    , dbg_ppumem_din{vlSymsp->TOP.dbg_ppumem_din}
    , cycle{vlSymsp->TOP.cycle}
    , scanline{vlSymsp->TOP.scanline}
    , sample{vlSymsp->TOP.sample}
    , dbg_cpu_addr{vlSymsp->TOP.dbg_cpu_addr}
    , dbg_cpu_pc{vlSymsp->TOP.dbg_cpu_pc}
    , prg_mask_in{vlSymsp->TOP.prg_mask_in}
    , chr_mask_in{vlSymsp->TOP.chr_mask_in}
    , hud_pixel{vlSymsp->TOP.hud_pixel}
    , dbg_cpumem_addr{vlSymsp->TOP.dbg_cpumem_addr}
    , dbg_ppumem_addr{vlSymsp->TOP.dbg_ppumem_addr}
    , mapper_flags_in{vlSymsp->TOP.mapper_flags_in}
    , dbg_cpu_regs{vlSymsp->TOP.dbg_cpu_regs}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnes_core_top::Vnes_core_top(const char* _vcname__)
    : Vnes_core_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnes_core_top::~Vnes_core_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnes_core_top___024root___eval_debug_assertions(Vnes_core_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vnes_core_top___024root___eval_static(Vnes_core_top___024root* vlSelf);
void Vnes_core_top___024root___eval_initial(Vnes_core_top___024root* vlSelf);
void Vnes_core_top___024root___eval_settle(Vnes_core_top___024root* vlSelf);
void Vnes_core_top___024root___eval(Vnes_core_top___024root* vlSelf);

void Vnes_core_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnes_core_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnes_core_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnes_core_top___024root___eval_static(&(vlSymsp->TOP));
        Vnes_core_top___024root___eval_initial(&(vlSymsp->TOP));
        Vnes_core_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnes_core_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnes_core_top::eventsPending() { return false; }

uint64_t Vnes_core_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnes_core_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnes_core_top___024root___eval_final(Vnes_core_top___024root* vlSelf);

VL_ATTR_COLD void Vnes_core_top::final() {
    Vnes_core_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnes_core_top::hierName() const { return vlSymsp->name(); }
const char* Vnes_core_top::modelName() const { return "Vnes_core_top"; }
unsigned Vnes_core_top::threads() const { return 1; }
void Vnes_core_top::prepareClone() const { contextp()->prepareClone(); }
void Vnes_core_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

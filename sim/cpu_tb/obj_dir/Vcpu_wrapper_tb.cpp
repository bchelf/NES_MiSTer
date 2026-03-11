// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_wrapper_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcpu_wrapper_tb::Vcpu_wrapper_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_wrapper_tb__Syms(contextp(), _vcname__, this)}
    , res_n{vlSymsp->TOP.res_n}
    , pwr_n{vlSymsp->TOP.pwr_n}
    , enable{vlSymsp->TOP.enable}
    , clk{vlSymsp->TOP.clk}
    , rdy{vlSymsp->TOP.rdy}
    , irq_n{vlSymsp->TOP.irq_n}
    , nmi_n{vlSymsp->TOP.nmi_n}
    , do_data{vlSymsp->TOP.do_data}
    , di_data{vlSymsp->TOP.di_data}
    , rw_n{vlSymsp->TOP.rw_n}
    , mem2{vlSymsp->TOP.mem2}
    , mem3{vlSymsp->TOP.mem3}
    , mem4{vlSymsp->TOP.mem4}
    , addr{vlSymsp->TOP.addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcpu_wrapper_tb::Vcpu_wrapper_tb(const char* _vcname__)
    : Vcpu_wrapper_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_wrapper_tb::~Vcpu_wrapper_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu_wrapper_tb___024root___eval_debug_assertions(Vcpu_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_wrapper_tb___024root___eval_static(Vcpu_wrapper_tb___024root* vlSelf);
void Vcpu_wrapper_tb___024root___eval_initial(Vcpu_wrapper_tb___024root* vlSelf);
void Vcpu_wrapper_tb___024root___eval_settle(Vcpu_wrapper_tb___024root* vlSelf);
void Vcpu_wrapper_tb___024root___eval(Vcpu_wrapper_tb___024root* vlSelf);

void Vcpu_wrapper_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_wrapper_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_wrapper_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcpu_wrapper_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcpu_wrapper_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcpu_wrapper_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcpu_wrapper_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcpu_wrapper_tb::eventsPending() { return false; }

uint64_t Vcpu_wrapper_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcpu_wrapper_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcpu_wrapper_tb___024root___eval_final(Vcpu_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_wrapper_tb::final() {
    Vcpu_wrapper_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_wrapper_tb::hierName() const { return vlSymsp->name(); }
const char* Vcpu_wrapper_tb::modelName() const { return "Vcpu_wrapper_tb"; }
unsigned Vcpu_wrapper_tb::threads() const { return 1; }
void Vcpu_wrapper_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcpu_wrapper_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcpu_wrapper_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcpu_wrapper_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcpu_wrapper_tb___024root__trace_init_top(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_wrapper_tb___024root*>(voidSelf);
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcpu_wrapper_tb___024root__trace_decl_types(tracep);
    Vcpu_wrapper_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root__trace_register(Vcpu_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_wrapper_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcpu_wrapper_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 182);
    Vcpu_wrapper_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

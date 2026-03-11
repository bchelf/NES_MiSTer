#include <cstdio>
#include <cstdint>
#include "Vcpu_wrapper_tb.h"
#include "verilated.h"

static void tick(Vcpu_wrapper_tb* top) {
    top->clk = 1;
    top->eval();
    top->clk = 0;
    top->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* top = new Vcpu_wrapper_tb;

    top->clk = 0;
    top->res_n = 0;
    top->pwr_n = 0;
    top->enable = 1;
    top->rdy = 1;
    top->irq_n = 1;
    top->nmi_n = 1;

    for (int i = 0; i < 8; ++i) tick(top);

    top->pwr_n = 1;
    top->res_n = 1;

    int fetch_prints = 0;
    for (int i = 0; i < 120; ++i) {
        tick(top);
        if (top->rw_n && fetch_prints < 20) {
            std::printf("FETCH[%02d] A=%04x DI=%02x\n", fetch_prints, top->addr, top->di_data);
            fetch_prints++;
        }
    }

    bool reset_fetch_ok = (top->addr >= 0x8000 && top->addr <= 0x80FF);
    bool write_ok = (top->mem2 == 0x12);

    // IRQ polarity: active-low input. Assert for a while.
    top->irq_n = 0;
    for (int i = 0; i < 80; ++i) tick(top);
    top->irq_n = 1;
    for (int i = 0; i < 80; ++i) tick(top);
    bool irq_ok = (top->mem3 == 0x34);

    // NMI polarity: active-low pulse on nmi_n.
    top->nmi_n = 0;
    for (int i = 0; i < 4; ++i) tick(top);
    top->nmi_n = 1;
    for (int i = 0; i < 80; ++i) tick(top);
    bool nmi_ok = (top->mem4 == 0x56);

    // RDY behavior: hold low, CPU should stop advancing address.
    uint16_t a_before_rdy = top->addr;
    top->rdy = 0;
    for (int i = 0; i < 20; ++i) tick(top);
    uint16_t a_after_rdy = top->addr;
    top->rdy = 1;
    bool rdy_ok = (a_before_rdy == a_after_rdy);

    // ENABLE behavior: hold low, wrapper should stop CPU clocking.
    uint16_t a_before_en = top->addr;
    top->enable = 0;
    for (int i = 0; i < 20; ++i) tick(top);
    uint16_t a_after_en = top->addr;
    top->enable = 1;
    bool enable_ok = (a_before_en == a_after_en);

    std::printf("\nCPU TB results:\n");
    std::printf("  reset_vector_fetch: %s\n", reset_fetch_ok ? "PASS" : "FAIL");
    std::printf("  read_write_basic:   %s (mem[2]=%02x)\n", write_ok ? "PASS" : "FAIL", top->mem2);
    std::printf("  irq_polarity:       %s (mem[3]=%02x)\n", irq_ok ? "PASS" : "FAIL", top->mem3);
    std::printf("  nmi_polarity:       %s (mem[4]=%02x)\n", nmi_ok ? "PASS" : "FAIL", top->mem4);
    std::printf("  rdy_semantics:      %s (%04x -> %04x)\n", rdy_ok ? "PASS" : "FAIL", a_before_rdy, a_after_rdy);
    std::printf("  enable_semantics:   %s (%04x -> %04x)\n", enable_ok ? "PASS" : "FAIL", a_before_en, a_after_en);

    bool all_ok = reset_fetch_ok && write_ok && irq_ok && nmi_ok && rdy_ok && enable_ok;
    delete top;
    return all_ok ? 0 : 1;
}

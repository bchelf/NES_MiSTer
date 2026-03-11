#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <array>
#include <chrono>
#include <string>
#include <vector>

#include <verilated.h>

#include "Vnes_core_top.h"
#include "Vnes_core_top___024root.h"

#include "frame_dump.h"
#include "input.h"
#include "rom_loader.h"
#include "video.h"

static uint32_t rgb_to_argb(uint8_t r, uint8_t g, uint8_t b) {
    return 0xFF000000u | (static_cast<uint32_t>(r) << 16) | (static_cast<uint32_t>(g) << 8) | static_cast<uint32_t>(b);
}

static uint8_t expected_prg_mapper0_byte(const RomImage& rom, uint16_t cpu_addr) {
    if (cpu_addr < 0x8000 || rom.prg.empty()) return 0xFF;
    const uint32_t offs = static_cast<uint32_t>(cpu_addr - 0x8000);
    const uint32_t idx = (rom.prg.size() == 0x4000u) ? (offs & 0x3FFFu) : (offs & 0x7FFFu);
    return rom.prg[idx % static_cast<uint32_t>(rom.prg.size())];
}

static uint8_t expected_chr_mapper0_byte(const RomImage& rom, uint16_t ppu_addr) {
    if (ppu_addr >= 0x2000 || rom.chr.empty()) return 0;
    return rom.chr[static_cast<uint32_t>(ppu_addr) % static_cast<uint32_t>(rom.chr.size())];
}

static uint16_t mask_bits(uint32_t size_units) {
    uint16_t m = 0;
    for (int i = 0; i < 10; ++i) {
        if (size_units > (1u << i)) m |= static_cast<uint16_t>(1u << i);
    }
    return m;
}

// FCEUX-like RGB palette (64 colors) for preview visibility.
static const uint32_t kNesPal[64] = {
    0xFF7C7C7C,0xFF0000FC,0xFF0000BC,0xFF4428BC,0xFF940084,0xFFA80020,0xFFA81000,0xFF881400,
    0xFF503000,0xFF007800,0xFF006800,0xFF005800,0xFF004058,0xFF000000,0xFF000000,0xFF000000,
    0xFFBCBCBC,0xFF0078F8,0xFF0058F8,0xFF6844FC,0xFFD800CC,0xFFE40058,0xFFF83800,0xFFE45C10,
    0xFFAC7C00,0xFF00B800,0xFF00A800,0xFF00A844,0xFF008888,0xFF000000,0xFF000000,0xFF000000,
    0xFFF8F8F8,0xFF3CBCFC,0xFF6888FC,0xFF9878F8,0xFFF878F8,0xFFF85898,0xFFF87858,0xFFFCA044,
    0xFFF8B800,0xFFB8F818,0xFF58D854,0xFF58F898,0xFF00E8D8,0xFF787878,0xFF000000,0xFF000000,
    0xFFFCFCFC,0xFFA4E4FC,0xFFB8B8F8,0xFFD8B8F8,0xFFF8B8F8,0xFFF8A4C0,0xFFF0D0B0,0xFFFCE0A8,
    0xFFF8D878,0xFFD8F878,0xFFB8F8B8,0xFFB8F8D8,0xFF00FCFC,0xFFF8D8F8,0xFF000000,0xFF000000,
};

static void tick_half(Vnes_core_top* top, uint8_t clkv) {
    top->clk = clkv;
    top->eval();
}

static bool preload_rom(Vnes_core_top* top, const RomImage& rom) {
    auto* r = top->rootp;
    if (rom.prg.empty()) return false;

    for (uint32_t i = 0; i < 32768u; ++i) {
        const uint8_t v = rom.prg[i % static_cast<uint32_t>(rom.prg.size())];
        r->nes_core_top__DOT__prg_rom[i] = v;
    }

    if (!rom.chr.empty()) {
        for (uint32_t i = 0; i < 8192u; ++i) {
            const uint8_t v = rom.chr[i % static_cast<uint32_t>(rom.chr.size())];
            r->nes_core_top__DOT__chr_rom[i] = v;
        }
    } else {
        for (uint32_t i = 0; i < 8192u; ++i) {
            r->nes_core_top__DOT__chr_rom[i] = 0;
        }
    }

    for (uint32_t i = 0; i < 2048u; ++i) {
        r->nes_core_top__DOT__cpu_ram[i] = 0;
        r->nes_core_top__DOT__ciram[i] = 0;
        r->nes_core_top__DOT__cart_ram[i] = 0;
    }
    // SMB1 reads $0770 as a game-mode gate: 0 = uninitialized (all logic skipped),
    // non-zero = active. On a real NES, RAM is random at power-on and $0770 is
    // typically non-zero. Simulate this by pre-seeding $0770=1 (attract mode).
    // $0770 is CPU address $0770, cpu_ram index 0x770 = 1904.
    r->nes_core_top__DOT__cpu_ram[0x770] = 1;

    uint64_t flags = 0;
    flags |= static_cast<uint64_t>(rom.mapper & 0xFF);
    flags |= static_cast<uint64_t>((rom.prg_banks <= 1 ? 0 : (rom.prg_banks <= 2 ? 1 : 2)) & 0x7) << 8;
    flags |= static_cast<uint64_t>((rom.chr_banks == 0 ? 0 : (rom.chr_banks <= 1 ? 0 : 1)) & 0x7) << 11;
    flags |= static_cast<uint64_t>((rom.flags6 & 0x01) ? 1 : 0) << 14;
    flags |= static_cast<uint64_t>((rom.chr_banks == 0) ? 1 : 0) << 15;
    flags |= static_cast<uint64_t>((rom.flags6 & 0x08) ? 1 : 0) << 16;
    flags |= static_cast<uint64_t>((rom.flags6 & 0x02) ? 1 : 0) << 25;
    top->mapper_flags_in = flags;

    const uint16_t prg_mask = mask_bits((rom.prg.size() + 2047u) / 2048u);
    const uint16_t chr_mask = mask_bits((std::max<size_t>(rom.chr.size(), 8192u) + 2047u) / 2048u);
    top->prg_mask_in = prg_mask;
    top->chr_mask_in = chr_mask;

    return true;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::puts("Usage: sim_nes <romfile>");
        std::puts("Example:");
        std::puts("./sim_nes roms/smb1.nes");
        return 1;
    }

    std::string rom_path;
    bool dump_frames = false;
    bool debug_video = false;
    bool debug_rom = false;
    bool verbose = false;
    bool trace_cpu = false;
    bool trace_ppu = false;
    bool perf = false;
    bool headless = false;
    int max_frames = -1;
    uint8_t hud_mode = 1;      // 0=Off, 1=P1, 2=P1+P2
    uint8_t hud_position = 0;  // 0=TL, 1=TR, 2=BL, 3=BR
    uint8_t hud_scale = 0;     // 0=1x, 1=2x

    for (int i = 1; i < argc; ++i) {
        if (!std::strcmp(argv[i], "--dump-frames")) {
            dump_frames = true;
        } else if (!std::strcmp(argv[i], "--debug-video")) {
            debug_video = true;
            verbose = true;
        } else if (!std::strcmp(argv[i], "--verbose")) {
            verbose = true;
        } else if (!std::strcmp(argv[i], "--debug-rom")) {
            debug_rom = true;
        } else if (!std::strcmp(argv[i], "--trace-cpu")) {
            trace_cpu = true;
        } else if (!std::strcmp(argv[i], "--trace-ppu")) {
            trace_ppu = true;
        } else if (!std::strcmp(argv[i], "--perf")) {
            perf = true;
        } else if (!std::strcmp(argv[i], "--headless")) {
            headless = true;
        } else if (!std::strcmp(argv[i], "--max-frames") && i + 1 < argc) {
            max_frames = std::atoi(argv[++i]);
        } else if (!std::strcmp(argv[i], "--hud") && i + 1 < argc) {
            const char* v = argv[++i];
            if (!std::strcmp(v, "off")) hud_mode = 0;
            else if (!std::strcmp(v, "p1")) hud_mode = 1;
            else if (!std::strcmp(v, "p1p2")) hud_mode = 2;
        } else if (!std::strcmp(argv[i], "--hud-pos") && i + 1 < argc) {
            const char* v = argv[++i];
            if (!std::strcmp(v, "tl")) hud_position = 0;
            else if (!std::strcmp(v, "tr")) hud_position = 1;
            else if (!std::strcmp(v, "bl")) hud_position = 2;
            else if (!std::strcmp(v, "br")) hud_position = 3;
        } else if (!std::strcmp(argv[i], "--hud-scale") && i + 1 < argc) {
            hud_scale = (std::atoi(argv[++i]) >= 2) ? 1 : 0;
        } else if (argv[i][0] != '-' && rom_path.empty()) {
            rom_path = argv[i];
        }
    }

    if (rom_path.empty()) {
        std::puts("Usage: sim_nes <romfile>");
        std::puts("Example:");
        std::puts("./sim_nes roms/smb1.nes");
        return 1;
    }

    Verilated::commandArgs(argc, argv);

    RomImage rom;
    std::string err;
    if (!load_ines_rom(rom_path, rom, err)) {
        std::fprintf(stderr, "%s\n", err.c_str());
        return 1;
    }
    if (rom.mapper != 0) {
        std::printf("Unsupported mapper for low-level wrapper: %d\n", rom.mapper);
        return 1;
    }

    std::printf("ROM: %s\n", rom_path.c_str());
    std::printf("PRG: %u x 16KB (%zu bytes)\n", rom.prg_banks, rom.prg.size());
    std::printf("CHR: %u x 8KB (%zu bytes)\n", rom.chr_banks, rom.chr.size());
    std::printf("Mapper: %d\n", rom.mapper);
    std::printf("Mirroring: %s\n", rom.four_screen ? "Four-screen" : (rom.mirroring_vertical ? "Vertical" : "Horizontal"));
    std::printf("HUD: mode=%u pos=%u scale=%ux\n", hud_mode, hud_position, hud_scale ? 2 : 1);
    if (debug_rom) {
        trace_cpu = true;
        trace_ppu = true;
    }

    if (!headless) {
        if (!input_init()) {
            std::fprintf(stderr, "Failed to init SDL input\n");
            return 1;
        }
    }

    VideoConfig vc;
    vc.width = 256;
    vc.height = 240;
    vc.scale = 4;
    vc.headless = headless;
    VideoOut video(vc);
    if (!video.ok()) {
        std::fprintf(stderr, "Failed to init video output\n");
        return 1;
    }

    auto* top = new Vnes_core_top;
    top->clk = 0;
    top->reset = 1;
    top->joy1_buttons = 0;
    top->joy2_buttons = 0;
    top->hud_mode = hud_mode;
    top->hud_position = hud_position;
    top->hud_scale = hud_scale;
    top->mapper_flags_in = 0;
    top->prg_mask_in = 0;
    top->chr_mask_in = 0;
    top->eval();

    if (!preload_rom(top, rom)) {
        std::fprintf(stderr, "ROM preload failed\n");
        delete top;
        return 1;
    }

    // Reset pulse.
    for (int i = 0; i < 4096; ++i) {
        tick_half(top, 1);
        tick_half(top, 0);
    }
    top->reset = 0;

    if (debug_rom) {
        std::puts("ROM debug: first 16 PRG bytes as seen in wrapper");
        for (int i = 0; i < 16; ++i) {
            std::printf("  %04X exp=%02X map=%02X\n", 0x8000 + i,
                        expected_prg_mapper0_byte(rom, static_cast<uint16_t>(0x8000 + i)),
                        top->rootp->nes_core_top__DOT__prg_rom[i]);
        }
    }

    InputState in{};
    int frame_count = 0;
    bool last_vblank = false;
    bool render_ever_enabled = false;
    int render_enable_frame = -1;
    uint64_t prev_hash = 0;
    uint32_t fetch_cmp = 0;
    uint32_t fetch_mismatch = 0;
    uint32_t chr_cmp = 0;
    uint32_t chr_mismatch = 0;
    uint16_t last_cycle = 0xFFFF;
    uint16_t last_scanline = 0xFFFF;
    bool last_nmi_in = false;
    bool first_nmi_high_logged = false;
    bool first_vector_page_logged = false;
    uint32_t nmi_window_logs = 0;
    uint32_t stack_write_logs = 0;
    uint32_t vector_read_logs = 0;
    uint32_t ppu2002_read_logs = 0;
    uint32_t opcode_trace_logs = 0;
    uint32_t ram_watch_logs = 0;
    uint32_t ppu2001_wr_logs = 0;
    uint32_t nmi_handler_trace_logs = 0;
    bool first_rti_logged = false;
    const bool diag_frame = verbose || debug_video || debug_rom || trace_cpu || trace_ppu;
    const bool diag_rom_fetch = debug_rom;
    const bool diag_chr_fetch = debug_rom;

    uint64_t perf_eval_calls = 0;
    uint64_t perf_master_ticks = 0;
    uint64_t perf_cpu_ce_ticks = 0;
    uint64_t perf_pause_ticks = 0;
    uint64_t perf_rdy_block_ticks = 0;
    uint64_t perf_dma_active_ticks = 0;
    uint64_t perf_dma_oam_write_events = 0;
    uint64_t perf_dma_events = 0;
    uint64_t perf_dma_cycles_cur = 0;
    uint64_t perf_dma_cycles_sum = 0;
    uint64_t perf_dma_cycles_min = UINT64_MAX;
    uint64_t perf_dma_cycles_max = 0;
    bool perf_dma_prev = false;
    const auto perf_t0 = std::chrono::steady_clock::now();
    std::chrono::nanoseconds perf_eval_ns(0);
    std::chrono::nanoseconds perf_host_ns(0);

    while (!Verilated::gotFinish() && !in.quit) {
        const auto loop_t0 = perf ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{};
        if (!headless) {
            input_poll(in);
            top->joy1_buttons = in.p1;
        }

        // Track when rendering first enables; inject Start for 10 frames after
        // to advance SMB1 past the copyright/title screen into gameplay.
        if (top->dbg_en_bg && !render_ever_enabled) {
            render_ever_enabled = true;
            render_enable_frame = frame_count;
        }
        if (render_ever_enabled && frame_count > render_enable_frame &&
            frame_count <= render_enable_frame + 10) {
            top->joy1_buttons |= 0x08u;  // bit 3 = Start
        }

        if (perf) {
            const auto t0 = std::chrono::steady_clock::now();
            tick_half(top, 1);
            perf_eval_ns += std::chrono::steady_clock::now() - t0;
            perf_eval_calls++;
        } else {
            tick_half(top, 1);
        }

        if (perf) {
            perf_master_ticks++;
            if (top->dbg_cpu_ce) perf_cpu_ce_ticks++;
            if (top->dbg_pause_cpu) perf_pause_ticks++;
            if (top->dbg_cpu_ce && top->dbg_pause_cpu && top->dbg_cpu_rnw) perf_rdy_block_ticks++;
            if (top->dbg_dma_sprite_trigger) perf_dma_oam_write_events++;

            const bool dma_now = top->dbg_dma_active;
            if (dma_now) {
                perf_dma_active_ticks++;
                perf_dma_cycles_cur += top->dbg_cpu_ce ? 1 : 0;
            }
            if (dma_now && !perf_dma_prev) {
                perf_dma_events++;
                perf_dma_cycles_cur = 0;
            } else if (!dma_now && perf_dma_prev) {
                perf_dma_cycles_sum += perf_dma_cycles_cur;
                if (perf_dma_cycles_cur < perf_dma_cycles_min) perf_dma_cycles_min = perf_dma_cycles_cur;
                if (perf_dma_cycles_cur > perf_dma_cycles_max) perf_dma_cycles_max = perf_dma_cycles_cur;
                perf_dma_cycles_cur = 0;
            }
            perf_dma_prev = dma_now;
        }

        // CPU read/fetch diagnostics.
        if (diag_rom_fetch && top->dbg_mr_int) {
            const uint16_t a = top->dbg_cpu_addr;
            if (a >= 0x8000 && fetch_cmp < 128) {
                const uint8_t seen = top->dbg_cpu_din;
                const uint8_t exp = expected_prg_mapper0_byte(rom, a);
                const bool ok = (seen == exp);
                if (!ok) fetch_mismatch++;
                if (debug_rom || !ok) {
                    std::printf("rom-fetch[%03u] pc=%04x a=%04x seen=%02x exp=%02x match=%d\n",
                                fetch_cmp, top->dbg_cpu_pc, a, seen, exp, ok ? 1 : 0);
                }
                fetch_cmp++;
            }
        }

        // Focused opcode trace around startup/NMI.
        if (trace_cpu && opcode_trace_logs < 256 && frame_count <= 15 &&
            top->dbg_mr_int && top->dbg_cpu_addr == top->dbg_cpu_pc) {
            std::printf("op[%03u] f=%d pc=%04x op=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x nmi=%d nmi_occ=%d dma=%d pause=%d\n",
                        opcode_trace_logs, frame_count, top->dbg_cpu_pc, top->dbg_cpu_din,
                        static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu),
                        static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu),
                        static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu),
                        static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu),
                        static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu),
                        top->dbg_nmi ? 1 : 0, top->dbg_nmi_occ ? 1 : 0,
                        top->dbg_dma_active ? 1 : 0, top->dbg_pause_cpu ? 1 : 0);
            opcode_trace_logs++;
        }

        // PPU pattern fetch diagnostics.
        if (diag_chr_fetch && top->dbg_ppumem_read && top->dbg_ppumem_addr < 0x200000u && chr_cmp < 128) {
            const uint16_t ppu_a = static_cast<uint16_t>(top->dbg_ppumem_addr & 0x1FFFu);
            const uint8_t seen = top->dbg_chr_to_ppu;
            const uint8_t exp = expected_chr_mapper0_byte(rom, ppu_a);
            const bool ok = (seen == exp);
            if (!ok) chr_mismatch++;
            if (debug_rom || !ok) {
                std::printf("chr-fetch[%03u] ppu_a=%04x seen=%02x exp=%02x match=%d\n",
                            chr_cmp, ppu_a, seen, exp, ok ? 1 : 0);
            }
            chr_cmp++;
        }

        if (trace_ppu && top->dbg_mw_int && top->dbg_cpu_addr >= 0x2000 && top->dbg_cpu_addr <= 0x2007) {
            std::printf("ppu-reg-wr pc=%04x a=%04x d=%02x en_bg=%d en_obj=%d vbl_en=%d nmi_occ=%d render_d=%d\n",
                        top->dbg_cpu_pc,
                        top->dbg_cpu_addr,
                        top->dbg_cpu_dout,
                        top->dbg_en_bg ? 1 : 0,
                        top->dbg_en_obj ? 1 : 0,
                        top->dbg_vbl_en ? 1 : 0,
                        top->dbg_nmi_occ ? 1 : 0,
                        top->dbg_render_d ? 1 : 0);
        }

        const bool nmi_in = top->dbg_nmi;

        // Always-on: log every write to $2001 (PPU mask register).
        // This is the critical register that enables bg/sprite rendering (bits 3-4).
        if (trace_ppu && ppu2001_wr_logs < 100 && top->dbg_mw_int && top->dbg_cpu_addr == 0x2001u) {
            std::fprintf(stderr, "ppu2001-wr[%02u] frame=%d pc=%04x val=%02x en_bg=%d en_obj=%d vbl_en=%d\n",
                        ppu2001_wr_logs, frame_count, top->dbg_cpu_pc, top->dbg_cpu_dout,
                        top->dbg_en_bg ? 1 : 0, top->dbg_en_obj ? 1 : 0, top->dbg_vbl_en ? 1 : 0);
            ppu2001_wr_logs++;
        }

        // Full opcode trace for frames 31-34 to catch the $0772=3 handler path.
        if (trace_cpu && frame_count >= 31 && frame_count <= 34 &&
            top->dbg_mr_int && top->dbg_cpu_addr == top->dbg_cpu_pc) {
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            std::fprintf(stderr, "trc f=%d pc=%04x op=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x nmi=%d nmi_occ=%d\n",
                        frame_count, top->dbg_cpu_pc, top->dbg_cpu_din,
                        a_reg, x_reg, y_reg, s_reg, p,
                        top->dbg_nmi ? 1 : 0, top->dbg_nmi_occ ? 1 : 0);
        }

        // NMI handler opcode trace: PC range $8070-$80FF for frames >= 6.
        // Captures the full NMI handler execution to find which PPU writes happen.
        if (trace_cpu && nmi_handler_trace_logs < 500 && frame_count >= 6 &&
            top->dbg_mr_int && top->dbg_cpu_addr == top->dbg_cpu_pc &&
            top->dbg_cpu_pc >= 0x8070u && top->dbg_cpu_pc <= 0x8200u) {
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            std::fprintf(stderr, "nmi-h[%03u] f=%d pc=%04x op=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x dma=%d pause=%d\n",
                        nmi_handler_trace_logs, frame_count, top->dbg_cpu_pc, top->dbg_cpu_din,
                        a_reg, x_reg, y_reg, s_reg, p,
                        top->dbg_dma_active ? 1 : 0, top->dbg_pause_cpu ? 1 : 0);
            nmi_handler_trace_logs++;
        }

        // Joypad trace: log $4016/$4017 reads/writes to verify polling.
        if (trace_cpu && frame_count >= 33 && frame_count <= 45) {
            if (top->dbg_mw_int && top->dbg_cpu_addr == 0x4016u) {
                std::fprintf(stderr, "joy-wr f=%d pc=%04x val=%02x joy1=%02x\n",
                            frame_count, top->dbg_cpu_pc, top->dbg_cpu_dout, top->joy1_buttons);
            }
            if (top->dbg_mr_int && (top->dbg_cpu_addr == 0x4016u || top->dbg_cpu_addr == 0x4017u)) {
                std::fprintf(stderr, "joy-rd f=%d pc=%04x a=%04x d=%02x joy1=%02x\n",
                            frame_count, top->dbg_cpu_pc, top->dbg_cpu_addr, top->dbg_cpu_din, top->joy1_buttons);
            }
        }
        // PPU write trace: $2001/$2005/$2006/$2007.
        if (trace_cpu && top->dbg_mw_int && top->dbg_cpu_addr == 0x2001u &&
            top->dbg_cpu_dout != 0) {
            // Only log non-zero writes (the writes clearing rendering aren't interesting)
            static uint32_t ppu2001_count = 0;
            if (ppu2001_count < 200) {
                std::fprintf(stderr, "2001-wr f=%d sl=%d cy=%d pc=%04x d=%02x en_bg=%d en_obj=%d\n",
                            frame_count, static_cast<int>(top->scanline), static_cast<int>(top->cycle),
                            top->dbg_cpu_pc, top->dbg_cpu_dout,
                            top->dbg_en_bg ? 1 : 0, top->dbg_en_obj ? 1 : 0);
                ppu2001_count++;
            }
        }
        // Log all PPU $2005/$2006 writes in frames 31-35.
        if (trace_cpu && frame_count >= 31 && frame_count <= 35 &&
            top->dbg_mw_int &&
            (top->dbg_cpu_addr == 0x2005u || top->dbg_cpu_addr == 0x2006u)) {
            static uint32_t scroll_wr_count = 0;
            static uint16_t last_pc2 = 0xFFFF, last_addr2 = 0xFFFF;
            static uint8_t last_d2 = 0xFF;
            // Deduplicate consecutive identical writes
            if (top->dbg_cpu_pc != last_pc2 || top->dbg_cpu_addr != last_addr2 || top->dbg_cpu_dout != last_d2) {
                last_pc2 = top->dbg_cpu_pc; last_addr2 = top->dbg_cpu_addr; last_d2 = top->dbg_cpu_dout;
                if (scroll_wr_count < 200) {
                    std::fprintf(stderr, "scroll-wr f=%d sl=%d cy=%d pc=%04x a=%04x d=%02x\n",
                                frame_count, static_cast<int>(top->scanline), static_cast<int>(top->cycle),
                                top->dbg_cpu_pc, top->dbg_cpu_addr, top->dbg_cpu_dout);
                    scroll_wr_count++;
                }
            }
        }

        // $2000 write trace: log all PPUCTRL writes to track vbl_en changes.
        if (trace_cpu && frame_count >= 30 && frame_count <= 45 &&
            top->dbg_mw_int && top->dbg_cpu_addr == 0x2000u) {
            std::fprintf(stderr, "ppuctrl-wr f=%d pc=%04x val=%02x vbl_en=%d nmi_occ=%d\n",
                        frame_count, top->dbg_cpu_pc, top->dbg_cpu_dout,
                        top->dbg_vbl_en ? 1 : 0, top->dbg_nmi_occ ? 1 : 0);
        }

        // $8212 dispatch: log when PC hits $8212 (SMB1 game-mode dispatcher).
        // Shows $0770/$0772/$0774 so we can trace the init-phase progression.
        if (trace_cpu && top->dbg_mr_int && top->dbg_cpu_addr == top->dbg_cpu_pc &&
            top->dbg_cpu_pc == 0x8212u) {
            auto* r = top->rootp;
            const uint8_t v0770 = r->nes_core_top__DOT__cpu_ram[0x770];
            const uint8_t v0772 = r->nes_core_top__DOT__cpu_ram[0x772];
            const uint8_t v0774 = r->nes_core_top__DOT__cpu_ram[0x774];
            std::fprintf(stderr, "disp8212 f=%d $0770=%02x $0772=%02x $0774=%02x\n",
                        frame_count, v0770, v0772, v0774);
        }

        if (trace_cpu && ram_watch_logs < 256 &&
            (top->dbg_cpu_addr == 0x0770u || top->dbg_cpu_addr == 0x0772u ||
             top->dbg_cpu_addr == 0x0773u ||
             top->dbg_cpu_addr == 0x0774u || top->dbg_cpu_addr == 0x0779u ||
             top->dbg_cpu_addr == 0x4014u)) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            std::printf("ram-watch[%03u] frame=%d pc=%04x %s addr=%04x din=%02x dout=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x dma=%d pause=%d trig=%d ce=%d rnw=%d rst=%d\n",
                        ram_watch_logs, frame_count, pc, top->dbg_mw_int ? "WR" : "RD",
                        top->dbg_cpu_addr, top->dbg_cpu_din, top->dbg_cpu_dout,
                        a_reg, x_reg, y_reg, s_reg, p,
                        top->dbg_dma_active ? 1 : 0, top->dbg_pause_cpu ? 1 : 0,
                        top->dbg_dma_sprite_trigger ? 1 : 0, top->dbg_cpu_ce ? 1 : 0,
                        top->dbg_cpu_rnw ? 1 : 0, top->dbg_reset_noSS ? 1 : 0);
            std::printf("  dma-state spr=%u get_ce=%d put_ce=%d odd=%d\n",
                        static_cast<unsigned>(top->dbg_dma_spr_state),
                        top->dbg_dma_get_ce ? 1 : 0,
                        top->dbg_dma_put_ce ? 1 : 0,
                        top->dbg_odd_or_even ? 1 : 0);
            ram_watch_logs++;
        }

        if (trace_cpu && nmi_in && !first_nmi_high_logged) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            const uint8_t ir = top->dbg_cpu_din;
            const uint8_t st = 0;
            const bool nmi_edge = false;
            const bool irq_latched = false;
            const bool i_flag = (p & 0x04u) != 0;
            std::printf("nmi-first-high frame=%d pc=%04x st=%02x ir=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x nmi_edge=%d irq_lat=%d I=%d\n",
                        frame_count, pc, st, ir, a_reg, x_reg, y_reg, s_reg, p,
                        nmi_edge ? 1 : 0, irq_latched ? 1 : 0, i_flag ? 1 : 0);
            first_nmi_high_logged = true;
        }
        if (trace_cpu && nmi_window_logs < 96) {
            const uint16_t pc = top->dbg_cpu_pc;
            if (nmi_in || last_nmi_in || pc >= 0xFFF0u) {
                const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
                const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
                const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
                const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
                const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
                const uint8_t ir = top->dbg_cpu_din;
                const uint8_t st = 0;
                const bool nmi_edge = false;
                const bool irq_latched = false;
                const bool i_flag = (p & 0x04u) != 0;
                auto* r = top->rootp;
                const bool brk = r->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk;
                std::printf("nmi-win[%02u] frame=%d pc=%04x st=%02x ir=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x nmi=%d nmi_edge=%d irq_lat=%d I=%d brk=%d mr=%d mw=%d addr=%04x din=%02x dout=%02x en_bg=%d en_obj=%d vbl_en=%d nmi_occ=%d\n",
                            nmi_window_logs, frame_count, pc, st, ir, a_reg, x_reg, y_reg, s_reg, p,
                            nmi_in ? 1 : 0, nmi_edge ? 1 : 0, irq_latched ? 1 : 0, i_flag ? 1 : 0, brk ? 1 : 0,
                            top->dbg_mr_int ? 1 : 0, top->dbg_mw_int ? 1 : 0, top->dbg_cpu_addr,
                            top->dbg_cpu_din, top->dbg_cpu_dout,
                            top->dbg_en_bg ? 1 : 0, top->dbg_en_obj ? 1 : 0, top->dbg_vbl_en ? 1 : 0, top->dbg_nmi_occ ? 1 : 0);
                nmi_window_logs++;
            }
        }

        if (trace_cpu && top->dbg_mw_int && top->dbg_cpu_addr >= 0x0100u && top->dbg_cpu_addr <= 0x01FFu && stack_write_logs < 64) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            const uint8_t ir = top->dbg_cpu_din;
            const uint8_t st = 0;
            const bool nmi_edge = false;
            const bool irq_latched = false;
            auto* r = top->rootp;
            const bool brk = r->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk;
            std::printf("stack-wr[%02u] frame=%d pc=%04x st=%02x ir=%02x S=%02x addr=%04x data=%02x brk=%d nmi=%d irq_lat=%d\n",
                        stack_write_logs, frame_count, pc, st, ir, s_reg, top->dbg_cpu_addr, top->dbg_cpu_dout,
                        brk ? 1 : 0, nmi_in ? 1 : 0, irq_latched ? 1 : 0);
            stack_write_logs++;
        }
        if (trace_cpu && top->dbg_mr_int && top->dbg_cpu_addr >= 0xFFFAu && top->dbg_cpu_addr <= 0xFFFFu && vector_read_logs < 64) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t ir = top->dbg_cpu_din;
            const uint8_t st = 0;
            const bool nmi_edge = false;
            const bool irq_latched = false;
            const bool i_flag = (p & 0x04u) != 0;
            std::printf("vector-rd[%02u] frame=%d pc=%04x st=%02x ir=%02x addr=%04x data=%02x nmi=%d nmi_edge=%d irq_lat=%d I=%d\n",
                        vector_read_logs, frame_count, pc, st, ir, top->dbg_cpu_addr, top->dbg_cpu_din,
                        nmi_in ? 1 : 0, nmi_edge ? 1 : 0, irq_latched ? 1 : 0, i_flag ? 1 : 0);
            vector_read_logs++;
        }
        if (trace_cpu && !first_rti_logged && top->dbg_mr_int && top->dbg_cpu_addr == top->dbg_cpu_pc && top->dbg_cpu_din == 0x40u) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            std::printf("first-rti frame=%d pc=%04x A=%02x X=%02x Y=%02x S=%02x P=%02x nmi=%d nmi_occ=%d\n",
                        frame_count, pc, a_reg, x_reg, y_reg, s_reg, p, nmi_in ? 1 : 0, top->dbg_nmi_occ ? 1 : 0);
            first_rti_logged = true;
        }
        // Unlimited $2002 reads in frame 33+ to track sprite 0 hit wait loop
        if (trace_cpu && frame_count >= 33 && frame_count <= 36 &&
            top->dbg_mr_int && top->dbg_cpu_addr == 0x2002u) {
            static uint32_t spr0_poll_count = 0;
            if (spr0_poll_count < 200) {
                std::fprintf(stderr, "2002-rd f=%d sl=%d cy=%d pc=%04x val=%02x spr0hit=%d\n",
                            frame_count, static_cast<int>(top->scanline), static_cast<int>(top->cycle),
                            top->dbg_cpu_pc, top->dbg_cpu_din, (top->dbg_cpu_din >> 6) & 1);
                spr0_poll_count++;
            }
        }

        if (trace_ppu && top->dbg_mr_int && top->dbg_cpu_addr == 0x2002u && ppu2002_read_logs < 64) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t ir = top->dbg_cpu_din;
            const uint8_t st = 0;
            std::printf("ppu2002-rd[%02u] frame=%d pc=%04x st=%02x ir=%02x data=%02x vblank=%d nmi_occ=%d en_bg=%d en_obj=%d\n",
                        ppu2002_read_logs, frame_count, pc, st, ir, top->dbg_cpu_din,
                        top->vblank ? 1 : 0, top->dbg_nmi_occ ? 1 : 0, top->dbg_en_bg ? 1 : 0, top->dbg_en_obj ? 1 : 0);
            ppu2002_read_logs++;
        }
        if (trace_cpu && !first_vector_page_logged && frame_count > 0 && top->dbg_cpu_pc >= 0xFFF0u) {
            const uint16_t pc = top->dbg_cpu_pc;
            const uint8_t a_reg = static_cast<uint8_t>(top->dbg_cpu_regs & 0xFFu);
            const uint8_t x_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 8) & 0xFFu);
            const uint8_t y_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 16) & 0xFFu);
            const uint8_t p = static_cast<uint8_t>((top->dbg_cpu_regs >> 24) & 0xFFu);
            const uint8_t s_reg = static_cast<uint8_t>((top->dbg_cpu_regs >> 32) & 0xFFu);
            const uint8_t ir = top->dbg_cpu_din;
            const uint8_t st = 0;
            const bool nmi_edge = false;
            const bool irq_latched = false;
            const bool i_flag = (p & 0x04u) != 0;
            auto* r = top->rootp;
            const bool brk = r->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk;
            std::printf("vector-page-entry frame=%d pc=%04x st=%02x ir=%02x A=%02x X=%02x Y=%02x S=%02x P=%02x brk=%d nmi=%d nmi_edge=%d irq_lat=%d I=%d\n",
                        frame_count, pc, st, ir, a_reg, x_reg, y_reg, s_reg, p,
                        brk ? 1 : 0, nmi_in ? 1 : 0, nmi_edge ? 1 : 0, irq_latched ? 1 : 0, i_flag ? 1 : 0);
            first_vector_page_logged = true;
        }

        // PPU t register trace: sample when $2005/$2006 is written to see actual t value.
        if (trace_cpu && frame_count >= 31 && frame_count <= 35 &&
            top->dbg_mw_int &&
            (top->dbg_cpu_addr == 0x2005u || top->dbg_cpu_addr == 0x2006u)) {
            const uint16_t ppu_t = top->rootp->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t;
            const uint16_t ppu_v2 = top->rootp->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v;
            static uint16_t last_t = 0xFFFF;
            if (ppu_t != last_t) {
                last_t = ppu_t;
                std::fprintf(stderr, "t-change f=%d sl=%d cy=%d pc=%04x a=%04x d=%02x t=%04x tX=%d v=%04x vX=%d\n",
                            frame_count, static_cast<int>(top->scanline), static_cast<int>(top->cycle),
                            top->dbg_cpu_pc, top->dbg_cpu_addr, top->dbg_cpu_dout,
                            ppu_t, ppu_t & 0x1F, ppu_v2, ppu_v2 & 0x1F);
            }
        }

        // Capture visible pixels directly from NES color index.
        const uint16_t cy = top->cycle;
        const uint16_t sl = top->scanline;
        // Trace pixel color at row 2 (scanlines 16-23) to diagnose solid-blue issue.
        if (trace_cpu && frame_count == 33 && sl >= 16 && sl <= 23 && cy >= 24 && cy <= 31 &&
            (cy != last_cycle || sl != last_scanline) && !top->hblank && !top->vblank) {
            std::fprintf(stderr, "px f=33 sl=%d cy=%d color=%02x en_bg=%d\n",
                        sl, cy, top->color & 0x3F, top->dbg_en_bg ? 1 : 0);
        }
        if ((cy != last_cycle || sl != last_scanline) && sl < 240 && cy < 256 && !top->hblank && !top->vblank) {
            uint32_t px = kNesPal[top->color & 0x3F];
            if (top->hud_active) {
                px = rgb_to_argb(
                    static_cast<uint8_t>((top->hud_pixel >> 16) & 0xFF),
                    static_cast<uint8_t>((top->hud_pixel >> 8) & 0xFF),
                    static_cast<uint8_t>(top->hud_pixel & 0xFF)
                );
            }
            video.set_pixel_unchecked(static_cast<int>(cy), static_cast<int>(sl), px);
            last_cycle = cy;
            last_scanline = sl;
        }

        const bool vblank = top->vblank;
        if (!last_vblank && vblank) {
            frame_count++;

            if (diag_frame) {
                int non_black = 0;
                uint64_t h = 1469598103934665603ULL;
                const uint32_t* fb = video.framebuffer();
                const int pixels = video.width() * video.height();
                for (int i = 0; i < pixels; ++i) {
                    const uint32_t p = fb[i] & 0x00FFFFFFu;
                    if (p) non_black++;
                    h ^= static_cast<uint64_t>(fb[i]);
                    h *= 1099511628211ULL;
                }
                const bool changed = (frame_count == 1) || (h != prev_hash);
                prev_hash = h;
                {
                    auto* r = top->rootp;
                    std::fprintf(stderr, "ram: frame=%d $0770=%02x $0772=%02x $0774=%02x $0778=%02x\n",
                                frame_count,
                                r->nes_core_top__DOT__cpu_ram[0x770],
                                r->nes_core_top__DOT__cpu_ram[0x772],
                                r->nes_core_top__DOT__cpu_ram[0x774],
                                r->nes_core_top__DOT__cpu_ram[0x778]);
                }
                std::fprintf(stderr, "frame=%d pc=%04x non_black=%d changed=%d en_bg=%d en_obj=%d vbl_en=%d nmi_occ=%d render_d=%d fetch_mis=%u chr_mis=%u\n",
                            frame_count,
                            top->dbg_cpu_pc,
                            non_black,
                            changed ? 1 : 0,
                            top->dbg_en_bg ? 1 : 0,
                            top->dbg_en_obj ? 1 : 0,
                            top->dbg_vbl_en ? 1 : 0,
                            top->dbg_nmi_occ ? 1 : 0,
                            top->dbg_render_d ? 1 : 0,
                            fetch_mismatch,
                            chr_mismatch);
            }

            // Dump CIRAM nametable at frame 33 (first 10 rows to see text tiles).
            if (trace_cpu && frame_count == 33) {
                auto* r = top->rootp;
                std::fprintf(stderr, "ciram-nt0 frame=%d (rows 0-9):\n", frame_count);
                for (int row = 0; row < 10; ++row) {
                    std::fprintf(stderr, "  row%02d:", row);
                    for (int col = 0; col < 32; ++col)
                        std::fprintf(stderr, " %02x", static_cast<uint8_t>(r->nes_core_top__DOT__ciram[row * 32 + col]));
                    std::fprintf(stderr, "\n");
                }
            }

            // Dump CHR PT0 sprite tile $ff at frame 33
            if (trace_cpu && frame_count == 33) {
                auto* r = top->rootp;
                std::fprintf(stderr, "chr-pt0 tile=ff:");
                for (int b = 0; b < 16; ++b)
                    std::fprintf(stderr, " %02x", r->nes_core_top__DOT__chr_rom[0xff * 16 + b]);
                std::fprintf(stderr, "\n");
            }

            // Dump CHR ROM at BG PT1 for a few key tiles ($16, $0a, $24).
            if (trace_cpu && frame_count == 33) {
                auto* r = top->rootp;
                for (uint8_t tid : {0x16u, 0x0au, 0x24u, 0x00u}) {
                    uint32_t base = 0x1000u + tid * 16u;
                    std::fprintf(stderr, "chr-pt1 tile=%02x:", tid);
                    for (int b = 0; b < 16; ++b)
                        std::fprintf(stderr, " %02x", r->nes_core_top__DOT__chr_rom[base + b]);
                    std::fprintf(stderr, "\n");
                }
            }

            // Dump PPU palette and OAM sprite 0 at frame 33.
            if (trace_cpu && frame_count == 33) {
                auto* r = top->rootp;
                std::fprintf(stderr, "pal dump frame=%d:", frame_count);
                for (int i = 0; i < 32; ++i)
                    std::fprintf(stderr, " %02x", static_cast<uint8_t>(
                        r->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[i]));
                std::fprintf(stderr, "\n");
                // OAM sprite 0: bytes 0-3 (Y, tile, attr, X)
                const auto& oam = r->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam;
                std::fprintf(stderr, "spr0 frame=%d: Y=%02x tile=%02x attr=%02x X=%02x\n",
                            frame_count,
                            static_cast<uint8_t>(oam[0]),
                            static_cast<uint8_t>(oam[1]),
                            static_cast<uint8_t>(oam[2]),
                            static_cast<uint8_t>(oam[3]));
            }

            if (debug_video && frame_count <= 120) {
                std::array<char, 64> fn{};
                std::snprintf(fn.data(), fn.size(), "debug_frame_%06d.png", frame_count);
                dump_frame_png(fn.data(), video.framebuffer(), video.width(), video.height());
            }
            if (dump_frames) {
                std::array<char, 64> fn{};
                std::snprintf(fn.data(), fn.size(), "frame_%06d.png", frame_count);
                dump_frame_png(fn.data(), video.framebuffer(), video.width(), video.height());
            }

            video.present();
            if (max_frames > 0 && frame_count >= max_frames) break;
        }
        last_vblank = vblank;
        last_nmi_in = nmi_in;

        if (perf) {
            const auto t0 = std::chrono::steady_clock::now();
            tick_half(top, 0);
            perf_eval_ns += std::chrono::steady_clock::now() - t0;
            perf_eval_calls++;
            perf_host_ns += std::chrono::steady_clock::now() - loop_t0;
        } else {
            tick_half(top, 0);
        }
    }

    if (perf) {
        const auto perf_t1 = std::chrono::steady_clock::now();
        const double wall_s = std::chrono::duration<double>(perf_t1 - perf_t0).count();
        const double eval_s = std::chrono::duration<double>(perf_eval_ns).count();
        const double host_s = std::chrono::duration<double>(perf_host_ns).count();
        const double fps = (wall_s > 0.0) ? (static_cast<double>(frame_count) / wall_s) : 0.0;
        const double pause_pct = perf_master_ticks ? (100.0 * static_cast<double>(perf_pause_ticks) / static_cast<double>(perf_master_ticks)) : 0.0;
        const double rdy_pct = perf_master_ticks ? (100.0 * static_cast<double>(perf_rdy_block_ticks) / static_cast<double>(perf_master_ticks)) : 0.0;
        const double cpu_ce_pause_pct = perf_cpu_ce_ticks ? (100.0 * static_cast<double>(perf_rdy_block_ticks) / static_cast<double>(perf_cpu_ce_ticks)) : 0.0;
        const uint64_t dma_avg = perf_dma_events ? (perf_dma_cycles_sum / perf_dma_events) : 0;
        const uint64_t dma_min = (perf_dma_cycles_min == UINT64_MAX) ? 0 : perf_dma_cycles_min;
        std::fprintf(stderr,
            "perf: frames=%d wall=%.3fs fps=%.2f eval_calls=%llu eval_time=%.3fs eval_pct=%.1f host_loop=%.3fs\n"
            "perf: master_ticks=%llu cpu_ce_ticks=%llu pause_ticks=%llu pause_pct=%.2f rdy_block_ticks=%llu rdy_master_pct=%.2f rdy_cpuce_pct=%.2f\n"
            "perf: dma_oam_writes=%llu dma_events=%llu dma_active_ticks=%llu dma_cycles[min/avg/max]=%llu/%llu/%llu\n",
            frame_count, wall_s, fps,
            static_cast<unsigned long long>(perf_eval_calls), eval_s,
            (host_s > 0.0) ? (100.0 * eval_s / host_s) : 0.0, host_s,
            static_cast<unsigned long long>(perf_master_ticks),
            static_cast<unsigned long long>(perf_cpu_ce_ticks),
            static_cast<unsigned long long>(perf_pause_ticks), pause_pct,
            static_cast<unsigned long long>(perf_rdy_block_ticks), rdy_pct, cpu_ce_pause_pct,
            static_cast<unsigned long long>(perf_dma_oam_write_events),
            static_cast<unsigned long long>(perf_dma_events),
            static_cast<unsigned long long>(perf_dma_active_ticks),
            static_cast<unsigned long long>(dma_min),
            static_cast<unsigned long long>(dma_avg),
            static_cast<unsigned long long>(perf_dma_cycles_max));
    }

    delete top;
    return 0;
}

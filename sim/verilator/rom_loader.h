#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct RomImage {
    std::vector<uint8_t> prg;
    std::vector<uint8_t> chr;
    std::vector<uint8_t> raw_image;
    uint8_t prg_banks = 0;
    uint8_t chr_banks = 0;
    uint8_t flags6 = 0;
    uint8_t flags7 = 0;
    bool has_trainer = false;
    bool is_nes20 = false;
    bool mirroring_vertical = false;
    bool four_screen = false;
    int mapper = -1;
};

bool load_ines_rom(const std::string& path, RomImage& out, std::string& error);

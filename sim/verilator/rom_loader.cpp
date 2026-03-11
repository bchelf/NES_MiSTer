#include "rom_loader.h"

#include <fstream>
#include <iterator>

namespace {
constexpr size_t kINesHeaderSize = 16;
constexpr size_t kTrainerSize = 512;
constexpr size_t kPrgBankSize = 16 * 1024;
constexpr size_t kChrBankSize = 8 * 1024;
}  // namespace

bool load_ines_rom(const std::string& path, RomImage& out, std::string& error) {
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        error = "Failed to open ROM file: " + path;
        return false;
    }

    std::vector<uint8_t> data((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    if (data.size() < kINesHeaderSize) {
        error = "ROM file too small for iNES header";
        return false;
    }

    if (!(data[0] == 'N' && data[1] == 'E' && data[2] == 'S' && data[3] == 0x1A)) {
        error = "Not a valid iNES file";
        return false;
    }

    const uint8_t prg_banks = data[4];
    const uint8_t chr_banks = data[5];
    const uint8_t flags6 = data[6];
    const uint8_t flags7 = data[7];

    const bool has_trainer = (flags6 & 0x04) != 0;
    const size_t trainer_size = has_trainer ? kTrainerSize : 0;

    const bool is_nes20 = ((flags7 >> 2) & 0x03) == 0x02;
    const bool is_dirty = !is_nes20 &&
                          (((data[9] & 0xFE) != 0) ||
                           data[10] != 0 ||
                           data[11] != 0 ||
                           data[12] != 0 ||
                           data[13] != 0 ||
                           data[14] != 0 ||
                           data[15] != 0);

    // Match GameLoader behavior in NES.sv for iNES1 "dirty" headers.
    const int mapper = (((is_dirty ? 0 : (flags7 >> 4)) << 4) | (flags6 >> 4));
    const size_t prg_size = static_cast<size_t>(prg_banks) * kPrgBankSize;
    const size_t chr_size = static_cast<size_t>(chr_banks) * kChrBankSize;

    const size_t data_start = kINesHeaderSize + trainer_size;
    const size_t rom_end = data_start + prg_size + chr_size;
    if (data.size() < rom_end) {
        error = "ROM file truncated (header sizes exceed file length)";
        return false;
    }

    out = {};
    out.prg_banks = prg_banks;
    out.chr_banks = chr_banks;
    out.flags6 = flags6;
    out.flags7 = flags7;
    out.has_trainer = has_trainer;
    out.is_nes20 = is_nes20;
    out.mirroring_vertical = (flags6 & 0x01) != 0;
    out.four_screen = (flags6 & 0x08) != 0;
    out.mapper = mapper;
    out.prg.assign(data.begin() + static_cast<std::ptrdiff_t>(data_start),
                   data.begin() + static_cast<std::ptrdiff_t>(data_start + prg_size));
    out.chr.assign(data.begin() + static_cast<std::ptrdiff_t>(data_start + prg_size),
                   data.begin() + static_cast<std::ptrdiff_t>(rom_end));
    out.raw_image.assign(data.begin(), data.begin() + static_cast<std::ptrdiff_t>(rom_end));

    return true;
}

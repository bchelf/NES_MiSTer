#include "frame_dump.h"

#include <fstream>
#include <vector>

static void write_be32(std::ofstream& out, uint32_t v) {
    char b[4] = {
        static_cast<char>((v >> 24) & 0xFF),
        static_cast<char>((v >> 16) & 0xFF),
        static_cast<char>((v >> 8) & 0xFF),
        static_cast<char>(v & 0xFF)
    };
    out.write(b, 4);
}

static uint32_t crc32_update(uint32_t crc, const uint8_t* data, size_t len) {
    crc = ~crc;
    for (size_t i = 0; i < len; ++i) {
        crc ^= data[i];
        for (int k = 0; k < 8; ++k) {
            const uint32_t m = -(crc & 1u);
            crc = (crc >> 1) ^ (0xEDB88320u & m);
        }
    }
    return ~crc;
}

static uint32_t adler32(const uint8_t* data, size_t len) {
    uint32_t a = 1;
    uint32_t b = 0;
    for (size_t i = 0; i < len; ++i) {
        a = (a + data[i]) % 65521u;
        b = (b + a) % 65521u;
    }
    return (b << 16) | a;
}

static void write_chunk(std::ofstream& out, const char type[4], const std::vector<uint8_t>& payload) {
    write_be32(out, static_cast<uint32_t>(payload.size()));
    out.write(type, 4);
    if (!payload.empty()) out.write(reinterpret_cast<const char*>(payload.data()), static_cast<std::streamsize>(payload.size()));
    uint32_t crc = crc32_update(0, reinterpret_cast<const uint8_t*>(type), 4);
    if (!payload.empty()) crc = crc32_update(crc, payload.data(), payload.size());
    write_be32(out, crc);
}

bool dump_frame_ppm(const std::string& path, const uint32_t* argb, int width, int height) {
    std::ofstream out(path, std::ios::binary);
    if (!out) return false;

    out << "P6\n" << width << " " << height << "\n255\n";
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            uint32_t p = argb[y * width + x];
            char rgb[3] = {
                static_cast<char>((p >> 16) & 0xFF),
                static_cast<char>((p >> 8) & 0xFF),
                static_cast<char>(p & 0xFF)
            };
            out.write(rgb, 3);
        }
    }
    return true;
}

bool dump_frame_png(const std::string& path, const uint32_t* argb, int width, int height) {
    if (width <= 0 || height <= 0) return false;

    std::ofstream out(path, std::ios::binary);
    if (!out) return false;

    const uint8_t sig[8] = {0x89, 'P', 'N', 'G', '\r', '\n', 0x1A, '\n'};
    out.write(reinterpret_cast<const char*>(sig), 8);

    std::vector<uint8_t> ihdr(13, 0);
    ihdr[0] = static_cast<uint8_t>((width >> 24) & 0xFF);
    ihdr[1] = static_cast<uint8_t>((width >> 16) & 0xFF);
    ihdr[2] = static_cast<uint8_t>((width >> 8) & 0xFF);
    ihdr[3] = static_cast<uint8_t>(width & 0xFF);
    ihdr[4] = static_cast<uint8_t>((height >> 24) & 0xFF);
    ihdr[5] = static_cast<uint8_t>((height >> 16) & 0xFF);
    ihdr[6] = static_cast<uint8_t>((height >> 8) & 0xFF);
    ihdr[7] = static_cast<uint8_t>(height & 0xFF);
    ihdr[8] = 8;  // bit depth
    ihdr[9] = 2;  // RGB
    ihdr[10] = 0; // compression
    ihdr[11] = 0; // filter
    ihdr[12] = 0; // interlace
    write_chunk(out, "IHDR", ihdr);

    const size_t row_bytes = static_cast<size_t>(width) * 3u + 1u;
    std::vector<uint8_t> raw(row_bytes * static_cast<size_t>(height), 0);
    for (int y = 0; y < height; ++y) {
        size_t base = static_cast<size_t>(y) * row_bytes;
        raw[base] = 0; // filter type 0
        for (int x = 0; x < width; ++x) {
            uint32_t p = argb[y * width + x];
            raw[base + 1 + x * 3 + 0] = static_cast<uint8_t>((p >> 16) & 0xFF);
            raw[base + 1 + x * 3 + 1] = static_cast<uint8_t>((p >> 8) & 0xFF);
            raw[base + 1 + x * 3 + 2] = static_cast<uint8_t>(p & 0xFF);
        }
    }

    std::vector<uint8_t> z;
    z.reserve(raw.size() + raw.size() / 65535u * 5u + 6u);
    z.push_back(0x78);
    z.push_back(0x01);

    size_t off = 0;
    while (off < raw.size()) {
        const size_t remain = raw.size() - off;
        const uint16_t block_len = static_cast<uint16_t>(remain > 65535u ? 65535u : remain);
        const bool final = (off + block_len) >= raw.size();
        z.push_back(final ? 0x01 : 0x00); // BFINAL + BTYPE=00
        z.push_back(static_cast<uint8_t>(block_len & 0xFF));
        z.push_back(static_cast<uint8_t>((block_len >> 8) & 0xFF));
        const uint16_t nlen = static_cast<uint16_t>(~block_len);
        z.push_back(static_cast<uint8_t>(nlen & 0xFF));
        z.push_back(static_cast<uint8_t>((nlen >> 8) & 0xFF));
        z.insert(z.end(), raw.begin() + off, raw.begin() + off + block_len);
        off += block_len;
    }

    const uint32_t ad = adler32(raw.data(), raw.size());
    z.push_back(static_cast<uint8_t>((ad >> 24) & 0xFF));
    z.push_back(static_cast<uint8_t>((ad >> 16) & 0xFF));
    z.push_back(static_cast<uint8_t>((ad >> 8) & 0xFF));
    z.push_back(static_cast<uint8_t>(ad & 0xFF));
    write_chunk(out, "IDAT", z);

    const std::vector<uint8_t> iend;
    write_chunk(out, "IEND", iend);
    return true;
}

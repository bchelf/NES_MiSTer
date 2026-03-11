#pragma once

#include <cstdint>
#include <string>

bool dump_frame_ppm(const std::string& path, const uint32_t* argb, int width, int height);
bool dump_frame_png(const std::string& path, const uint32_t* argb, int width, int height);

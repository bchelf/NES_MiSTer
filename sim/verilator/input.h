#pragma once

#include <cstdint>

struct InputState {
    // NES normalized bit order:
    // bit0 A, bit1 B, bit2 Select, bit3 Start, bit4 Up, bit5 Down, bit6 Left, bit7 Right
    uint8_t p1 = 0;
    bool quit = false;
};

bool input_init();
void input_poll(InputState& st);

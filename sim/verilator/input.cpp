#include "input.h"

#include <SDL.h>

bool input_init() {
    return SDL_InitSubSystem(SDL_INIT_EVENTS) == 0;
}

static inline void set_btn(uint8_t& p1, int bit, bool on) {
    if (on) p1 |= static_cast<uint8_t>(1u << bit);
    else p1 &= static_cast<uint8_t>(~(1u << bit));
}

void input_poll(InputState& st) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            st.quit = true;
            continue;
        }

        if (e.type != SDL_KEYDOWN && e.type != SDL_KEYUP) continue;

        const bool down = (e.type == SDL_KEYDOWN);
        switch (e.key.keysym.sym) {
            case SDLK_ESCAPE: if (down) st.quit = true; break;
            case SDLK_w: set_btn(st.p1, 4, down); break; // Up
            case SDLK_a: set_btn(st.p1, 6, down); break; // Left
            case SDLK_s: set_btn(st.p1, 5, down); break; // Down
            case SDLK_d: set_btn(st.p1, 7, down); break; // Right
            case SDLK_k: set_btn(st.p1, 1, down); break; // B
            case SDLK_l: set_btn(st.p1, 0, down); break; // A
            case SDLK_LEFTBRACKET: set_btn(st.p1, 2, down); break; // Select
            case SDLK_RIGHTBRACKET: set_btn(st.p1, 3, down); break; // Start
            default: break;
        }
    }
}

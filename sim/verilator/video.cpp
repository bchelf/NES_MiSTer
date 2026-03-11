#include "video.h"

#include <algorithm>
#include <cstring>

#include <SDL.h>

VideoOut::VideoOut(const VideoConfig& cfg) : cfg_(cfg), fb_(cfg.width * cfg.height, 0xFF000000u) {
    if (cfg_.headless) {
        ok_ = true;
        return;
    }

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        return;
    }

    SDL_Window* win = SDL_CreateWindow(
        "NES_MiSTer Verilator",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        cfg_.width * cfg_.scale,
        cfg_.height * cfg_.scale,
        SDL_WINDOW_SHOWN
    );
    if (!win) return;

    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!ren) {
        SDL_DestroyWindow(win);
        return;
    }

    SDL_Texture* tex = SDL_CreateTexture(
        ren,
        SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING,
        cfg_.width,
        cfg_.height
    );
    if (!tex) {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        return;
    }

    window_ = win;
    renderer_ = ren;
    texture_ = tex;
    ok_ = true;
}

VideoOut::~VideoOut() {
    if (!cfg_.headless) {
        if (texture_) SDL_DestroyTexture(static_cast<SDL_Texture*>(texture_));
        if (renderer_) SDL_DestroyRenderer(static_cast<SDL_Renderer*>(renderer_));
        if (window_) SDL_DestroyWindow(static_cast<SDL_Window*>(window_));
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
}

void VideoOut::clear(uint32_t argb) {
    std::fill(fb_.begin(), fb_.end(), argb);
}

void VideoOut::set_pixel(int x, int y, uint32_t argb) {
    if (x < 0 || y < 0 || x >= cfg_.width || y >= cfg_.height) return;
    fb_[static_cast<size_t>(y) * cfg_.width + static_cast<size_t>(x)] = argb;
}

uint32_t VideoOut::get_pixel(int x, int y) const {
    if (x < 0 || y < 0 || x >= cfg_.width || y >= cfg_.height) return 0xFF000000u;
    return fb_[static_cast<size_t>(y) * cfg_.width + static_cast<size_t>(x)];
}

void VideoOut::present() {
    if (cfg_.headless) return;

    SDL_Texture* tex = static_cast<SDL_Texture*>(texture_);
    SDL_Renderer* ren = static_cast<SDL_Renderer*>(renderer_);

    SDL_UpdateTexture(tex, nullptr, fb_.data(), cfg_.width * static_cast<int>(sizeof(uint32_t)));
    SDL_RenderClear(ren);
    SDL_RenderCopy(ren, tex, nullptr, nullptr);
    SDL_RenderPresent(ren);
}

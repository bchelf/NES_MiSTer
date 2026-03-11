#pragma once

#include <cstdint>
#include <vector>

struct VideoConfig {
    int width = 256;
    int height = 240;
    int scale = 4;
    bool headless = false;
};

class VideoOut {
public:
    explicit VideoOut(const VideoConfig& cfg);
    ~VideoOut();

    bool ok() const { return ok_; }
    int width() const { return cfg_.width; }
    int height() const { return cfg_.height; }

    void clear(uint32_t argb = 0xFF101010u);
    void set_pixel(int x, int y, uint32_t argb);
    inline void set_pixel_unchecked(int x, int y, uint32_t argb) {
        fb_[static_cast<size_t>(y) * cfg_.width + static_cast<size_t>(x)] = argb;
    }
    uint32_t get_pixel(int x, int y) const;
    void present();

    const uint32_t* framebuffer() const { return fb_.data(); }

private:
    VideoConfig cfg_{};
    std::vector<uint32_t> fb_;
    bool ok_ = false;

    void* window_ = nullptr;
    void* renderer_ = nullptr;
    void* texture_ = nullptr;
};

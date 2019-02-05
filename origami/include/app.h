#ifndef __APP_H__
#define __APP_H__

#include "input.h"
#include "basic_tuples.h"

struct Device {
    f32 camera[4][4];
    // Hide the glfwWindow behind a void* to avoid polluting with glfw and gl functions
    f32 dt;
    void* _glfw;
};

struct App {

    struct Device device;
};

void app_on_device_init(struct App* self);

void app_on_key_event(struct App* self, EventState state, KeyData data);

void app_on_touch_event(struct App* self, EventState state, struct f64_2t pos);

void app_on_file_dropped(struct App* self, const char* filename, const char* ext);

void app_on_window_resized(struct App* self, struct u32_2t size);

#endif // __APP_H__

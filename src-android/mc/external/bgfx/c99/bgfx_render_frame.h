#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_render_frame : uint {
    BGFX_RENDER_FRAME_NO_CONTEXT = 0,
    BGFX_RENDER_FRAME_RENDER     = 1,
    BGFX_RENDER_FRAME_TIMEOUT    = 2,
    BGFX_RENDER_FRAME_EXITING    = 3,
    BGFX_RENDER_FRAME_COUNT      = 4,
};

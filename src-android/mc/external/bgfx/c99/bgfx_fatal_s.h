#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_fatal_s : uint {
    BGFX_FATAL_DEBUG_CHECK              = 0,
    BGFX_FATAL_INVALID_SHADER           = 1,
    BGFX_FATAL_UNABLE_TO_INITIALIZE     = 2,
    BGFX_FATAL_UNABLE_TO_CREATE_TEXTURE = 3,
    BGFX_FATAL_DEVICE_LOST              = 4,
    BGFX_FATAL_COUNT                    = 5,
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum bgfx_fatal_s : uint {
    BGFX_FATAL_DEBUG_CHECK              = 0,
    BGFX_FATAL_INVALID_SHADER           = 1,
    BGFX_FATAL_UNABLE_TO_INITIALIZE     = 2,
    BGFX_FATAL_UNABLE_TO_CREATE_TEXTURE = 3,
    BGFX_FATAL_DEVICE_LOST              = 4,
    BGFX_FATAL_COUNT                    = 5,
};
#else // @header-generator platform
enum class bgfx_fatal_s : int {};
#endif // @header-generator platform

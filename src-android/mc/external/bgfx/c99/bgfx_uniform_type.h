#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_uniform_type : uint {
    BGFX_UNIFORM_TYPE_INT1  = 0,
    BGFX_UNIFORM_TYPE_END   = 1,
    BGFX_UNIFORM_TYPE_VEC4  = 2,
    BGFX_UNIFORM_TYPE_MAT3  = 3,
    BGFX_UNIFORM_TYPE_MAT4  = 4,
    BGFX_UNIFORM_TYPE_COUNT = 5,
};

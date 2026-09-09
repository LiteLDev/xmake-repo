#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_backbuffer_ratio : uint {
    BGFX_BACKBUFFER_RATIO_EQUAL     = 0,
    BGFX_BACKBUFFER_RATIO_HALF      = 1,
    BGFX_BACKBUFFER_RATIO_QUARTER   = 2,
    BGFX_BACKBUFFER_RATIO_EIGHTH    = 3,
    BGFX_BACKBUFFER_RATIO_SIXTEENTH = 4,
    BGFX_BACKBUFFER_RATIO_DOUBLE    = 5,
    BGFX_BACKBUFFER_RATIO_COUNT     = 6,
};

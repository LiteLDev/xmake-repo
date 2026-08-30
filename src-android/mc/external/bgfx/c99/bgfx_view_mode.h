#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_view_mode : uint {
    BGFX_VIEW_MODE_DEFAULT          = 0,
    BGFX_VIEW_MODE_SEQUENTIAL       = 1,
    BGFX_VIEW_MODE_DEPTH_ASCENDING  = 2,
    BGFX_VIEW_MODE_DEPTH_DESCENDING = 3,
    BGFX_VIEW_MODE_CCOUNT           = 4,
};

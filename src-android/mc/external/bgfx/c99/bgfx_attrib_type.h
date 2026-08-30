#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_attrib_type : uint {
    BGFX_ATTRIB_TYPE_UINT8  = 0,
    BGFX_ATTRIB_TYPE_INT8   = 1,
    BGFX_ATTRIB_TYPE_UINT10 = 2,
    BGFX_ATTRIB_TYPE_UINT16 = 3,
    BGFX_ATTRIB_TYPE_INT16  = 4,
    BGFX_ATTRIB_TYPE_HALF   = 5,
    BGFX_ATTRIB_TYPE_FLOAT  = 6,
    BGFX_ATTRIB_TYPE_COUNT  = 7,
};

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_attrib : uint {
    BGFX_ATTRIB_POSITION  = 0,
    BGFX_ATTRIB_NORMAL    = 1,
    BGFX_ATTRIB_TANGENT   = 2,
    BGFX_ATTRIB_BITANGENT = 3,
    BGFX_ATTRIB_COLOR0    = 4,
    BGFX_ATTRIB_COLOR1    = 5,
    BGFX_ATTRIB_COLOR2    = 6,
    BGFX_ATTRIB_COLOR3    = 7,
    BGFX_ATTRIB_INDICES   = 8,
    BGFX_ATTRIB_WEIGHT    = 9,
    BGFX_ATTRIB_TEXCOORD0 = 10,
    BGFX_ATTRIB_TEXCOORD1 = 11,
    BGFX_ATTRIB_TEXCOORD2 = 12,
    BGFX_ATTRIB_TEXCOORD3 = 13,
    BGFX_ATTRIB_TEXCOORD4 = 14,
    BGFX_ATTRIB_TEXCOORD5 = 15,
    BGFX_ATTRIB_TEXCOORD6 = 16,
    BGFX_ATTRIB_TEXCOORD7 = 17,
    BGFX_ATTRIB_TEXCOORD8 = 18,
    BGFX_ATTRIB_COUNT     = 19,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

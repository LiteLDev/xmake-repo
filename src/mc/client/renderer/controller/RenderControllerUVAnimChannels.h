#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RenderControllerUVAnimChannels : int {
    offset_x = 0,
    offset_y = 1,
    scale_x  = 2,
    scale_y  = 3,
    Count    = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RenderControllerUVAnimChannels : int {
    OffsetX = 0,
    OffsetY = 1,
    ScaleX  = 2,
    ScaleY  = 3,
    Count   = 4,
};
#else // @header-generator platform
enum class RenderControllerUVAnimChannels : int {};
#endif // @header-generator platform
#endif // @header-generator platform

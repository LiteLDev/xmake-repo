#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class RtBufferSizes : int {
    Display         = 0,
    Render          = 1,
    QuarterDisplay  = 2,
    HalfDisplay     = 3,
    QuarterRender   = 4,
    HalfRender      = 5,
    ToneCurve       = 6,
    SixteenthRender = 7,
    Custom          = 8,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtMediaType : int {
    Water = 0,
    Glass = 1,
    Air   = 2,
    Cloud = 3,
    Solid = 4,
    Count = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

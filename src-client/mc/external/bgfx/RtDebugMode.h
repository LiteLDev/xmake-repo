#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtDebugMode : int {
    None       = 0,
    Diffuse    = 1,
    Specular   = 2,
    Refraction = 3,
    Count      = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

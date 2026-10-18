#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TerrainVariation : int {
    Base       = 0,
    Fog        = 1,
    Lit        = 2,
    Fading     = 3,
    Shadow     = 4,
    Underwater = 5,
    Underlava  = 6,
    Water      = 7,
    Count      = 8,
};
#else // @header-generator platform
enum class TerrainVariation : int {};
#endif // @header-generator platform

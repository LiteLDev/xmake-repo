#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FoliageColorClient {

enum class FoliagePalette : uint64 {
    Foliage              = 0,
    Birch                = 1,
    Evergreen            = 2,
    MangroveSwampFoliage = 3,
    SwampFoliage         = 4,
    DryFoliage           = 5,
    Count                = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

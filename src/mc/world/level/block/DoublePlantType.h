#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DoublePlantType : int {
    Sunflower = 0,
    Syringa   = 1,
    Grass     = 2,
    Fern      = 3,
    Rose      = 4,
    Paeonia   = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 6,
#else // @header-generator platform
    Count     = 6,
#endif // @header-generator platform
};

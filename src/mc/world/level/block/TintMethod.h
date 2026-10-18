#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TintMethod : uchar {
    None             = 0,
    DefaultFoliage   = 1,
    BirchFoliage     = 2,
    EvergreenFoliage = 3,
    DryFoliage       = 4,
    Grass            = 5,
    Water            = 6,
    Stem             = 7,
    RedStoneWire     = 8,
#if defined(LL_PLAT_A) // @header-generator platform
    _Size            = 9,
#else // @header-generator platform
    Size             = 9,
#endif // @header-generator platform
};

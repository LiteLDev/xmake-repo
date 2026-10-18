#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NewWoodType : uchar {
    Mangrove = 6,
    Bamboo   = 7,
    Cherry   = 8,
    PaleOak  = 9,
    Poplar   = 10,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 11,
#else // @header-generator platform
    Count    = 11,
#endif // @header-generator platform
};

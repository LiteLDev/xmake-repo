#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils::Sapling {

enum SaplingMapping : uint64 {
    Oak     = 0,
    Spruce  = 1,
    Birch   = 2,
    Jungle  = 3,
    Acacia  = 4,
    DarkOak = 5,
    _count  = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

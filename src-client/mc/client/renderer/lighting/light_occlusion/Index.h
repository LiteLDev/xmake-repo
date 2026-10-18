#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightOcclusion::Octant {

enum Index : uint {
    INDEX_000 = 0,
    INDEX_001 = 1,
    INDEX_010 = 2,
    INDEX_011 = 3,
    INDEX_100 = 4,
    INDEX_101 = 5,
    INDEX_110 = 6,
    INDEX_111 = 7,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

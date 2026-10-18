#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils::Leaves {

enum LeavesMapping : uint64 {
    Oak    = 0,
    Spruce = 1,
    Birch  = 2,
    Jungle = 3,
    _count = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

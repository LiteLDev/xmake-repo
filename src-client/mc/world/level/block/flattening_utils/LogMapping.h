#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils::Log {

enum LogMapping : uint64 {
    Oak        = 0,
    Spruce     = 1,
    Birch      = 2,
    Jungle     = 3,
    OakWood    = 4,
    SpruceWood = 5,
    BirchWood  = 6,
    JungleWood = 7,
    _count     = 8,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

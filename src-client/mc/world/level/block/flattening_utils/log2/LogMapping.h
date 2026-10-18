#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils::Log2 {

enum LogMapping : uint64 {
    Acacia      = 0,
    DarkOak     = 1,
    AcaciaWood  = 2,
    DarkOakWood = 3,
    _count      = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

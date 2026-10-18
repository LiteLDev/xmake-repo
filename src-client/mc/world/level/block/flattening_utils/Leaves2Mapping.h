#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils::Leaves2 {

enum Leaves2Mapping : uint64 {
    Acacia  = 0,
    DarkOak = 1,
    _count  = 2,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

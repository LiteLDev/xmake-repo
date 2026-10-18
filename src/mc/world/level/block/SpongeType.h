#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SpongeType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Dry    = 0,
    Wet    = 1,
    _count = 2,
#else // @header-generator platform
    Dry   = 0,
    Wet   = 1,
    Count = 2,
#endif // @header-generator platform
};

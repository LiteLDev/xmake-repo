#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CopperType : uchar {
    Default   = 0,
    Exposed   = 1,
    Weathered = 2,
    Oxidized  = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count    = 4,
#else // @header-generator platform
    Count     = 4,
#endif // @header-generator platform
};

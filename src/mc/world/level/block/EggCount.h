#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EggCount : uint {
    OneEgg   = 0,
    TwoEgg   = 1,
    ThreeEgg = 2,
    FourEgg  = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count   = 4,
#else // @header-generator platform
    Count    = 4,
#endif // @header-generator platform
};

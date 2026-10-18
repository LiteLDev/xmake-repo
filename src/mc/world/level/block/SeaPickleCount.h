#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SeaPickleCount : int {
#if defined(LL_PLAT_A) // @header-generator platform
    One_Pickle   = 0,
    Two_Pickle   = 1,
    Three_Pickle = 2,
    Four_Pickle  = 3,
    _count       = 4,
#else // @header-generator platform
    OnePickle   = 0,
    TwoPickle   = 1,
    ThreePickle = 2,
    FourPickle  = 3,
    Count       = 4,
#endif // @header-generator platform
};

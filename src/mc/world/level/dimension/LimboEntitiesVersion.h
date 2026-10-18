#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LimboEntitiesVersion : uchar {
    v0        = 0,
    v1_8_0    = 1,
    v1_10_0   = 2,
    v1_12_0   = 3,
    v1_16_210 = 4,
#else // @header-generator platform
enum class LimboEntitiesVersion : schar {
    V0        = 0,
    V1_8_0    = 1,
    V1_10_0   = 2,
    V1_12_0   = 3,
    V1_16_210 = 4,
#endif // @header-generator platform
};

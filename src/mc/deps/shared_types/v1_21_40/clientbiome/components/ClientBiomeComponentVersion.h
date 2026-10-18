#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientBiomeComponentVersion : int {
#if defined(LL_PLAT_A) // @header-generator platform
    v1_21_40  = 0,
    v1_21_70  = 1,
    v1_21_80  = 2,
    v1_21_100 = 3,
    v1_21_110 = 4,
    v1_21_120 = 5,
    v1_21_130 = 6,
    _count    = 7,
#else // @header-generator platform
    V1_21_40  = 0,
    V1_21_70  = 1,
    V1_21_80  = 2,
    V1_21_100 = 3,
    V1_21_110 = 4,
    V1_21_120 = 5,
    V1_21_130 = 6,
    Count     = 7,
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlendVersion : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    v1_19_0   = 0,
    v1_19_0_1 = 1,
    v1_19_0_2 = 2,
    v1_19_0_3 = 3,
    v1_20_0   = 4,
    v1_20_0_1 = 5,
    v1_21_50  = 6,
    v1_21_60  = 7,
    v1_21_100 = 8,
    v1_26_30  = 9,
    v1_26_40  = 10,
#else // @header-generator platform
    V1_19_0   = 0,
    V1_19_0_1 = 1,
    V1_19_0_2 = 2,
    V1_19_0_3 = 3,
    V1_20_0   = 4,
    V1_20_0_1 = 5,
    V1_21_50  = 6,
    V1_21_60  = 7,
    V1_21_100 = 8,
    V1_26_30  = 9,
    V1_26_40  = 10,
#endif // @header-generator platform
};

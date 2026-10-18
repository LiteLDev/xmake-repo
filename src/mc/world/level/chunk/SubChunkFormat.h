#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubChunkFormat : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    v17_0                  = 0,
    v1_3_0                 = 1,
    v17_0_badly_converted1 = 2,
    v17_0_badly_converted2 = 3,
    v17_0_badly_converted3 = 4,
    v17_0_badly_converted4 = 5,
    v17_0_badly_converted5 = 6,
    v17_0_badly_converted6 = 7,
    v1_3_0_2               = 8,
    v1_3_0_3               = 9,
#else // @header-generator platform
    V17_0                = 0,
    V1_3_0               = 1,
    V17_0BadlyConverted1 = 2,
    V17_0BadlyConverted2 = 3,
    V17_0BadlyConverted3 = 4,
    V17_0BadlyConverted4 = 5,
    V17_0BadlyConverted5 = 6,
    V17_0BadlyConverted6 = 7,
    V1_3_0_2             = 8,
    V1_3_0_3             = 9,
#endif // @header-generator platform
};

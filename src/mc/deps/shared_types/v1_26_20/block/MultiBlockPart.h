#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class MultiBlockPart : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Part0  = 0,
    Part1  = 1,
    Part2  = 2,
    Part3  = 3,
    _Count = 4,
#else // @header-generator platform
    Part0 = 0,
    Part1 = 1,
    Part2 = 2,
    Part3 = 3,
    Count = 4,
#endif // @header-generator platform
};

}

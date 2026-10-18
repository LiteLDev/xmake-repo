#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CharRangeOpEnum : int {
    Union = 0,
    Inter = 1,
    Xor   = 2,
};
#endif // @header-generator platform

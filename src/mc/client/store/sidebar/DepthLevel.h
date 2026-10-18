#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DepthLevel : uchar {
    Level_Root    = 0,
    Level_0       = 1,
    Level_1       = 2,
    Level_2       = 3,
    Level_3       = 4,
    Level_4       = 5,
    Level_Invalid = 6,
};
#else // @header-generator platform
enum class DepthLevel : schar {};
#endif // @header-generator platform

}

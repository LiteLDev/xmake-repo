#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SplitScreenDirection : int {
    Horizontal = 0,
    Vertical   = 1,
    Count      = 2,
};
#else // @header-generator platform
enum class SplitScreenDirection : int {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TopButtonScales : int {
    Small  = 0,
    Medium = 1,
    Big    = 2,
};
#else // @header-generator platform
enum class TopButtonScales : int {};
#endif // @header-generator platform

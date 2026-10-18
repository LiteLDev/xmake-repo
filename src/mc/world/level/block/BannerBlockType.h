#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BannerBlockType : int {
    Default        = 0,
    IllagerCaptain = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    _count         = 2,
#else // @header-generator platform
    Count          = 2,
#endif // @header-generator platform
};

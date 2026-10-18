#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BannerType : int {
    NOT_SPECIFIED      = 0,
    ONLY_DURING_SALE   = 1,
    WHILE_TIMER_ACTIVE = 2,
    ALWAYS_ON          = 3,
};
#else // @header-generator platform
enum class BannerType : int {};
#endif // @header-generator platform

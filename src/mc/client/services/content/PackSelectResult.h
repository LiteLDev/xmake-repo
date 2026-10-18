#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PackSelectResult : int {
    Success             = 0,
    NoStore             = 1,
    DataWarning         = 2,
    AchievementWarning  = 3,
    MissingDependency   = 4,
    RequiredDependency  = 5,
    Upsell              = 6,
    IncompatibleContent = 7,
    Unknown             = 8,
};
#else // @header-generator platform
enum class PackSelectResult : int {};
#endif // @header-generator platform

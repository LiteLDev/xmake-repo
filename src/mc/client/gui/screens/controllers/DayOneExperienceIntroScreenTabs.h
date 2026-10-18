#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DayOneExperienceIntroScreenTabs : int {
    Landing       = 0,
    Marketplace   = 1,
    CrossPlatform = 2,
    Realms        = 3,
    Villager      = 4,
    Count         = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DayOneExperienceIntroScreenTabs : int {
    Landing       = 0,
    Marketplace   = 1,
    CrossPlatform = 2,
    Realms        = 3,
    Villager      = 4,
    Count         = 5,
};
#else // @header-generator platform
enum class DayOneExperienceIntroScreenTabs : int {};
#endif // @header-generator platform
#endif // @header-generator platform

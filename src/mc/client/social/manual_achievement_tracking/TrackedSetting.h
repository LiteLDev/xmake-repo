#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ManualAchievementTracking {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TrackedSetting : int {
    None      = 0,
    Tracked   = 1,
    Untracked = 2,
};
#else // @header-generator platform
enum class TrackedSetting : int {};
#endif // @header-generator platform

}

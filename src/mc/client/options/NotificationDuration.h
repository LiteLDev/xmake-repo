#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NotificationDuration : int {
    ThreeSeconds  = 0,
    TenSeconds    = 1,
    ThirtySeconds = 2,
};
#else // @header-generator platform
enum class NotificationDuration : int {};
#endif // @header-generator platform

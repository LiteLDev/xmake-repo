#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldPingStatus : int {
    Unavailable = 0,
    Low         = 1,
    Medium      = 2,
    High        = 3,
};
#else // @header-generator platform
enum class WorldPingStatus : int {};
#endif // @header-generator platform

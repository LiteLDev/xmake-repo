#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayScreenDefaultTab : int {
    World          = 0,
    Friends        = 1,
    Servers        = 2,
    LastLegacyTab  = 2,
    Realms         = 3,
    Projects       = 4,
    ProjectServers = 5,
    Count          = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PlayScreenDefaultTab : int {
    World          = 0,
    Friends        = 1,
    Servers        = 2,
    LastLegacyTab  = 2,
    Realms         = 3,
    Projects       = 4,
    ProjectServers = 5,
    Count          = 6,
};
#else // @header-generator platform
enum class PlayScreenDefaultTab : int {};
#endif // @header-generator platform
#endif // @header-generator platform

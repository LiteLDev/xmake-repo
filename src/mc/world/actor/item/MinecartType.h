#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MinecartType : int {
    Rideable     = 0,
    Chest        = 1,
    Furnace      = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    TNT          = 3,
#else // @header-generator platform
    Tnt          = 3,
#endif // @header-generator platform
    Spawner      = 4,
    Hopper       = 5,
    CommandBlock = 6,
};

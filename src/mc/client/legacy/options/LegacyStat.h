#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LegacyStat : int {
    WOLVES_BEFRIENDED    = 0,
    TIME_PLAYED          = 1,
    TOOLS_CRAFTED        = 2,
    EMERALDS_OBTAINED    = 3,
    EMERALDS_TRADED      = 4,
    RAINBOW_COLLECTION   = 5,
    BIOMES_VISITED       = 6,
    ARMOR_DYED           = 7,
    CATS_BEFRIENDED      = 8,
    OCEAN_BIOMES_VISITED = 9,
};
#else // @header-generator platform
enum class LegacyStat : int {};
#endif // @header-generator platform

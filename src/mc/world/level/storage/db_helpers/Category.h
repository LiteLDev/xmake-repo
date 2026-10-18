#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DBHelpers {

enum class Category : uint {
    Uncategorized    = 0,
    Actor            = 1,
    Biome            = 2,
    Block            = 3,
    Chunk            = 4,
    Dimension        = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    EDU              = 6,
#else // @header-generator platform
    Edu              = 6,
#endif // @header-generator platform
    Item             = 7,
    Player           = 8,
    Realms           = 9,
    TickingArea      = 10,
    VolumeArea       = 11,
    WorldFeature     = 12,
    ForcedCorruption = 13,
    Count            = 14,
    All              = 15,
};

}

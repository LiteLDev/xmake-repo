#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClientSideItemSortType : int {
    StorePriority      = 0,
    AtoZ               = 1,
    ZtoA               = 2,
    LeastPacksIncluded = 3,
    Random             = 4,
    None               = 5,
};
#else // @header-generator platform
enum class ClientSideItemSortType : int {};
#endif // @header-generator platform

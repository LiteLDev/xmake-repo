#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_topology_sort : uint {
    BGFX_TOPOLOGY_SORT_DIRECTION_FRONT_TO_BACK_MIN = 0,
    BGFX_TOPOLOGY_SORT_DIRECTION_FRONT_TO_BACK_AVG = 1,
    BGFX_TOPOLOGY_SORT_DIRECTION_FRONT_TO_BACK_MAX = 2,
    BGFX_TOPOLOGY_SORT_DIRECTION_BACK_TO_FRONT_MIN = 3,
    BGFX_TOPOLOGY_SORT_DIRECTION_BACK_TO_FRONT_AVG = 4,
    BGFX_TOPOLOGY_SORT_DIRECTION_BACK_TO_FRONT_MAX = 5,
    BGFX_TOPOLOGY_SORT_DISTANCE_FRONT_TO_BACK_MIN  = 6,
    BGFX_TOPOLOGY_SORT_DISTANCE_FRONT_TO_BACK_AVG  = 7,
    BGFX_TOPOLOGY_SORT_DISTANCE_FRONT_TO_BACK_MAX  = 8,
    BGFX_TOPOLOGY_SORT_DISTANCE_BACK_TO_FRONT_MIN  = 9,
    BGFX_TOPOLOGY_SORT_DISTANCE_BACK_TO_FRONT_AVG  = 10,
    BGFX_TOPOLOGY_SORT_DISTANCE_BACK_TO_FRONT_MAX  = 11,
    BGFX_TOPOLOGY_SORT_COUNT                       = 12,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

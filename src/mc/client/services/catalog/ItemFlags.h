#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ItemFlags : uint {
    // bitfield representation
    None               = 0,
    Featured           = 1u << 0,
    InsufficientMemory = 1u << 1,
    New                = 1u << 2,
    Owned              = 1u << 3,
    RTX                = 1u << 4,
    Sale               = 1u << 5,
    Trending           = 1u << 6,
    Editorial          = 1u << 7,
    MAX                = 1u << 8,
};
#else // @header-generator platform
enum class ItemFlags : uint {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentType : uint64 {
    None           = 0,
    World          = 1,
    WorldTemplate  = 2,
    Resource       = 3,
    Behavior       = 4,
    Skin           = 5,
    ItemCollection = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ContentType : uint64 {
    None           = 0,
    World          = 1,
    WorldTemplate  = 2,
    Resource       = 3,
    Behavior       = 4,
    Skin           = 5,
    ItemCollection = 6,
};
#else // @header-generator platform
enum class ContentType : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform

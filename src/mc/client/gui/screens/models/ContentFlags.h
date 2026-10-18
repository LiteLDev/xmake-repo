#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentFlags : uint64 {
    // bitfield representation
    None         = 0,
    Cached       = 1ull << 0,
    Invalid      = 1ull << 1,
    Filtered     = 1ull << 2,
    WorldContent = 1ull << 3,
    Usable       = 1ull << 4,
    All          = Cached | Invalid | Filtered | WorldContent | Usable,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ContentFlags : uint64 {
    // bitfield representation
    None         = 0,
    Cached       = 1ull << 0,
    Invalid      = 1ull << 1,
    Filtered     = 1ull << 2,
    WorldContent = 1ull << 3,
    Usable       = 1ull << 4,
    All          = Cached | Invalid | Filtered | WorldContent | Usable,
};
#else // @header-generator platform
enum class ContentFlags : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ContentItemType : uint64 {
    // bitfield representation
    None            = 1ull << 1,
    World           = 1ull << 2,
    InvalidResource = 1ull << 3,
    Manifest        = 1ull << 4,
    WorldTemplate   = 1ull << 5,
    PackContent     = 1ull << 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ContentItemType : uint64 {
    // bitfield representation
    None            = 1ull << 1,
    World           = 1ull << 2,
    InvalidResource = 1ull << 3,
    Manifest        = 1ull << 4,
    WorldTemplate   = 1ull << 5,
    PackContent     = 1ull << 6,
};
#else // @header-generator platform
enum class ContentItemType : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform

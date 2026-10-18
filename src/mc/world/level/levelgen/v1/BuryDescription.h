#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class BuryDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> mCachedPieceBounds;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BuryDescription& operator=(BuryDescription const&);
    BuryDescription();
#else // @header-generator platform
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace BlockBreadthFirst {

struct BlockNeighbor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<1, 1, uchar>       mFace;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkba004d;
    ::ll::UntypedStorage<1, 1>  mUnk3b4565;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockNeighbor& operator=(BlockNeighbor const&);
    BlockNeighbor(BlockNeighbor const&);
    BlockNeighbor();
#endif // @header-generator platform
};

} // namespace BlockBreadthFirst

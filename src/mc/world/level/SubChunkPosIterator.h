#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"

class SubChunkPosIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos const> mMinCorner;
    ::ll::TypedStorage<4, 12, ::SubChunkPos const> mMaxCorner;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>       mCurrentPos;
    ::ll::TypedStorage<1, 1, bool>                 mDone;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SubChunkPosIterator();
#else // @header-generator platform
#endif // @header-generator platform
};

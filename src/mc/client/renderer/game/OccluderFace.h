#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"

struct OccluderFace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos> mPos;
    ::ll::TypedStorage<1, 1, uchar>          mFacing;
    // NOLINTEND

public:
    // prevent constructor by default
    OccluderFace& operator=(OccluderFace const&);
    OccluderFace();
};
#else // @header-generator platform
struct OccluderFace {};
#endif // @header-generator platform

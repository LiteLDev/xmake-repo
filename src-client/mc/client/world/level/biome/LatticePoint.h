#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct LatticePoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>       mWeightCount;
    ::ll::TypedStorage<4, 16, int[4]>     mIds;
    ::ll::TypedStorage<4, 16, float[4]>   mWeights;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPointPos;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

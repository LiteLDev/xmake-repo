#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/world/level/BlockPos.h"

template <typename T>
class BlockDataFetchResult {
public:
    std::reference_wrapper<T const> mData;
    BlockPos                        mDataPos;
    uint32_t                        mDistanceSquared;
};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/BlendingBlockType.h"

namespace BlendingDataFactoryUtil {

struct BorderCellEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                           mHeightMapIndex;
    ::ll::TypedStorage<4, 4, int>                             mBlockX;
    ::ll::TypedStorage<4, 4, int>                             mBlockZ;
    ::ll::TypedStorage<8, 48, std::deque<int>>                mBlocksAbove;
    ::ll::TypedStorage<8, 24, std::vector<BlendingBlockType>> mBlockTypesAbove;
    ::ll::TypedStorage<4, 4, int>                             mLastBlockDensity;
    ::ll::TypedStorage<1, 1, bool>                            mFirstIteration;
    // NOLINTEND
};

} // namespace BlendingDataFactoryUtil

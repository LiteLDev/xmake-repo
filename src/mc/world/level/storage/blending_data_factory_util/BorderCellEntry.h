#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/storage/BlendingBlockType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace BlendingDataFactoryUtil {

struct BorderCellEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                           mHeightMapIndex;
    ::ll::TypedStorage<4, 4, int>                             mBlockX;
    ::ll::TypedStorage<4, 4, int>                             mBlockZ;
    ::ll::TypedStorage<8, 48, std::deque<int>>                mBlocksAbove;
    ::ll::TypedStorage<8, 24, std::vector<BlendingBlockType>> mBlockTypesAbove;
    ::ll::TypedStorage<4, 4, int>                             mLastBlockDensity;
    ::ll::TypedStorage<1, 1, bool>                            mFirstIteration;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk51705f;
    ::ll::UntypedStorage<4, 4>  mUnkf32a1b;
    ::ll::UntypedStorage<4, 4>  mUnk336062;
    ::ll::UntypedStorage<8, 40> mUnkd47888;
    ::ll::UntypedStorage<8, 24> mUnke3d22b;
    ::ll::UntypedStorage<4, 4>  mUnkbb7ad9;
    ::ll::UntypedStorage<1, 1>  mUnk92190e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BorderCellEntry& operator=(BorderCellEntry const&);
    BorderCellEntry(BorderCellEntry const&);
    BorderCellEntry();
#endif // @header-generator platform
};

} // namespace BlendingDataFactoryUtil

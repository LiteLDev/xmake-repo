#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategoryCounter.h"

struct LowMemoryReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                       mCurrentUsedBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mMaxUsedBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mLooseTextureBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mUICacheLiveTextureBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mUICacheOrphanedTextureBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mTerrainAtlasTextureBytes;
    ::ll::TypedStorage<8, 8, ulong>                                       mItemAtlasTextureBytes;
    ::ll::TypedStorage<4, 4, uint>                                        mRenderDistance;
    ::ll::TypedStorage<4, 4, uint>                                        mSimDistance;
    ::ll::TypedStorage<1, 1, bool>                                        mTextureCacheEnabled;
    ::ll::TypedStorage<8, 24, std::vector<Memory::MemoryCategoryCounter>> mCategoryCounters;
    // NOLINTEND
};

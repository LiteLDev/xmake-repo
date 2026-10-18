#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategoryCounter.h"
#else // @header-generator platform
#endif // @header-generator platform

struct LowMemoryReport {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk363604;
    ::ll::UntypedStorage<8, 8>  mUnkbe0b7d;
    ::ll::UntypedStorage<8, 8>  mUnkc37521;
    ::ll::UntypedStorage<8, 8>  mUnk15c21a;
    ::ll::UntypedStorage<8, 8>  mUnk4e2970;
    ::ll::UntypedStorage<8, 8>  mUnkc47b6d;
    ::ll::UntypedStorage<8, 8>  mUnkdbb356;
    ::ll::UntypedStorage<4, 4>  mUnk1f6cff;
    ::ll::UntypedStorage<4, 4>  mUnk2c58ea;
    ::ll::UntypedStorage<1, 1>  mUnkc33a19;
    ::ll::UntypedStorage<8, 24> mUnk9bb5c2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LowMemoryReport& operator=(LowMemoryReport const&);
    LowMemoryReport(LowMemoryReport const&);
    LowMemoryReport();
#endif // @header-generator platform
};

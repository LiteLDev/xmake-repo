#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/ResourceLoadMemoryCategoryStat.h"

namespace Bedrock::Resources {

struct ResourceLoadMemoryStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                                               mHighWaterInB;
    ::ll::TypedStorage<8, 8, long>                                                                mNetDeltaInB;
    ::ll::TypedStorage<8, 120, std::array<Bedrock::Resources::ResourceLoadMemoryCategoryStat, 5>> mCategories;
    ::ll::TypedStorage<8, 8, ulong>                                                               mAllocCount;
    ::ll::TypedStorage<8, 8, ulong>                                                               mFreeCount;
    ::ll::TypedStorage<8, 8, double>                                                              mPeakAllocRatePerS;
    ::ll::TypedStorage<1, 1, bool>                                                                mHasCategoryStats;
    ::ll::TypedStorage<1, 1, bool>                                                                mHasDetailedStats;
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

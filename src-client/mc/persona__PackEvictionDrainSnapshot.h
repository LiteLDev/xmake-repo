#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PackEvictionDrainSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>  mPassCount;
    ::ll::TypedStorage<8, 8, ulong>  mCacheSizeAtDrainStart;
    ::ll::TypedStorage<8, 8, ulong>  mEvictedTotal;
    ::ll::TypedStorage<8, 8, ulong>  mFailedTotal;
    ::ll::TypedStorage<8, 8, double> mDurationSec;
    ::ll::TypedStorage<1, 1, bool>   mAnyPassBatchLimited;
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

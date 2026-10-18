#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PackEvictionTelemetrySnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>  mCacheSizeBeforeEviction;
    ::ll::TypedStorage<8, 8, ulong>  mEvictedCount;
    ::ll::TypedStorage<8, 8, ulong>  mFailedCount;
    ::ll::TypedStorage<8, 8, ulong>  mProtectedCount;
    ::ll::TypedStorage<1, 1, bool>   mEvictionLimitedByBatch;
    ::ll::TypedStorage<8, 8, double> mDurationSec;
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

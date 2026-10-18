#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/persona__PackEvictionTarget.h"

namespace persona {

struct PackEvictionPass {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<persona::PackEvictionTarget>> mPendingEvictions;
    ::ll::TypedStorage<8, 24, std::vector<persona::PackEvictionTarget>> mCompletedEvictions;
    ::ll::TypedStorage<8, 8, ulong> mFailedCount;
    ::ll::TypedStorage<8, 8, ulong> mCacheSizeBeforeEviction;
    ::ll::TypedStorage<8, 8, ulong> mProtectedCount;
    ::ll::TypedStorage<1, 1, bool> mEvictionLimitedByBatch;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPassStartTime;
    // clang-format on
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PerfMetrics {

class Timer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSamples;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mLargestSample;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSmallestSample;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mTotalTime;
    // NOLINTEND
};

} // namespace PerfMetrics
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PerfMetrics {

class Counter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCurrentTotal;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mPeakTotal;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSamples;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd1c504;
    ::ll::UntypedStorage<8, 8> mUnkea7c5f;
    ::ll::UntypedStorage<8, 8> mUnk2f5939;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Counter& operator=(Counter const&);
    Counter(Counter const&);
    Counter();
#endif // @header-generator platform
};

} // namespace PerfMetrics

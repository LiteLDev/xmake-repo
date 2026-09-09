#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PerfMetrics {

class Counter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCurrentTotal;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mPeakTotal;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSamples;
    // NOLINTEND
};

} // namespace PerfMetrics

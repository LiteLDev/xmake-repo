#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TimedWriteControlPolicy {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mPendingFlush;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastInsertTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mFlushInterval;
    ::ll::TypedStorage<4, 4, uint const> mMaxBytesPerInterval;
    ::ll::TypedStorage<4, 4, uint> mBytesWrittenThisInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mIntervalStart;
    ::ll::TypedStorage<4, 4, uint const> mMinWriteSize;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::texturestreaming

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mTotalOverLastSecond;
    ::ll::TypedStorage<4, 4, float> mAverageOverLastSecond;
    ::ll::TypedStorage<4, 4, float> mMaximumOverLastSecond;
    ::ll::TypedStorage<4, 4, uint> mNumberOfSamplesInLastSecond;
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSamples;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastResetTime;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSample(std::chrono::duration<long long, std::ratio<1, 1000000000>>);
    // NOLINTEND
};

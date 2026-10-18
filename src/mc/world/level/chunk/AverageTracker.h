#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mTotalOverLastSecond;
    ::ll::TypedStorage<4, 4, float> mAverageOverLastSecond;
    ::ll::TypedStorage<4, 4, float> mMaximumOverLastSecond;
    ::ll::TypedStorage<4, 4, uint> mNumberOfSamplesInLastSecond;
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSamples;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastResetTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                      mTotalOverLastSecond;
    ::ll::TypedStorage<4, 4, float>                                      mAverageOverLastSecond;
    ::ll::TypedStorage<4, 4, float>                                      mMaximumOverLastSecond;
    ::ll::TypedStorage<4, 4, uint>                                       mNumberOfSamplesInLastSecond;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::chrono::nanoseconds>> mSamples;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastResetTime;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSample(std::chrono::duration<long long, std::ratio<1, 1000000000>>);
#else // @header-generator platform
    MCAPI void addSample(::std::chrono::nanoseconds dt);

    MCAPI ~AverageTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

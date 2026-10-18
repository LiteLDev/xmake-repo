#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RollingAverageTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                              mSampleBufferIdx;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>       mSampleAverage;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>       mSampleSum;
    ::ll::TypedStorage<8, 160, std::chrono::duration<long long, std::ratio<1, 1000000000>>[20]> mSampleBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RollingAverageTracker();

    MCNAPI void addSample(std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000000>> getAverage() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000000000>> getLastSample() const;

    MCNAPI std::vector<std::chrono::duration<long long, std::ratio<1, 1000000000>>> getLastSamples(uint) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& SAMPLE_BUFFER_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                             mSampleBufferIdx;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>       mSampleAverage;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>       mSampleSum;
    ::ll::TypedStorage<8, 160, ::std::chrono::nanoseconds[20]> mSampleBuffer;
#endif // @header-generator platform
    // NOLINTEND
};

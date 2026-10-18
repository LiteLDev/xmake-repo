#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mCount;
    ::ll::TypedStorage<8, 8, ulong> mNanoseconds;
    ::ll::TypedStorage<8, 8, ulong> mMaxSample;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TimeAccumulator();

    MCNAPI void addTime(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);

    MCNAPI ulong getCount() const;

    MCNAPI float getTimeSumAverageMS() const;

    MCNAPI float getTimeSumAverageSeconds() const;

    MCNAPI float getTimeSumSeconds() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mCount;
    ::ll::TypedStorage<8, 8, uint64> mNanoseconds;
    ::ll::TypedStorage<8, 8, uint64> mMaxSample;
#endif // @header-generator platform
    // NOLINTEND
};

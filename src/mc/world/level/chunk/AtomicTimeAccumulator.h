#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCount;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNanoseconds;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mMaxSample;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AtomicTimeAccumulator();

    MCNAPI void addTime(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mCount;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mNanoseconds;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mMaxSample;
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> isCurrentWaitingOnCall;
    ::ll::TypedStorage<1, 1, bool> mWasCallAborted;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> operationStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> timeLimit;
    ::ll::TypedStorage<1, 1, bool> mHasRetryBeenRequested;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRetryTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    isCurrentWaitingOnCall;
    ::ll::TypedStorage<1, 1, bool>                                    mWasCallAborted;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> operationStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  timeLimit;
    ::ll::TypedStorage<1, 1, bool>                                    mHasRetryBeenRequested;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mRetryTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void trackNewAsyncOperation(int timeoutInSeconds);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

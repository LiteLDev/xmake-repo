#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> isCurrentWaitingOnCall;
    ::ll::TypedStorage<1, 1, bool> mWasCallAborted;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> operationStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> timeLimit;
    ::ll::TypedStorage<1, 1, bool> mHasRetryBeenRequested;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRetryTime;
    // clang-format on
    // NOLINTEND
};

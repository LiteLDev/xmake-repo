#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskResult {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsDone;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRunAtTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TaskResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getRunAtTime() const;

    MCNAPI bool hasDelay() const;

    MCNAPI bool isDone() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TaskResult requeueAfter(std::chrono::duration<long long, std::ratio<1, 1000000000>>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::TaskResult const& Done();

    MCNAPI static ::TaskResult const& Requeue();
    // NOLINTEND
};

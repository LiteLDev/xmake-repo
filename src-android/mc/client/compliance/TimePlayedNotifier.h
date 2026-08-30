#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Compliance {

class TimePlayedNotifier {
public:
    // TimePlayedNotifier inner types define
    using MINUTES = std::chrono::duration<long, std::ratio<60, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mLastHourNotified;
    ::ll::TypedStorage<1, 1, bool> mSuspended;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mMinutesPlayedBeforeSuspension;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSuspendTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeSessionStarted;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
    // NOLINTEND
};

} // namespace Compliance

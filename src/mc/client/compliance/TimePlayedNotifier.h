#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Compliance {

class TimePlayedNotifier {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // TimePlayedNotifier inner types define
    using MINUTES = std::chrono::duration<long, std::ratio<60, 1>>;

public:
    // member variables
    // NOLINTBEGIN
#else // @header-generator platform
    // TimePlayedNotifier inner types declare
#endif // @header-generator platform
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mLastHourNotified;
    ::ll::TypedStorage<1, 1, bool> mSuspended;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mMinutesPlayedBeforeSuspension;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSuspendTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeSessionStarted;
    ::ll::UntypedStorage<8, 48> nowFunc;
#else // @header-generator platform
    struct nowFunc;
#endif // @header-generator platform
    // clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform

    // TimePlayedNotifier inner types define
    struct nowFunc {};
#endif // @header-generator platform
};

} // namespace Compliance

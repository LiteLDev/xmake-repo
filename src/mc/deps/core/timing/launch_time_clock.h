#pragma once

#include "mc/_HeaderOutputPredefine.h"

class launch_time_clock {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // launch_time_clock inner types define
    using time_point =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

    using duration = std::chrono::duration<long long, std::ratio<1, 1000000000>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::chrono::duration<long, std::ratio<1, 1000>> getMillisecondsSinceLaunch_DEPRECATED();

    MCNAPI static std::chrono::duration<double, std::ratio<1, 1>> getSecondsSinceLaunch_DEPRECATED();

    MCNAPI static std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        now();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> time_since_launch();
#else // @header-generator platform
    MCNAPI static ::std::chrono::nanoseconds time_since_launch();
#endif // @header-generator platform
    // NOLINTEND
};

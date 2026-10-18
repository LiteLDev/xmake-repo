#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling {

#if defined(LL_PLAT_A) // @header-generator platform
class PerfClock {
public:
    // PerfClock inner types define
    using time_point = std::chrono::
        time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>;

    using duration = std::chrono::duration<long, std::ratio<1, 1000000000000000000>>;

    using standard_duration = std::chrono::duration<long long, std::ratio<1, 1000000000>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::chrono::
        time_point<Bedrock::Profiling::PerfClock, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>>
        now();

    MCNAPI static std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        tryApproximateToWallClockTime(std::chrono::duration<long, std::ratio<1, 1000000000000000000>>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::time_point<
        Bedrock::Profiling::PerfClock,
        std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> const&
    zero();
    // NOLINTEND
};
#else // @header-generator platform
class PerfClock {};
#endif // @header-generator platform

} // namespace Bedrock::Profiling

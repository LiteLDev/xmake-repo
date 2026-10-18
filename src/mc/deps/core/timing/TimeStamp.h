#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class TimeStamp {
public:
    // TimeStamp inner types define
    using DefaultTimePontType =
        std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>;
};
#else // @header-generator platform
class TimeStamp {};
#endif // @header-generator platform

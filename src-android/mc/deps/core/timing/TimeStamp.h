#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeStamp {
public:
    // TimeStamp inner types define
    using DefaultTimePontType =
        std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>;
};

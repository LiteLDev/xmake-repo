#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BanDuration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  timeRemainingDigit;
    ::ll::TypedStorage<1, 1, bool> isHours;
    ::ll::TypedStorage<1, 1, bool> isPermanent;
    // NOLINTEND
};

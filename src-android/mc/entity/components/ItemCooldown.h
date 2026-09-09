#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCooldown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTicksLeft;
    ::ll::TypedStorage<4, 4, int> mTotalTicks;
    // NOLINTEND
};

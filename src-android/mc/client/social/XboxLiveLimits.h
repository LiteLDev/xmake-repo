#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct XboxLiveLimits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> burstLimit;
    ::ll::TypedStorage<4, 4, uint> sustainLimit;
    // NOLINTEND
};

} // namespace Social

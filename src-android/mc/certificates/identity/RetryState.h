#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity::Strategies {

struct RetryState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  failedRefreshAttempts;
    ::ll::TypedStorage<8, 8, long> lastRefreshAttempt;
    // NOLINTEND
};

} // namespace Identity::Strategies

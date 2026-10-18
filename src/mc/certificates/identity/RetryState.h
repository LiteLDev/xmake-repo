#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity::Strategies {

struct RetryState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>  failedRefreshAttempts;
    ::ll::TypedStorage<8, 8, long> lastRefreshAttempt;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkec97f9;
    ::ll::UntypedStorage<8, 8> mUnke93d48;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RetryState& operator=(RetryState const&);
    RetryState(RetryState const&);
    RetryState();
#endif // @header-generator platform
};

} // namespace Identity::Strategies

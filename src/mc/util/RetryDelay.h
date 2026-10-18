#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class RetryDelay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mDelayMs;
    ::ll::TypedStorage<4, 4, int>  mMaxDelayMs;
    ::ll::TypedStorage<4, 4, int>  mRetryCount;
    ::ll::TypedStorage<4, 4, int>  mPreviousTriggerMs;
    ::ll::TypedStorage<1, 1, bool> mActive;
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<1, 1, bool> mNoDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    RetryDelay();
};
#else // @header-generator platform
class RetryDelay {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                mHangThresholdMs;
    ::ll::TypedStorage<4, 8, std::optional<int>> mSpikeThresholdMs;
    ::ll::TypedStorage<4, 8, std::optional<int>> mSlowThresholdMs;
    ::ll::TypedStorage<1, 1, bool>               mHangException;
    ::ll::TypedStorage<1, 1, bool>               mEnableExceptionHandling;
    ::ll::TypedStorage<1, 1, bool>               mEnableShutdown;
    ::ll::TypedStorage<4, 4, int>                mMemoryWarningMB;
    ::ll::TypedStorage<4, 4, int>                mMemoryLimitMB;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                  mHangThresholdMs;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mSpikeThresholdMs;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mSlowThresholdMs;
    ::ll::TypedStorage<1, 1, bool>                 mHangException;
    ::ll::TypedStorage<1, 1, bool>                 mEnableExceptionHandling;
    ::ll::TypedStorage<1, 1, bool>                 mEnableShutdown;
    ::ll::TypedStorage<4, 4, int>                  mMemoryWarningMB;
    ::ll::TypedStorage<4, 4, int>                  mMemoryLimitMB;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

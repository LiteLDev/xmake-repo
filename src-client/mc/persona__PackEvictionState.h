#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/persona__PackEvictionDrainSnapshot.h"
#include "mc/persona__PackEvictionTelemetrySnapshot.h"

namespace persona {

struct PackEvictionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                      mActivePass;
    ::ll::TypedStorage<8, 56, std::optional<persona::PackEvictionTelemetrySnapshot>> mLastTelemetry;
    ::ll::TypedStorage<8, 56, std::optional<persona::PackEvictionDrainSnapshot>>     mDrainInProgress;
    ::ll::TypedStorage<8, 56, std::optional<persona::PackEvictionDrainSnapshot>>     mLastDrain;
    ::ll::TypedStorage<1, 1, bool>                                                   mNeedsCheck;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDraining;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackEvictionState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

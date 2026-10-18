#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> heartbeatFrequencyS;
    ::ll::TypedStorage<4, 4, int>   maxRetryCount;
    ::ll::TypedStorage<4, 4, int>   failedHeartbeatsBeforeInvalidation;
    ::ll::TypedStorage<4, 4, int>   joinCodeLength;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkeb1a26;
    ::ll::UntypedStorage<4, 4> mUnk88d66f;
    ::ll::UntypedStorage<4, 4> mUnk810403;
    ::ll::UntypedStorage<4, 4> mUnk3a36fb;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI DiscoveryConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);
    DiscoveryConfig();
#endif // @header-generator platform
};

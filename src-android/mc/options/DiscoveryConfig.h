#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> heartbeatFrequencyS;
    ::ll::TypedStorage<4, 4, int>   maxRetryCount;
    ::ll::TypedStorage<4, 4, int>   failedHeartbeatsBeforeInvalidation;
    ::ll::TypedStorage<4, 4, int>   joinCodeLength;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiscoveryConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

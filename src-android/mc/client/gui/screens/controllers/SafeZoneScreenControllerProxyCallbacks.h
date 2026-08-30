#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SafeZoneScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetSafeZonePercent;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneScreenControllerProxyCallbacks& operator=(SafeZoneScreenControllerProxyCallbacks const&);
    SafeZoneScreenControllerProxyCallbacks();
};

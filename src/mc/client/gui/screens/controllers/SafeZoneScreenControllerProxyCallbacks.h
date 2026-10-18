#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SafeZoneScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mSetSafeZonePercent;
    // NOLINTEND
};
#else // @header-generator platform
struct SafeZoneScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

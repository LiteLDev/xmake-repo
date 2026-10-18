#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatterySaverMode.h"
#include "mc/platform/battery/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BatteryMonitorInterface();
#else // @header-generator platform
    virtual ~BatteryMonitorInterface() = default;
#endif // @header-generator platform

    virtual ::BatteryStatus getBatteryStatus() const = 0;

    virtual float getBatteryLevel() const = 0;

    virtual ::BatterySaverMode getBatterySaverMode() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BatterySaverMode $getBatterySaverMode() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};

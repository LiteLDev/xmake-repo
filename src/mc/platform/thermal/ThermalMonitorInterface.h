#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalState.h"

class ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ThermalMonitorInterface();
#else // @header-generator platform
    virtual ~ThermalMonitorInterface() = default;
#endif // @header-generator platform

    virtual ::ThermalState getThermalState() const = 0;

    virtual float getThermalValueCelsius() const = 0;

    virtual bool isLowBatteryModeEnabled() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

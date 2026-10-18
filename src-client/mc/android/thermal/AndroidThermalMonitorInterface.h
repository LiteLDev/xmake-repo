#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalMonitorInterface.h"
#include "mc/platform/thermal/ThermalState.h"

class AndroidThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AndroidThermalMonitorInterface();

    virtual ::ThermalState getThermalState() const;

    virtual float getThermalValueCelsius() const;

    virtual bool isLowBatteryModeEnabled() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ThermalState $getThermalState() const;

    MCNAPI float $getThermalValueCelsius() const;

    MCNAPI bool $isLowBatteryModeEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

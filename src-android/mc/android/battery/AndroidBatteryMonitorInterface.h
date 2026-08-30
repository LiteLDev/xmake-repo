#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatteryMonitorInterface.h"
#include "mc/platform/battery/BatteryStatus.h"

class AndroidBatteryMonitorInterface : public ::BatteryMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AndroidBatteryMonitorInterface();

    virtual ::BatteryStatus getBatteryStatus() const;

    virtual float getBatteryLevel() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BatteryStatus $getBatteryStatus() const;

    MCNAPI float $getBatteryLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

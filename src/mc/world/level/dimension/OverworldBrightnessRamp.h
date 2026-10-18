#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

#if defined(LL_PLAT_A) // @header-generator platform
class OverworldBrightnessRamp : public ::DimensionBrightnessRamp {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldBrightnessRamp();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class OverworldBrightnessRamp : public ::DimensionBrightnessRamp {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct FrozenNoiseBasedTemperatureFlag : public ::BiomeComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrozenNoiseBasedTemperatureFlag();
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
struct FrozenNoiseBasedTemperatureFlag : public ::BiomeComponentBase {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct PrecipitationAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mRedSporeDensity;
    ::ll::TypedStorage<4, 4, float> mBlueSporeDensity;
    ::ll::TypedStorage<4, 4, float> mAshDensity;
    ::ll::TypedStorage<4, 4, float> mWhiteAshDensity;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrecipitationAttributes();
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

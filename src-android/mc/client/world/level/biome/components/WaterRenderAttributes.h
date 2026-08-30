#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct WaterRenderAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mRenderWaterColor;
    ::ll::TypedStorage<4, 4, float>         mRenderWaterOpacity;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaterRenderAttributes();
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

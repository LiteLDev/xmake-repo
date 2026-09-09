#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/TargetSpace.h"

struct TargetPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>                         mTemperature;
    ::ll::TypedStorage<8, 8, long const>                         mHumidity;
    ::ll::TypedStorage<8, 8, long const>                         mContinentalness;
    ::ll::TypedStorage<8, 8, long const>                         mErosion;
    ::ll::TypedStorage<8, 8, long const>                         mDepth;
    ::ll::TypedStorage<8, 8, long const>                         mWeirdness;
    ::ll::TypedStorage<8, 56, ::ClimateUtils::TargetSpace const> mTargetSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetPoint();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/TargetSpace.h"

struct TargetPoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long const>                         mTemperature;
    ::ll::TypedStorage<8, 8, long const>                         mHumidity;
    ::ll::TypedStorage<8, 8, long const>                         mContinentalness;
    ::ll::TypedStorage<8, 8, long const>                         mErosion;
    ::ll::TypedStorage<8, 8, long const>                         mDepth;
    ::ll::TypedStorage<8, 8, long const>                         mWeirdness;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64 const>                        mTemperature;
    ::ll::TypedStorage<8, 8, int64 const>                        mHumidity;
    ::ll::TypedStorage<8, 8, int64 const>                        mContinentalness;
    ::ll::TypedStorage<8, 8, int64 const>                        mErosion;
    ::ll::TypedStorage<8, 8, int64 const>                        mDepth;
    ::ll::TypedStorage<8, 8, int64 const>                        mWeirdness;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ClimateUtils::TargetSpace const> mTargetSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetPoint();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    TargetPoint(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/Parameter.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TargetPoint;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ClimateParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mTemperature;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mHumidity;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mContinentalness;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mErosion;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mDepth;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mWeirdness;
    ::ll::TypedStorage<8, 8, long>                                     mOffset;
    ::ll::TypedStorage<8, 112, std::array<ClimateUtils::Parameter, 7>> mParameterSpace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mTemperature;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mHumidity;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mContinentalness;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mErosion;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mDepth;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>                   mWeirdness;
    ::ll::TypedStorage<8, 8, int64>                                        mOffset;
    ::ll::TypedStorage<8, 112, ::std::array<::ClimateUtils::Parameter, 7>> mParameterSpace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateParameters();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClimateParameters(
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        float
#else // @header-generator platform
    MCAPI ClimateParameters(
        ::ClimateUtils::Parameter temperature,
        ::ClimateUtils::Parameter humidity,
        ::ClimateUtils::Parameter continentalness,
        ::ClimateUtils::Parameter erosion,
        ::ClimateUtils::Parameter depth,
        ::ClimateUtils::Parameter weirdness,
        float                     offset
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        float
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ClimateUtils::Parameter temperature,
        ::ClimateUtils::Parameter humidity,
        ::ClimateUtils::Parameter continentalness,
        ::ClimateUtils::Parameter erosion,
        ::ClimateUtils::Parameter depth,
        ::ClimateUtils::Parameter weirdness,
        float                     offset
#endif // @header-generator platform
    );
    // NOLINTEND
};

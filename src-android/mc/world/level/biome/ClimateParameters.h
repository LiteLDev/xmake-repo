#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
struct TargetPoint;
// clang-format on

struct ClimateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mTemperature;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mHumidity;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mContinentalness;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mErosion;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mDepth;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter>               mWeirdness;
    ::ll::TypedStorage<8, 8, long>                                     mOffset;
    ::ll::TypedStorage<8, 112, std::array<ClimateUtils::Parameter, 7>> mParameterSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClimateParameters(
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        float
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        ::ClimateUtils::Parameter,
        float
    );
    // NOLINTEND
};

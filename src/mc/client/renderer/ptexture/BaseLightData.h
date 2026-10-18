#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class BaseLightData {
public:
    // BaseLightData inner types declare
    // clang-format off
    struct DarknessLevels;
    // clang-format on

    // BaseLightData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DarknessLevels {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> gamma;
        ::ll::TypedStorage<4, 4, float> scale;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>   mSunriseColor;
    ::ll::TypedStorage<4, 4, float>           mGamma;
    ::ll::TypedStorage<4, 4, float>           mSkyDarken;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, float>           mDarkenWorldAmount;
    ::ll::TypedStorage<4, 4, float>           mPreviousDarkenWorldAmount;
    ::ll::TypedStorage<1, 1, bool>            mNightvisionActive;
    ::ll::TypedStorage<4, 4, float>           mNightvisionScale;
    ::ll::TypedStorage<1, 1, bool>            mUnderwaterVision;
    ::ll::TypedStorage<4, 4, float>           mUnderwaterScale;
    ::ll::TypedStorage<4, 4, int>             mSkyFlashTime;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactor;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactorPreviousFrame;
    ::ll::TypedStorage<4, 4, float>           mTheEndLightSourceIntensity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BaseLightData::DarknessLevels calculateDarknessLevels(::Tick const&, float const, float const) const;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DarknessLevels {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> gamma;
        ::ll::TypedStorage<4, 4, float> scale;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>   mSunriseColor;
    ::ll::TypedStorage<4, 4, float>           mGamma;
    ::ll::TypedStorage<4, 4, float>           mSkyDarken;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, float>           mDarkenWorldAmount;
    ::ll::TypedStorage<4, 4, float>           mPreviousDarkenWorldAmount;
    ::ll::TypedStorage<1, 1, bool>            mNightvisionActive;
    ::ll::TypedStorage<4, 4, float>           mNightvisionScale;
    ::ll::TypedStorage<1, 1, bool>            mUnderwaterVision;
    ::ll::TypedStorage<4, 4, float>           mUnderwaterScale;
    ::ll::TypedStorage<4, 4, int>             mSkyFlashTime;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactor;
    ::ll::TypedStorage<4, 4, float>           mDarknessFactorPreviousFrame;
    ::ll::TypedStorage<4, 4, float>           mTheEndLightSourceIntensity;
    // NOLINTEND
#else // @header-generator platform
    struct DarknessLevels {};
#endif // @header-generator platform
#endif // @header-generator platform
};

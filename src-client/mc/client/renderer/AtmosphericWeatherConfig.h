#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce::framebuilder { struct SkyWeatherParameters; }
// clang-format on

struct AtmosphericWeatherConfig {
public:
    // AtmosphericWeatherConfig inner types declare
    // clang-format off
    struct SkyWeatherParameters;
    // clang-format on

    // AtmosphericWeatherConfig inner types define
    struct SkyWeatherParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                       mSkyTransitionSpeed;
        ::ll::TypedStorage<4, 4, float>                       mDirectionalLightStrength;
        ::ll::TypedStorage<4, 4, float>                       mCloudRenderDistanceScale;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mRainSkyColor;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mBaseRainCloudColor;
        ::ll::TypedStorage<4, 4, float>                       mRainCloudColorContribution;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mBaseThunderSkyColor;
        ::ll::TypedStorage<4, 4, float>                       mThunderSkyColorContribution;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mBaseThunderCloudColor;
        ::ll::TypedStorage<4, 4, float>                       mThunderCloudColorContribution;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mLightningFlashColor;
        ::ll::TypedStorage<4, 4, float>                       mLightningFlashColorContribution;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit operator SkyWeatherParameters() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 108, ::AtmosphericWeatherConfig::SkyWeatherParameters> mSkyWeatherParameters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool loadDataSync(::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindSkyWeatherParameters(::cereal::ReflectionCtx&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

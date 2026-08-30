#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/ColorNormRGB.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/util/cereal_helpers/TimeKeyframes.h"

class FogDefinitionCerealParser {
public:
    // FogDefinitionCerealParser inner types declare
    // clang-format off
    struct FogParametersSrcV0;
    // clang-format on

    // FogDefinitionCerealParser inner types define
    struct FogParametersSrcV0 {
    public:
        // FogParametersSrcV0 inner types declare
        // clang-format off
        struct FogSettings;
        // clang-format on

        // FogParametersSrcV0 inner types define
        struct FogSettings {
        public:
            // FogSettings inner types declare
            // clang-format off
            struct FogDistanceSetting;
            struct FogDescription;
            struct FogInitDistanceSetting;
            struct FogTransitionSetting;
            struct FogVolumetricDensitySetting;
            struct FogVolumetricDensityCollectionSetting;
            struct FogVolumetricMediaCoeffsSetting;
            struct FogVolumetricMediaCoeffsCollectionSetting;
            struct FogVolumetricHenyeyGreensteinGSetting;
            struct FogVolumetricHenyeyGreensteinGCollectionSetting;
            struct FogVolumetricCollectionSetting;
            struct FogWaterDistanceSetting;
            struct FogDistanceCollectionSetting;
            // clang-format on

            // FogSettings inner types define
            struct FogDistanceSetting {
            public:
                // FogDistanceSetting inner types define
                enum class DistanceType : int {
                    FIXED  = 0,
                    RENDER = 1,
                };

            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 8, std::optional<float>> mStart;
                ::ll::TypedStorage<4, 8, std::optional<float>> mEnd;
                ::ll::TypedStorage<4, 8, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting::DistanceType>> mType;
                ::ll::TypedStorage<4, 20, std::optional<SharedTypes::Color255RGB>> mColor;
                // clang-format on
                // NOLINTEND
            };

            struct FogDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };

            struct FogInitDistanceSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 8, std::optional<float>> mStart;
                ::ll::TypedStorage<4, 8, std::optional<float>> mEnd;
                ::ll::TypedStorage<4, 8, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting::DistanceType>> mType;
                ::ll::TypedStorage<4, 20, std::optional<SharedTypes::Color255RGB>> mColor;
                // clang-format on
                // NOLINTEND
            };

            struct FogTransitionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogInitDistanceSetting>> mInitialFog;
                ::ll::TypedStorage<4, 8, std::optional<float>> mMinTransitionPercentage;
                ::ll::TypedStorage<4, 8, std::optional<float>> mMidTransitionSeconds;
                ::ll::TypedStorage<4, 8, std::optional<float>> mMidTransitionPercentage;
                ::ll::TypedStorage<4, 8, std::optional<float>> mMaxTransitionSeconds;
                // clang-format on
                // NOLINTEND
            };

            struct FogVolumetricDensitySetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 40>                   mMaxDensity;
                ::ll::TypedStorage<1, 2, std::optional<bool>> mUniform;
                ::ll::UntypedStorage<8, 40>                   mZeroDensityHeight;
                ::ll::UntypedStorage<8, 40>                   mMaxDensityHeight;
                // NOLINTEND
            };

            struct FogVolumetricDensityCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<8, 136, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>> mAir;
                ::ll::TypedStorage<8, 136, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>> mWeather;
                ::ll::TypedStorage<8, 136, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>> mWater;
                ::ll::TypedStorage<8, 136, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>> mLava;
                ::ll::TypedStorage<8, 136, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>> mLavaResistance;
                // clang-format on
                // NOLINTEND
            };

            struct FogVolumetricMediaCoeffsSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 40> mScattering;
                ::ll::UntypedStorage<8, 40> mAbsorption;
                // NOLINTEND
            };

            struct FogVolumetricMediaCoeffsCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<8, 88, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>> mAir;
                ::ll::TypedStorage<8, 88, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>> mWater;
                ::ll::TypedStorage<8, 88, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>> mCloud;
                // clang-format on
                // NOLINTEND
            };

            struct FogVolumetricHenyeyGreensteinGSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 40> mHenyeyGreensteinG;
                // NOLINTEND
            };

            struct FogVolumetricHenyeyGreensteinGCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<8, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricHenyeyGreensteinGSetting>> mAir;
                ::ll::TypedStorage<8, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricHenyeyGreensteinGSetting>> mWater;
                // clang-format on
                // NOLINTEND
            };

            struct FogVolumetricCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<8, 688, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensityCollectionSetting>> mDensitySettings;
                ::ll::TypedStorage<8, 272, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsCollectionSetting>> mMediaCoeffSettings;
                ::ll::TypedStorage<8, 104, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricHenyeyGreensteinGCollectionSetting>> mHenyeyGreensteinGSettings;
                // clang-format on
                // NOLINTEND
            };

            struct FogWaterDistanceSetting
            : public ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 84, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogTransitionSetting>> mTransitionFog;
                // clang-format on
                // NOLINTEND
            };

            struct FogDistanceCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>> mAir;
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>> mWeather;
                ::ll::TypedStorage<4, 132, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogWaterDistanceSetting>> mWater;
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>> mLava;
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>> mLavaResistance;
                ::ll::TypedStorage<4, 48, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>> mPowderedSnow;
                // clang-format on
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 24, ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDescription> mDescription;
            ::ll::TypedStorage<4, 376, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceCollectionSetting>> mFogDistances;
            ::ll::TypedStorage<8, 1072, std::optional<FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricCollectionSetting>> mFogVolumetrics;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                    mFormatVersion;
        ::ll::TypedStorage<8, 1472, ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings> mFogSettings;
        // NOLINTEND
    };

    using FogParametersSrc = ::FogDefinitionCerealParser::FogParametersSrcV0;
};

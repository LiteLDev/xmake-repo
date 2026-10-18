#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogSetting.h"
#include "mc/client/world/level/fog/FogVolumetricCoefficientSetting.h"
#include "mc/client/world/level/fog/FogVolumetricDensitySetting.h"
#include "mc/client/world/level/fog/FogVolumetricHenyeyGreensteinGSetting.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct FogDistanceSetting;
struct FogTransitionSetting;
namespace JsonUtil { class EmptyClass; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogSetting.h"
#include "mc/client/world/level/fog/FogVolumetricCoefficientSetting.h"
#include "mc/client/world/level/fog/FogVolumetricDensitySetting.h"
#include "mc/client/world/level/fog/FogVolumetricHenyeyGreensteinGSetting.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct FogDistanceSetting;
namespace JsonUtil { class EmptyClass; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
struct FogDefinition {
public:
    // FogDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class DistanceSettingType : int {
        AIR         = 0,
        WEATHER     = 1,
        WATER       = 2,
        LAVA        = 3,
        LAVA_RESIST = 4,
        POWDER_SNOW = 5,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class DistanceSettingType : int {
        Air        = 0,
        Weather    = 1,
        Water      = 2,
        Lava       = 3,
        LavaResist = 4,
        PowderSnow = 5,
    };
#else // @header-generator platform
    enum class DistanceSettingType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class DensitySettingType : int {
        AIR         = 0,
        WEATHER     = 1,
        WATER       = 2,
        LAVA        = 3,
        LAVA_RESIST = 4,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class DensitySettingType : int {
        Air        = 0,
        Weather    = 1,
        Water      = 2,
        Lava       = 3,
        LavaResist = 4,
    };
#else // @header-generator platform
    enum class DensitySettingType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class CoefficientSettingType : int {
        AIR   = 0,
        WATER = 1,
        CLOUD = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CoefficientSettingType : int {
        Air   = 0,
        Water = 1,
        Cloud = 2,
    };
#else // @header-generator platform
    enum class CoefficientSettingType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class HenyeyGreensteinGSettingType : int {
        AIR   = 0,
        WATER = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mIdentifier;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistanceAirSetting;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistanceWeatherSetting;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistanceWaterSetting;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistanceLavaSetting;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistanceLavaResistanceSetting;
    ::ll::TypedStorage<4, 76, std::optional<FogSetting>> mDistancePowderSnowSetting;
    ::ll::TypedStorage<8, 112, std::optional<FogVolumetricDensitySetting>> mVolumeDensityAirSetting;
    ::ll::TypedStorage<8, 112, std::optional<FogVolumetricDensitySetting>> mVolumeDensityWeatherSetting;
    ::ll::TypedStorage<8, 112, std::optional<FogVolumetricDensitySetting>> mVolumeDensityWaterSetting;
    ::ll::TypedStorage<8, 112, std::optional<FogVolumetricDensitySetting>> mVolumeDensityLavaSetting;
    ::ll::TypedStorage<8, 112, std::optional<FogVolumetricDensitySetting>> mVolumeDensityLavaResistanceSetting;
    ::ll::TypedStorage<8, 72, std::optional<FogVolumetricCoefficientSetting>> mVolumeCoefficientAirSetting;
    ::ll::TypedStorage<8, 72, std::optional<FogVolumetricCoefficientSetting>> mVolumeCoefficientWaterSetting;
    ::ll::TypedStorage<8, 72, std::optional<FogVolumetricCoefficientSetting>> mVolumeCoefficientCloudSetting;
    ::ll::TypedStorage<8, 40, std::optional<FogVolumetricHenyeyGreensteinGSetting>> mVolumeHenyeyGreensteinGAirSetting;
    ::ll::TypedStorage<8, 40, std::optional<FogVolumetricHenyeyGreensteinGSetting>> mVolumeHenyeyGreensteinGWaterSetting;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    FogDefinition& operator=(FogDefinition const&);
    FogDefinition(FogDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogDefinition(
        ::HashedString,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricHenyeyGreensteinGSetting>,
        std::optional<FogVolumetricHenyeyGreensteinGSetting>
    );

    MCNAPI std::string getNamespace() const;

    MCNAPI ::FogDefinition& operator=(::FogDefinition&&);

    MCNAPI ~FogDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FogDefinition>>
        _buildFogDefinitionSchema_common(::SemVersion);

    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FogDefinition>>
    buildFogDefinitionSchema_v1_16_100();

    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FogDefinition>>
    buildFogDefinitionSchema_v1_21_0();

    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FogDefinition>>
    buildFogDefinitionSchema_v1_21_90();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_AIR_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_NETHER_AIR_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_POWDER_SNOW_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_WATER_SETTING();

    MCNAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_WEATHER_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_AIR_SETTING();

    MCNAPI static ::FogDefinition const& DEFAULT_FOG_DEFINITION();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_LAVA_RESISTANCE_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_LAVA_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_NETHER_AIR_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_POWDER_SNOW_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_WATER_SETTING();

    MCNAPI static ::FogSetting const& DEFAULT_FOG_WEATHER_SETTING();

    MCNAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING();

    MCNAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING();

    MCNAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING();

    MCNAPI static ::FogVolumetricHenyeyGreensteinGSetting const& DEFAULT_VOLUME_HENYEY_GREENSTEIN_G_AIR_SETTING();

    MCNAPI static ::FogVolumetricHenyeyGreensteinGSetting const& DEFAULT_VOLUME_HENYEY_GREENSTEIN_G_WATER_SETTING();

    MCNAPI static ::FogDefinition const& DEFERRED_DEFAULT_FOG_DEFINITION();

    MCNAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_AIR_SETTING();

    MCNAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WATER_SETTING();

    MCNAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WEATHER_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogSetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricDensitySetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricCoefficientSetting>,
        std::optional<FogVolumetricHenyeyGreensteinGSetting>,
        std::optional<FogVolumetricHenyeyGreensteinGSetting>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class HenyeyGreensteinGSettingType : int {
        Air   = 0,
        Water = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                     mIdentifier;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistanceAirSetting;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistanceWeatherSetting;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistanceWaterSetting;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistanceLavaSetting;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistanceLavaResistanceSetting;
    ::ll::TypedStorage<4, 76, ::std::optional<::FogSetting>>                      mDistancePowderSnowSetting;
    ::ll::TypedStorage<8, 112, ::std::optional<::FogVolumetricDensitySetting>>    mVolumeDensityAirSetting;
    ::ll::TypedStorage<8, 112, ::std::optional<::FogVolumetricDensitySetting>>    mVolumeDensityWeatherSetting;
    ::ll::TypedStorage<8, 112, ::std::optional<::FogVolumetricDensitySetting>>    mVolumeDensityWaterSetting;
    ::ll::TypedStorage<8, 112, ::std::optional<::FogVolumetricDensitySetting>>    mVolumeDensityLavaSetting;
    ::ll::TypedStorage<8, 112, ::std::optional<::FogVolumetricDensitySetting>>    mVolumeDensityLavaResistanceSetting;
    ::ll::TypedStorage<8, 72, ::std::optional<::FogVolumetricCoefficientSetting>> mVolumeCoefficientAirSetting;
    ::ll::TypedStorage<8, 72, ::std::optional<::FogVolumetricCoefficientSetting>> mVolumeCoefficientWaterSetting;
    ::ll::TypedStorage<8, 72, ::std::optional<::FogVolumetricCoefficientSetting>> mVolumeCoefficientCloudSetting;
    ::ll::TypedStorage<8, 40, ::std::optional<::FogVolumetricHenyeyGreensteinGSetting>>
        mVolumeHenyeyGreensteinGAirSetting;
    ::ll::TypedStorage<8, 40, ::std::optional<::FogVolumetricHenyeyGreensteinGSetting>>
        mVolumeHenyeyGreensteinGWaterSetting;
    // NOLINTEND

public:
    // prevent constructor by default
    FogDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogDefinition(
        ::HashedString                                           identifier,
        ::std::optional<::FogSetting>                            distanceAir,
        ::std::optional<::FogSetting>                            distanceWeather,
        ::std::optional<::FogSetting>                            distanceWater,
        ::std::optional<::FogSetting>                            distanceLava,
        ::std::optional<::FogSetting>                            distanceLavaResistance,
        ::std::optional<::FogSetting>                            distancePowderSnow,
        ::std::optional<::FogVolumetricDensitySetting>           densityAir,
        ::std::optional<::FogVolumetricDensitySetting>           densityWeather,
        ::std::optional<::FogVolumetricDensitySetting>           densityWater,
        ::std::optional<::FogVolumetricDensitySetting>           densityLava,
        ::std::optional<::FogVolumetricDensitySetting>           densityLavaResistance,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientAir,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientWater,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientCloud,
        ::std::optional<::FogVolumetricHenyeyGreensteinGSetting> henyeyGreensteinGAir,
        ::std::optional<::FogVolumetricHenyeyGreensteinGSetting> henyeyGreensteinGWater
    );

    MCAPI ~FogDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FogDefinition>>
    _buildFogDefinitionSchema_common(::SemVersion version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_AIR_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_NETHER_AIR_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_POWDER_SNOW_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_WATER_SETTING();

    MCAPI static ::FogDistanceSetting const& DEFAULT_DISTANCE_WEATHER_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_AIR_SETTING();

    MCAPI static ::FogDefinition const& DEFAULT_FOG_DEFINITION();

    MCAPI static ::FogSetting const& DEFAULT_FOG_LAVA_RESISTANCE_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_LAVA_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_NETHER_AIR_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_POWDER_SNOW_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_WATER_SETTING();

    MCAPI static ::FogSetting const& DEFAULT_FOG_WEATHER_SETTING();

    MCAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING();

    MCAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING();

    MCAPI static ::FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING();

    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting const& DEFAULT_VOLUME_HENYEY_GREENSTEIN_G_AIR_SETTING();

    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting const& DEFAULT_VOLUME_HENYEY_GREENSTEIN_G_WATER_SETTING();

    MCAPI static ::FogDefinition const& DEFERRED_DEFAULT_FOG_DEFINITION();

    MCAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_AIR_SETTING();

    MCAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WATER_SETTING();

    MCAPI static ::FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WEATHER_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString                                           identifier,
        ::std::optional<::FogSetting>                            distanceAir,
        ::std::optional<::FogSetting>                            distanceWeather,
        ::std::optional<::FogSetting>                            distanceWater,
        ::std::optional<::FogSetting>                            distanceLava,
        ::std::optional<::FogSetting>                            distanceLavaResistance,
        ::std::optional<::FogSetting>                            distancePowderSnow,
        ::std::optional<::FogVolumetricDensitySetting>           densityAir,
        ::std::optional<::FogVolumetricDensitySetting>           densityWeather,
        ::std::optional<::FogVolumetricDensitySetting>           densityWater,
        ::std::optional<::FogVolumetricDensitySetting>           densityLava,
        ::std::optional<::FogVolumetricDensitySetting>           densityLavaResistance,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientAir,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientWater,
        ::std::optional<::FogVolumetricCoefficientSetting>       coefficientCloud,
        ::std::optional<::FogVolumetricHenyeyGreensteinGSetting> henyeyGreensteinGAir,
        ::std::optional<::FogVolumetricHenyeyGreensteinGSetting> henyeyGreensteinGWater
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class HenyeyGreensteinGSettingType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

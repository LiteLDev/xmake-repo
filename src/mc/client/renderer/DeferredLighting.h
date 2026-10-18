#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/AtmosphericScattering.h"
#include "mc/client/renderer/AtmosphericWeatherConfig.h"
#include "mc/client/renderer/AverageLuminanceConfig.h"
#include "mc/client/renderer/ClientBiomeData.h"
#include "mc/client/renderer/ColorGraderConfig.h"
#include "mc/client/renderer/DeferredBiomeInfo.h"
#include "mc/client/renderer/DeferredRenderingGroup.h"
#include "mc/client/renderer/LightCluster.h"
#include "mc/client/renderer/LightingGroup.h"
#include "mc/client/renderer/LocalLightConfig.h"
#include "mc/client/renderer/PBRFallbackConfig.h"
#include "mc/client/renderer/PlatformConfiguration.h"
#include "mc/client/renderer/ShadowStylizationConfig.h"
#include "mc/client/renderer/SkyboxConfig.h"
#include "mc/client/renderer/TonemapperConfig.h"
#include "mc/client/renderer/WaterConfig.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
struct DeferredRenderingBiomeRegistry;
struct DimensionType;
namespace cereal { struct ReflectionCtx; }
namespace mce { class TextureGroup; }
// clang-format on

class DeferredLighting : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::DeferredRenderingGroup>                        mDeferredRenderingGroup;
    ::ll::TypedStorage<8, 56, ::LightCluster>                                   mLightCluster;
    ::ll::TypedStorage<8, 448, ::LightingGroup>                                 mLightingGroup;
    ::ll::TypedStorage<8, 144, ::PBRFallbackConfig>                             mPBRFallbackConfig;
    ::ll::TypedStorage<8, 136, ::LocalLightConfig>                              mLocalLightConfig;
    ::ll::UntypedStorage<8, 568>                                                mAtmosphericScattering;
    ::ll::TypedStorage<4, 108, ::AtmosphericWeatherConfig>                      mAtmosphericWeatherConfig;
    ::ll::TypedStorage<8, 7696, ::PlatformConfiguration>                        mPlatformConfiguration;
    ::ll::TypedStorage<8, 88, ::TonemapperConfig>                               mTonemapperConfig;
    ::ll::TypedStorage<8, 376, ::ColorGraderConfig>                             mColorGraderConfig;
    ::ll::TypedStorage<8, 56, ::AverageLuminanceConfig>                         mAverageLuminanceConfig;
    ::ll::TypedStorage<8, 424, ::WaterConfig>                                   mWaterConfig;
    ::ll::TypedStorage<8, 88, ::ShadowStylizationConfig>                        mShadowStylizationConfig;
    ::ll::TypedStorage<8, 208, ::SkyboxConfig>                                  mSkyboxConfig;
    ::ll::TypedStorage<8, 40, std::unordered_map<BiomeIdType, ClientBiomeData>> mClientBiomeDataPerBiomeID;
    ::ll::TypedStorage<8, 24, std::vector<DeferredBiomeInfo>>                   mBiomeInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredLighting();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredLighting();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredLighting(::IMinecraftEventing&, ::cereal::ReflectionCtx const&);

    MCNAPI DeferredLighting(::IMinecraftEventing&, ::cereal::ReflectionCtx const*);

    MCNAPI void buildBiomeInfo(float, float, ::DimensionType);

    MCNAPI void finalizeResources();

    MCNAPI ::AtmosphericScattering& getAtmosphericScattering();

    MCNAPI ::AtmosphericWeatherConfig& getAtmosphericWeatherConfig();

    MCNAPI ::AverageLuminanceConfig& getAverageLuminanceConfig();

    MCNAPI std::vector<DeferredBiomeInfo> const& getBiomeInfo() const;

    MCNAPI ::ColorGraderConfig& getColorGraderConfig();

    MCNAPI ::DeferredRenderingBiomeRegistry getDeferredBiomeRegistry() const;

    MCNAPI ::DeferredRenderingGroup& getDeferredRenderingGroup();

    MCNAPI ::LightCluster& getLightCluster();

    MCNAPI ::LightingGroup& getLightingGroup();

    MCNAPI ::LocalLightConfig& getLocalLightConfig();

    MCNAPI ::PBRFallbackConfig& getPBRFallbackConfig();

    MCNAPI ::PlatformConfiguration& getPlatformConfiguration();

    MCNAPI ::ShadowStylizationConfig& getShadowStylizationConfig();

    MCNAPI ::SkyboxConfig& getSkyboxConfig();

    MCNAPI ::TonemapperConfig& getTonemapperConfig();

    MCNAPI ::WaterConfig& getWaterConfig();

    MCNAPI void reloadResources(
        ::cereal::ReflectionCtx const&,
        ::ResourcePackManager&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
    );

    MCNAPI void reloadTextures(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void setClientBiomeData(std::unordered_map<BiomeIdType, ClientBiomeData> const&);

    MCNAPI void unloadTextures(std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLightingTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&, ::cereal::ReflectionCtx const&);

    MCNAPI void* $ctor(::IMinecraftEventing&, ::cereal::ReflectionCtx const*);
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
#else // @header-generator platform
class DeferredLighting {};
#endif // @header-generator platform

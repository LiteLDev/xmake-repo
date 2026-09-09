#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PointLightConfiguration.h"
#include "mc/PointLightQuality.h"
#include "mc/client/options/CloudQuality.h"
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/client/options/ShadowQuality.h"
#include "mc/client/options/TargetResolution.h"
#include "mc/client/options/UpscalingMode.h"
#include "mc/client/options/VolumetricFogQuality.h"
#include "mc/client/renderer/BloomConfiguration.h"
#include "mc/client/renderer/CloudConfiguration.h"
#include "mc/client/renderer/DeferredLightingConfiguration.h"
#include "mc/client/renderer/ReflectionConfiguration.h"
#include "mc/client/renderer/RenderDistanceConfiguration.h"
#include "mc/client/renderer/ShadowConfiguration.h"
#include "mc/client/renderer/UpscalingConfiguration.h"
#include "mc/client/renderer/VolumetricFogConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PlatformConfiguration {
public:
    // PlatformConfiguration inner types declare
    // clang-format off
    struct GraphicsQualityPreset;
    // clang-format on

    // PlatformConfiguration inner types define
    struct GraphicsQualityPreset {
    public:
        // GraphicsQualityPreset inner types declare
        // clang-format off
        struct LODs;
        // clang-format on

        // GraphicsQualityPreset inner types define
        struct LODs {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<1, 1, ::ShadowQuality>        mShadowQuality;
            ::ll::TypedStorage<1, 1, ::VolumetricFogQuality> mVolumetricFogQuality;
            ::ll::TypedStorage<1, 1, bool>                   mBloomEnabled;
            ::ll::TypedStorage<1, 1, ::PointLightQuality>    mPointLightQuality;
            ::ll::TypedStorage<1, 1, ::ReflectionsQuality>   mReflectionsQuality;
            ::ll::TypedStorage<1, 1, ::UpscalingMode>        mUpscalingMode;
            ::ll::TypedStorage<1, 1, ::CloudQuality>         mCloudQuality;
            ::ll::TypedStorage<1, 1, ::TargetResolution>     mTargetResolution;
            ::ll::TypedStorage<4, 4, int>                    mDefaultDeferredRenderDistance;
            ::ll::TypedStorage<4, 4, int>                    mTargetFramerate;
            ::ll::TypedStorage<4, 4, float>                  mLightingMixedResUpscaleFactor;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                          mName;
        ::ll::TypedStorage<4, 20, ::PlatformConfiguration::GraphicsQualityPreset::LODs> mLODs;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 5600, ::ShadowConfiguration> mShadowConfiguration;
    ::ll::TypedStorage<4, 272, ::VolumetricFogConfiguration> mVolumetricFogConfiguration;
    ::ll::TypedStorage<4, 16, ::BloomConfiguration> mBloomConfiguration;
    ::ll::TypedStorage<8, 544, ::PointLightConfiguration> mPointLightParams;
    ::ll::TypedStorage<4, 576, ::ReflectionConfiguration> mReflectionConfiguration;
    ::ll::TypedStorage<4, 416, ::UpscalingConfiguration> mUpscalingConfiguration;
    ::ll::TypedStorage<8, 24, ::RenderDistanceConfiguration> mRenderDistanceConfiguration;
    ::ll::TypedStorage<4, 160, ::CloudConfiguration> mCloudConfiguration;
    ::ll::TypedStorage<4, 24, ::DeferredLightingConfiguration> mDeferredLightingConfiguration;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<PlatformConfiguration::GraphicsQualityPreset>>> mPresets;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, std::vector<PlatformConfiguration::GraphicsQualityPreset>, std::less<void>, std::allocator<std::pair<const std::string, std::vector<PlatformConfiguration::GraphicsQualityPreset>>>>>> mPresetTiers;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlatformConfiguration();

    MCNAPI PlatformConfiguration(::PlatformConfiguration const&);

    MCNAPI std::vector<PlatformConfiguration::GraphicsQualityPreset> const&
           getQualityPresetsForTier(std::optional<std::string_view>) const;

    MCNAPI ::PlatformConfiguration& operator=(::PlatformConfiguration const&);

    MCNAPI ::PlatformConfiguration& operator=(::PlatformConfiguration&&);

    MCNAPI ~PlatformConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PlatformConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

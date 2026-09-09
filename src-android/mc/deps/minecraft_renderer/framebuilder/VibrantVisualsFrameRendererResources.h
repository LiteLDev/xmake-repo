#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/BiomeBlendingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/CausticsParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/CloudLightingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredFrameBufferDebugViewerParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredLightingUpscaleParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/FancyFrameRendererResources.h"
#include "mc/deps/minecraft_renderer/framebuilder/PointLightParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ProbeRegenParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyAmbientSamplesParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/WaterSurfaceParameters.h"
#include "mc/external/render_dragon/frame_object/components/MeshFilter.h"
#include "mc/external/render_dragon/frame_renderer/DeferredShadingParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/AtmosphericScatteringParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/AverageLuminanceParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/BloomParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ColorGradingParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/IBLParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/LightClusteringParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/LocalExposureParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ScreenSpaceReflectionsParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ToneMappingParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/VolumeScatteringParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/WaterEnabledFeatures.h"
#include "mc/external/render_dragon/frame_renderer/modules/WaterParameters.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace dragon::framerenderer::modules { struct LocalExposureData; }
namespace dragon::rendering { class AverageLuminanceData; }
namespace dragon::rendering { class ScreenSpaceReflectionsData; }
namespace dragon::rendering { class UpscalingCameraData; }
namespace dragon::rendering { class UpscalingData; }
namespace dragon::rendering { class VolumeScatteringData; }
namespace mce::framebuilder { class CausticsManager; }
namespace mce::framebuilder { class LightProbeManager; }
namespace mce::framebuilder { struct BiomeBlendingData; }
namespace mce::framebuilder { struct SkyboxParameters; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct VibrantVisualsFrameRendererResources : public ::mce::framebuilder::bgfxbridge::FancyFrameRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedShaderBufferResource>&> mShaderBufferResourceService;
    ::ll::TypedStorage<4, 24, ::mce::framebuilder::DeferredFrameBufferDebugViewerParameters const> mDeferredFrameBufferDebugViewerParameters;
    ::ll::TypedStorage<4, 144, ::dragon::framerenderer::DeferredShadingParameters const> mDeferredShadingParameters;
    ::ll::TypedStorage<4, 16, ::mce::framebuilder::DeferredLightingUpscaleParameters const> mDeferredLightingUpscaleParameters;
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::modules::LightClusteringParameters const> mLightClusteringParameters;
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::CausticsParameters const> mCausticsParameters;
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters const> mShadowParameters;
    ::ll::TypedStorage<1, 1, bool> mPointLightShadowsEnabled;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters const> mPointLightParameters;
    ::ll::TypedStorage<4, 36, ::dragon::framerenderer::modules::AverageLuminanceParameters const> mAverageLuminanceParameters;
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::LocalExposureParameters const> mLocalExposureParameters;
    ::ll::TypedStorage<8, 88, ::dragon::framerenderer::modules::ToneMappingParameters const> mTonemappingParameters;
    ::ll::TypedStorage<4, 248, ::dragon::framerenderer::modules::ColorGradingParameters const> mColorGradingParameters;
    ::ll::TypedStorage<4, 152, ::dragon::framerenderer::modules::AtmosphericScatteringParameters const> mAtmosphericScatteringParameters;
    ::ll::TypedStorage<1, 1, bool> mAtmosphericScatteringEnabled;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::IBLParameters const> mIBLParameters;
    ::ll::TypedStorage<1, 1, bool> mIBLEnabled;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::ProbeRegenParameters const> mProbeRegenParameters;
    ::ll::TypedStorage<4, 84, ::dragon::framerenderer::modules::ScreenSpaceReflectionsParameters const> mScreenSpaceReflectionParameters;
    ::ll::TypedStorage<1, 1, bool> mScreenSpaceReflectionsEnabled;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters const> mVolumeScatteringParameters;
    ::ll::TypedStorage<1, 1, bool> mVolumeScatteringEnabled;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::postfx::BloomParameters const> mBloomParameters;
    ::ll::TypedStorage<4, 4, float> mBloomMultiplier;
    ::ll::TypedStorage<4, 28, ::dragon::framerenderer::modules::water::WaterParameters const> mWaterParameters;
    ::ll::TypedStorage<4, 8, ::dragon::framerenderer::modules::water::WaterEnabledFeatures const> mWaterEnabledFeatures;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::WaterSurfaceParameters const> mWaterSurfaceParameters;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::rendering::UpscalingData>> mUpscalingData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::UpscalingCameraData>> const> mPlayerCameraUpscalingData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::AverageLuminanceData>> const> mPlayerAverageLuminanceData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::VolumeScatteringData>> const> mVolumeScatteringData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::rendering::ScreenSpaceReflectionsData>> const> mScreenSpaceReflectionsData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::framerenderer::modules::LocalExposureData>> const> mLocalExposureData;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<mce::framebuilder::LightProbeManager>> const> mLightProbeManagers;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::framebuilder::CausticsManager>> mCausticsManager;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::BiomeBlendingData const&> mBiomeBlendingData;
    ::ll::TypedStorage<8, 72, ::mce::framebuilder::BiomeBlendingParameters const> mBiomeBlendingParameters;
    ::ll::TypedStorage<1, 1, bool> mBiomeBlendingEnabled;
    ::ll::TypedStorage<1, 1, uchar> mMaxProbeWorkPerFrame;
    ::ll::TypedStorage<4, 4, float> mEmissiveDesaturation;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter> mCubeMapFilter;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedTextureResource>&> mTextureResourceService;
    ::ll::TypedStorage<4, 4, float> mTime;
    ::ll::UntypedStorage<8, 24> mBrdfLUT;
    ::ll::TypedStorage<4, 20, ::mce::framebuilder::CloudLightingParameters const> mCloudLightingParameters;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::SkyboxParameters const&> mSkyboxParameters;
    ::ll::TypedStorage<8, 96, ::dragon::frameobject::components::MeshFilter> mScreenTilesFilter;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mNightVisionAmbientLightIlluminance;
    ::ll::TypedStorage<4, 24, ::mce::framebuilder::SkyAmbientSamplesParameters const> mSkyAmbientSamplesParameters;
    ::ll::UntypedStorage<8, 24> mEmptyVoxelBuffer;
    ::ll::UntypedStorage<8, 24> mEmptyVolumeOffsetMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    VibrantVisualsFrameRendererResources& operator=(VibrantVisualsFrameRendererResources const&);
    VibrantVisualsFrameRendererResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    VibrantVisualsFrameRendererResources(::mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources&&);

    MCNAPI ~VibrantVisualsFrameRendererResources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::VibrantVisualsFrameRendererResources&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge

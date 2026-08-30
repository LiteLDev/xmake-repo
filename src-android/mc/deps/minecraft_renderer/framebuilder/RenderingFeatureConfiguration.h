#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/BiomeBlendingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/CausticsParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/CloudParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/CullingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredFrameBufferDebugViewerParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredLightingUpscaleParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DeferredNetherEndDimensionParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DirectionalLightParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/DitheringParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/LightGenerationParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PointLightParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ProbeRegenParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyAmbientSamplesParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyWeatherParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyboxParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/WaterSurfaceParameters.h"
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
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/VolumeScatteringParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/WaterEnabledFeatures.h"
#include "mc/external/render_dragon/frame_renderer/modules/WaterParameters.h"

namespace mce::framebuilder {

class RenderingFeatureConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 24, ::mce::framebuilder::DeferredFrameBufferDebugViewerParameters> mDeferredFrameBufferDebugViewerParameters;
    ::ll::TypedStorage<4, 64, ::mce::framebuilder::DirectionalLightParameters> mDirectionalLightParameters;
    ::ll::TypedStorage<4, 24, ::mce::framebuilder::LightGenerationParameters> mLightGenerationParameters;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::DeferredNetherEndDimensionParameters> mDeferredNetherEndDimensionParameters;
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::modules::LightClusteringParameters> mLightClusteringParameters;
    ::ll::TypedStorage<4, 144, ::dragon::framerenderer::DeferredShadingParameters> mDeferredShadingParameters;
    ::ll::TypedStorage<4, 16, ::mce::framebuilder::DeferredLightingUpscaleParameters> mDeferredLightingUpscaleParameters;
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters> mShadowParameters;
    ::ll::TypedStorage<1, 1, bool> mPointLightShadowsEnabled;
    ::ll::TypedStorage<1, 1, bool> mStaticColoredLightingEnabled;
    ::ll::TypedStorage<4, 40, ::mce::framebuilder::CloudParameters> mCloudParameters;
    ::ll::TypedStorage<4, 16, ::mce::framebuilder::SkyboxParameters> mSkyboxParameters;
    ::ll::TypedStorage<4, 12, ::mce::framebuilder::CullingParameters> mCullingParameters;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters> mPointLightParameters;
    ::ll::TypedStorage<4, 152, ::dragon::framerenderer::modules::AtmosphericScatteringParameters> mAtmosphericScatteringParameters;
    ::ll::TypedStorage<1, 1, bool> mAtmosphericScatteringEnabled;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mVolumeScatteringParameters;
    ::ll::TypedStorage<1, 1, bool> mVolumeScatteringEnabled;
    ::ll::TypedStorage<4, 36, ::dragon::framerenderer::modules::AverageLuminanceParameters> mAverageLuminanceParameters;
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::LocalExposureParameters> mLocalExposureParameters;
    ::ll::TypedStorage<8, 88, ::dragon::framerenderer::modules::ToneMappingParameters> mTonemappingParameters;
    ::ll::TypedStorage<4, 248, ::dragon::framerenderer::modules::ColorGradingParameters> mColorGradingParameters;
    ::ll::TypedStorage<4, 4, float> mBloomMultiplier;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::postfx::BloomParameters> mBloomParameters;
    ::ll::TypedStorage<1, 1, bool> mBloomEnabled;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::IBLParameters> mIBLParameters;
    ::ll::TypedStorage<1, 1, bool> mIBLEnabled;
    ::ll::TypedStorage<1, 1, bool> mResetSkyProbes;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::ProbeRegenParameters> mProbeRegenParameters;
    ::ll::TypedStorage<4, 84, ::dragon::framerenderer::modules::ScreenSpaceReflectionsParameters> mScreenSpaceReflectionParameters;
    ::ll::TypedStorage<1, 1, bool> mIsScreenSpaceReflectionsEnabled;
    ::ll::TypedStorage<4, 28, ::dragon::framerenderer::modules::water::WaterParameters> mWaterParameters;
    ::ll::TypedStorage<4, 8, ::dragon::framerenderer::modules::water::WaterEnabledFeatures> mWaterEnabledFeatures;
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::CausticsParameters> mCausticsParameters;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::WaterSurfaceParameters> mWaterSurfaceParameters;
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> mUpscalingParameters;
    ::ll::TypedStorage<8, 72, ::mce::framebuilder::BiomeBlendingParameters> mBiomeBlendingParameters;
    ::ll::TypedStorage<1, 1, bool> mBiomeBlendingEnabled;
    ::ll::TypedStorage<4, 24, ::mce::framebuilder::SkyAmbientSamplesParameters> mSkyAmbientSamplesParameters;
    ::ll::TypedStorage<1, 1, uchar> mMaxProbeWorkPerFrame;
    ::ll::TypedStorage<4, 4, float> mEmissiveDesaturation;
    ::ll::TypedStorage<2, 4, ::glm::vec<2, ushort, (glm::qualifier)0>> mTargetResolution;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mNightVisionAmbientLightIlluminance;
    ::ll::TypedStorage<4, 108, ::mce::framebuilder::SkyWeatherParameters> mSkyWeatherParameters;
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::DitheringParameters> mDitheringParameters;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder

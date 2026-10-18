#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct DeferredShadingParameters {
public:
    // DeferredShadingParameters inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class DirectionalShadowsMode : int {
        OFF      = 0,
        CASCADED = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, std::array<float, 3>> mBlockBaseAmbientLightColor;
    ::ll::TypedStorage<4, 4, float> mBlockLightIndirectContributionMultiplier;
    ::ll::TypedStorage<4, 4, float> mBlockLightIndirectSpecularFallbackMultiplier;
    ::ll::TypedStorage<4, 4, float> mSkyLightIndirectContributionMultiplier;
    ::ll::TypedStorage<4, 4, float> mIBLIndirectContributionMultiplier;
    ::ll::TypedStorage<4, 4, float> mVolumetricFogMinAmbientValue;
    ::ll::TypedStorage<4, 4, uint> mIBLSkyLightFadeStart;
    ::ll::TypedStorage<4, 4, uint> mIBLSkyLightFadeEnd;
    ::ll::TypedStorage<4, 4, float> mCameraLightIntensityLerpSpeed;
    ::ll::TypedStorage<4, 4, float> mEmissiveBrightnessMultiplier;
    ::ll::TypedStorage<4, 4, int> mEmissiveBrightnessVLUNormalizationFactor;
    ::ll::TypedStorage<4, 4, float> mDirectionalLightContributionFadeEndAngle;
    ::ll::TypedStorage<4, 4, float> mDirectionalLightContributionFadeBeginAngle;
    ::ll::TypedStorage<4, 4, float> mDirectionalLightContributionFadeEndAngleAtmospherics;
    ::ll::TypedStorage<4, 4, float> mDirectionalLightContributionFadeBeginAngleAtmospherics;
    ::ll::TypedStorage<4, 4, float> mSubsurfaceScatteringContribution;
    ::ll::TypedStorage<4, 4, float> mSubsurfaceScatteringDiffuseWrapValue;
    ::ll::TypedStorage<4, 4, float> mSubsurfaceScatteringFalloffDistance;
    ::ll::TypedStorage<4, 4, float> mEndPortalEmissiveMultiplier;
    ::ll::TypedStorage<4, 4, float> mSunTextureEmissiveMultiplier;
    ::ll::TypedStorage<4, 4, float> mMoonTextureEmissiveMultiplier;
    ::ll::TypedStorage<4, 4, float> mGlowInkSignStrength;
    ::ll::TypedStorage<4, 4, float> mLightningBoltAdaptiveEmissiveMultiplier;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::DeferredShadingParameters::DirectionalShadowsMode> mDirectionalShadowsMode;
    ::ll::TypedStorage<1, 1, bool> mSpecularEnabled;
    ::ll::TypedStorage<1, 1, bool> mDiffuseEnabled;
    ::ll::TypedStorage<1, 1, bool> mEmissiveEnabled;
    ::ll::TypedStorage<1, 1, bool> mAmbientEnabled;
    ::ll::TypedStorage<1, 1, bool> mDirectionalLightContributionEnabled;
    ::ll::TypedStorage<1, 1, bool> mPointLightContributionEnabled;
    ::ll::TypedStorage<1, 1, bool> mEnableDeferredShadingSkyLightHeuristic;
    ::ll::TypedStorage<1, 1, bool> mEnableVolumetricSkyLightHeuristic;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAmbientLightColor;
    ::ll::TypedStorage<4, 4, float> mAmbientLightIlluminance;
    ::ll::TypedStorage<4, 4, float> mSkyIntensity;
    ::ll::TypedStorage<1, 1, bool> mTexelReflectionsEnabled;
    ::ll::TypedStorage<1, 1, bool> mTexelShadowsEnabled;
    ::ll::TypedStorage<1, 1, bool> mDisableShadowFiltering;
    ::ll::TypedStorage<4, 4, int> mQuantizedTexelSize;
    ::ll::TypedStorage<4, 4, float> mQuantizationSurfaceNormalPrecision;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredShadingParameters& operator=(DeferredShadingParameters const&);
#else // @header-generator platform
    enum class DirectionalShadowsMode : int {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer

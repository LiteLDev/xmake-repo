#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/DLSSOptions.h"
#include "mc/external/bgfx/RtDebugMode.h"
#include "mc/external/bgfx/RtFrustumCuller.h"
#include "mc/external/bgfx/RtLevelCuller.h"
#include "mc/external/bgfx/RtRenderMethod.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RayTracingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                    mRtxOn;
    ::ll::TypedStorage<4, 16, ::bgfx::DLSSOptions>    mDLSSOptions;
    ::ll::TypedStorage<4, 4, float>                   mEmissiveBrightnessMultiplier;
    ::ll::TypedStorage<4, 4, float>                   mEmissiveDesaturation;
    ::ll::TypedStorage<4, 4, float>                   mIndirectEmissiveBoostMultiplier;
    ::ll::TypedStorage<4, 4, float>                   mSurfaceWetness;
    ::ll::TypedStorage<4, 4, uint>                    mIrradianceCacheMaxHistoryLength;
    ::ll::TypedStorage<4, 4, float>                   mRayCountMultiplier;
    ::ll::TypedStorage<1, 1, bool>                    mCameraIsUnderWater;
    ::ll::TypedStorage<1, 1, bool>                    mCameraIsUnderLava;
    ::ll::TypedStorage<4, 4, uint>                    mDimensionIdx;
    ::ll::TypedStorage<1, 1, bool>                    mOverrideLightAbsorptionScattering;
    ::ll::TypedStorage<4, 12, float[3]>               mFogAbsorbtion;
    ::ll::TypedStorage<4, 12, float[3]>               mFogScattering;
    ::ll::TypedStorage<4, 12, float[3]>               mWaterAbsorbtion;
    ::ll::TypedStorage<4, 12, float[3]>               mWaterScattering;
    ::ll::TypedStorage<4, 12, float[3]>               mCloudAbsorbtion;
    ::ll::TypedStorage<4, 12, float[3]>               mCloudScattering;
    ::ll::TypedStorage<1, 1, bool>                    mOverrideSunDirection;
    ::ll::TypedStorage<4, 12, float[3]>               mDirectionToSun;
    ::ll::TypedStorage<4, 4, float>                   mTweakableSunAzimuthRotation;
    ::ll::TypedStorage<4, 4, float>                   mHeightMapPixelEdgeWidth;
    ::ll::TypedStorage<4, 4, float>                   mHeightMapDepth;
    ::ll::TypedStorage<1, 1, bool>                    mOverrideFog;
    ::ll::TypedStorage<4, 4, float>                   mHeightFogFalloffHeight;
    ::ll::TypedStorage<4, 4, float>                   mHeightFogStart;
    ::ll::TypedStorage<4, 4, float>                   mFogHenyeyGreensteinG;
    ::ll::TypedStorage<4, 4, float>                   mWaterHenyeyGreensteinG;
    ::ll::TypedStorage<4, 4, float>                   mFogDensityMultiplier;
    ::ll::TypedStorage<1, 1, bool>                    mInjectGlobalIlluminationIntoFog;
    ::ll::TypedStorage<4, 4, float>                   mFogStart;
    ::ll::TypedStorage<4, 4, float>                   mFogEnd;
    ::ll::TypedStorage<4, 4, float>                   mRenderDistance;
    ::ll::TypedStorage<4, 4, float>                   mWeatherFogLevel;
    ::ll::TypedStorage<4, 4, float>                   mRainLevel;
    ::ll::TypedStorage<1, 1, bool>                    mOverrideSky;
    ::ll::TypedStorage<4, 16, float[4]>               mSkyColor;
    ::ll::TypedStorage<4, 8, float[2]>                mSkyUVScale;
    ::ll::TypedStorage<4, 12, float[3]>               mFinalCombineSkyColourOverride;
    ::ll::TypedStorage<4, 4, float>                   mFinalCombineSkyColourOverrideStrength;
    ::ll::TypedStorage<4, 12, float[3]>               mPreviousFrameWorldOrigin;
    ::ll::TypedStorage<4, 12, float[3]>               mWorldOrigin;
    ::ll::TypedStorage<1, 1, bool>                    mNightVisionEnabled;
    ::ll::TypedStorage<4, 4, float>                   mNightVisionScale;
    ::ll::TypedStorage<4, 4, float>                   mExposureModifierEv;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureTemporalFilterAlpha;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureMinEV;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureMaxEV;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureLobeDifferenceThreshold;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureLobeMixingMin;
    ::ll::TypedStorage<4, 4, float>                   mAutoExposureLobeMixingMax;
    ::ll::TypedStorage<4, 4, float>                   mSkyBrightnessAdjustment;
    ::ll::TypedStorage<4, 4, float>                   mMoonMeshIntensity;
    ::ll::TypedStorage<4, 4, float>                   mSunMeshIntensity;
    ::ll::TypedStorage<4, 4, ::bgfx::RtDebugMode>     mDebugMode;
    ::ll::TypedStorage<4, 4, ::bgfx::RtRenderMethod>  mRenderMethod;
    ::ll::TypedStorage<4, 4, float>                   mSmoothertron;
    ::ll::TypedStorage<1, 1, bool>                    mEnableDenoising;
    ::ll::TypedStorage<1, 1, bool>                    mEnableGlassOpacityHack;
    ::ll::TypedStorage<1, 1, bool>                    mRequestRecompileShaders;
    ::ll::TypedStorage<1, 1, bool>                    mEnableProfiling;
    ::ll::TypedStorage<1, 1, bool>                    mEnableIrradianceCache;
    ::ll::TypedStorage<1, 1, bool>                    mProbabilityBasedRaycasts;
    ::ll::TypedStorage<1, 1, bool>                    mEnableCausticsStabilizationInRefMode;
    ::ll::TypedStorage<1, 1, bool>                    mEnableRayReordering;
    ::ll::TypedStorage<1, 1, bool>                    mEnableSHDiffuse;
    ::ll::TypedStorage<1, 1, bool>                    mEnableWFTest;
    ::ll::TypedStorage<1, 1, bool>                    mVisualizeLights;
    ::ll::TypedStorage<1, 1, bool>                    mEnableExplicitLightSampling;
    ::ll::TypedStorage<4, 4, float>                   mExplicitLightsIntensityBias;
    ::ll::TypedStorage<4, 4, uint>                    mMaxLightCount;
    ::ll::TypedStorage<4, 4, ::bgfx::RtLevelCuller>   mLevelCuller;
    ::ll::TypedStorage<4, 4, ::bgfx::RtFrustumCuller> mFrustumCuller;
    ::ll::TypedStorage<4, 4, float>                   mDynamicRenderScale;
    ::ll::TypedStorage<4, 4, float>                   mFocalDistance;
    ::ll::TypedStorage<4, 4, float>                   mApertureSize;
    ::ll::TypedStorage<4, 4, uint>                    mApertureType;
    ::ll::TypedStorage<4, 4, float>                   mDiffuseDespeckleFilterRelativeDifferenceEpsilon;
    ::ll::TypedStorage<4, 4, float>                   mSpecularDespeckleFilterRelativeDifferenceEpsilon;
    ::ll::TypedStorage<4, 4, float>                   mSVGFDiffuseAlpha;
    ::ll::TypedStorage<4, 4, float>                   mSVGFDiffuseAlphaMoments;
    ::ll::TypedStorage<4, 4, float>                   mSVGFDiffusePhiLuminance;
    ::ll::TypedStorage<4, 4, float>                   mSVGFSpecularAlpha;
    ::ll::TypedStorage<4, 4, float>                   mSVGFSpecularAlphaMoments;
    ::ll::TypedStorage<4, 4, float>                   mSVGFSpecularPhiLuminance;
    ::ll::TypedStorage<4, 4, float>                   mSVGFDiffusePhiNormal;
    ::ll::TypedStorage<4, 4, float>                   mSVGFSpecularPhiNormal;
    ::ll::TypedStorage<4, 4, float>                   mSVGFPhiDepth;
    ::ll::TypedStorage<4, 4, int>                     mSVGFAtrousIterationCountDiffuse;
    ::ll::TypedStorage<4, 4, int>                     mSVGFAtrousIterationCountSpecular;
    ::ll::TypedStorage<4, 4, int>                     mSVGFDiffuseTemporalFeedbackIterationIdx;
    ::ll::TypedStorage<4, 4, int>                     mSVGFSpecularTemporalFeedbackIterationIdx;
    ::ll::TypedStorage<1, 1, bool>                    mSVGFEnableFireflyFilterDiffuse;
    ::ll::TypedStorage<1, 1, bool>                    mSVGFEnableFireflyFilterSpecular;
    ::ll::TypedStorage<1, 1, bool>                    mEnableAdaptiveDenoiser;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingShadowContrast;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingShadowContrastEnd;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingCurveShift;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingDynamicRange;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingShadowMinSlope;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingMaxExposureIncrease;
    ::ll::TypedStorage<4, 4, float>                   mToneMappingFilmicSaturationCorrection;
    ::ll::TypedStorage<1, 1, bool>                    mPrioritizeVisibleChunksForIrradianceCache;
    ::ll::TypedStorage<4, 16, float[4]>               mGenericDebugSliders;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RayTracingConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct RayTracingConfiguration {};
#endif // @header-generator platform

} // namespace bgfx

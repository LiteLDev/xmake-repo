#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/FidelityFXPrecision.h"
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
class UpscalingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> mUpscalingParameters;
    ::ll::TypedStorage<4, 4, uint>                                                   mCurrentJitterIdx;
    ::ll::TypedStorage<4, 4, float>                                                  mDynamicResolutionScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpscalingData();

    MCNAPI float getDynamicResolutionScale() const;

    MCNAPI bool getEnableColorClipping() const;

    MCNAPI bool getEnableMotionVectorFiltering() const;

    MCNAPI ::dragon::framerenderer::modules::fidelityfx::FidelityFXPrecision getFSRPrecisionMode() const;

    MCNAPI bool getFSRSharpeningEnabled() const;

    MCNAPI float getFSRSharpness() const;

    MCNAPI float getMinDynamicResolutionScale() const;

    MCNAPI float getPixelScalingFactor() const;

    MCNAPI float getSmoothingAlpha() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getSubPixelJitterOffset() const;

    MCNAPI float getTargetFrameRate() const;

    MCNAPI float getUpscalingFactor() const;

    MCNAPI ::dragon::framerenderer::modules::UpscalingParameters::Mode const getUpscalingMode() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getVarianceClippingBiasMaxMin() const;

    MCNAPI bool isDynamicResolutionEnabled() const;

    MCNAPI bool isFSRComputeEnabled() const;

    MCNAPI bool isUpscalingEnabled() const;

    MCNAPI void setUpscalingParameters(::dragon::framerenderer::modules::UpscalingParameters const&);

    MCNAPI void updateFrameTick(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UpscalingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> mUpscalingParameters;
    ::ll::TypedStorage<4, 4, uint>                                                   mCurrentJitterIdx;
    ::ll::TypedStorage<4, 4, float>                                                  mDynamicResolutionScale;
    // NOLINTEND
};
#else // @header-generator platform
class UpscalingData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace dragon::rendering

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/HorizonBlendStops.h"

namespace dragon::framerenderer::modules {

struct AtmosphericScatteringParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>             mSunDir;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>             mMoonDir;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>             mSunColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>             mMoonColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>             mFogColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>             mSkyZenithColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>             mSkyHorizonColor;
    ::ll::TypedStorage<4, 16, ::dragon::framerenderer::modules::HorizonBlendStops> mHorizonBlendStops;
    ::ll::TypedStorage<4, 4, float>                                                mRayleighStrength;
    ::ll::TypedStorage<4, 4, float>                                                mSunMieStrength;
    ::ll::TypedStorage<4, 4, float>                                                mMoonMieStrength;
    ::ll::TypedStorage<4, 4, float>                                                mSunGlareShape;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWatermRayleighStrength;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWaterSunMieStrength;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWaterMoonMieStrength;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWaterHorizonBlendMax;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWaterZenithColorFactor;
    ::ll::TypedStorage<4, 4, float>                                                mUnderWaterHorizonColorFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScatteringParameters();
};

} // namespace dragon::framerenderer::modules

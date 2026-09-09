#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

struct RenderAtmosphereDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                   mViewId;
    ::ll::TypedStorage<4, 4, uint>                                     mDimensionIdx;
    ::ll::TypedStorage<4, 4, float>                                    mFogMaxDensity;
    ::ll::TypedStorage<4, 4, float>                                    mFogMaxDensityHeight;
    ::ll::TypedStorage<4, 4, float>                                    mFogZeroDensityHeight;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mFogAbsorbtion;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mFogScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mWaterAbsorbtion;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mWaterScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mCloudAbsorbtion;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mCloudScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mFogColor;
    ::ll::TypedStorage<4, 4, float>                                    mFogStart;
    ::ll::TypedStorage<4, 4, float>                                    mFogEnd;
    ::ll::TypedStorage<4, 4, float>                                    mRenderDistance;
    ::ll::TypedStorage<4, 4, float>                                    mFarChunksDistance;
    ::ll::TypedStorage<4, 4, float>                                    mWeatherFogLevel;
    ::ll::TypedStorage<4, 4, float>                                    mRainLevel;
    ::ll::TypedStorage<4, 4, float>                                    mHeavyFogAmbientContribution;
    ::ll::TypedStorage<1, 1, bool>                                     mIsFullScreenHeavyFog;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mSkyColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mSkyZenithColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mSkyHorizonColor;
    ::ll::UntypedStorage<8, 24>                                        mSkyTexture;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mSkyUVScale;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mCameraLightIntensity;
    ::ll::TypedStorage<4, 4, float>                                    mBlockAmbientContribution;
    ::ll::TypedStorage<4, 4, float>                                    mSkyAmbientContribution;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mSunDirection;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mSunColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mMoonDirection;
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mMoonColor;
    // NOLINTEND
};

} // namespace mce::framebuilder

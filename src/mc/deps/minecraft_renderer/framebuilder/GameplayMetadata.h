#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameplayMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mBlockBrightness;
    ::ll::TypedStorage<4, 4, float>                                    mMoonIntensity;
    ::ll::TypedStorage<4, 4, float>                                    mRenderDistance;
    ::ll::TypedStorage<4, 4, float>                                    mSkyBrightness;
    ::ll::TypedStorage<4, 4, float>                                    mSunIntensity;
    ::ll::TypedStorage<4, 4, float>                                    mTimeOfDay;
    ::ll::TypedStorage<4, 4, float>                                    mElapsedFrameTime;
    ::ll::TypedStorage<4, 4, int>                                      mBiomeID;
    ::ll::TypedStorage<4, 4, int>                                      mCurrentTime;
    ::ll::TypedStorage<4, 4, int>                                      mDay;
    ::ll::TypedStorage<4, 4, int>                                      mDimensionID;
    ::ll::TypedStorage<4, 4, int>                                      mMoonPhase;
    ::ll::TypedStorage<4, 4, int>                                      mWeatherID;
    ::ll::TypedStorage<2, 2, short>                                    mCloudHeight;
    ::ll::TypedStorage<1, 1, bool>                                     mIsOverworld;
    ::ll::TypedStorage<1, 1, bool>                                     mIsEnd;
    ::ll::TypedStorage<1, 1, bool>                                     mUnderLiquid;
    ::ll::TypedStorage<1, 1, uchar>                                    mLocalClientID;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCameraPos;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCameraFacingDirection;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCloudColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mFogColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mMoonColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mSunColor;
    // NOLINTEND
};
#else // @header-generator platform
struct GameplayMetadata {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents

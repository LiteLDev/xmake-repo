#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/math/Vec4.h"
#include "mc/world/level/block/BrightnessPair.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/math/Vec4.h"
#include "mc/world/level/block/BrightnessPair.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
struct CommonParticle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mDirection;
    ::ll::TypedStorage<4, 4, float>                                                       mRotation;
    ::ll::TypedStorage<4, 4, float>                                                       mRotationSpeed;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                      mRenderSize;
    ::ll::TypedStorage<4, 16, ::Vec2[2]>                                                  mUV;
    ::ll::TypedStorage<4, 4, float>                                                       mScale;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                               mColor;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                            mAmbientLighting;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                               mLightColor;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mPositionPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mVelocityPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mDirectionPrev;
    ::ll::TypedStorage<4, 4, float>                                                       mRotationPrev;
    ::ll::TypedStorage<1, 1, bool>                                                        mDynamicPreviousDataValid;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                      mRenderSizePrev;
    ::ll::TypedStorage<4, 4, float>                                                       mScalePrev;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                               mColorPrev;
    ::ll::TypedStorage<1, 1, bool>                                                        mHadFirstPrepare;
    ::ll::TypedStorage<4, 16, ::Vec4>                                                     mRandom;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mParticleLifetime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mParticleAge;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonParticle& operator=(CommonParticle const&);
    CommonParticle(CommonParticle const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CommonParticle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                    mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mDirection;
    ::ll::TypedStorage<4, 4, float>                      mRotation;
    ::ll::TypedStorage<4, 4, float>                      mRotationSpeed;
    ::ll::TypedStorage<4, 8, ::Vec2>                     mRenderSize;
    ::ll::TypedStorage<4, 16, ::Vec2[2]>                 mUV;
    ::ll::TypedStorage<4, 4, float>                      mScale;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mColor;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>           mAmbientLighting;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mLightColor;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mPositionPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mVelocityPrev;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mDirectionPrev;
    ::ll::TypedStorage<4, 4, float>                      mRotationPrev;
    ::ll::TypedStorage<1, 1, bool>                       mDynamicPreviousDataValid;
    ::ll::TypedStorage<4, 8, ::Vec2>                     mRenderSizePrev;
    ::ll::TypedStorage<4, 4, float>                      mScalePrev;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mColorPrev;
    ::ll::TypedStorage<1, 1, bool>                       mHadFirstPrepare;
    ::ll::TypedStorage<4, 16, ::Vec4>                    mRandom;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mParticleLifetime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mParticleAge;
    // NOLINTEND
};
#else // @header-generator platform
struct CommonParticle {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

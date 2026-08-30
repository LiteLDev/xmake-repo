#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ShouldBounce.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorComponentDescription.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

// auto generated forward declare list
// clang-format off
class OnHitSubcomponent;
struct DeserializeDataParams;
// clang-format on

struct ProjectileDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mProjectileOffset;
    ::ll::TypedStorage<4, 4, float>                                            mProjectilePower;
    ::ll::TypedStorage<1, 1, bool>                                             mLightingOnHit;
    ::ll::TypedStorage<4, 4, float>                                            mGravity;
    ::ll::TypedStorage<4, 4, float>                                            mUpwardsAngleOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                                   mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                            mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>                                            mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, float>                                            mOnFireTime;
    ::ll::TypedStorage<4, 4, int>                                              mPotionEffect;
    ::ll::TypedStorage<4, 4, float>                                            mSplashRange;
    ::ll::TypedStorage<1, 1, bool>                                             mCatchFire;
    ::ll::TypedStorage<4, 4, float>                                            mInertiaMod;
    ::ll::TypedStorage<4, 4, float>                                            mLiquidInertia;
    ::ll::TypedStorage<8, 24, std::string>                                     mHitEntitySound;
    ::ll::TypedStorage<8, 24, std::string>                                     mHitGroundSound;
    ::ll::TypedStorage<8, 24, std::string>                                     mShootSound;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>                               mAnchor;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<OnHitSubcomponent>>> mOnHitCommands;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                        mOnHitEvent;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                             mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                             mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                             mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                             mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                             mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                             mIsHoming;
    ::ll::TypedStorage<1, 1, ::ShouldBounce>                                   mShouldBounce;
    ::ll::TypedStorage<1, 1, bool>                                             mHitWater;
    ::ll::TypedStorage<1, 1, bool>                                             mMultipleHits;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionIdentifier>>          mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                                             mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                             mIsolatedPhysics;
    ::ll::TypedStorage<4, 4, float>                                            mReflectImmunityInSeconds;
    ::ll::TypedStorage<4, 4, int>                                              mOwnerLaunchImmunityTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const;

    virtual ~ProjectileDescription();

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectileDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ShouldBounce.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/entity/components_json_legacy/ShouldBounce.h"
#endif // @header-generator platform
#include "mc/world/actor/ActorComponentDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

// auto generated forward declare list
// clang-format off
class OnHitSubcomponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
struct DeserializeDataParams;
// clang-format on

struct ProjectileDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                                mProjectileOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mProjectilePower;
    ::ll::TypedStorage<1, 1, bool>                                                   mLightingOnHit;
    ::ll::TypedStorage<4, 4, float>                                                  mGravity;
    ::ll::TypedStorage<4, 4, float>                                                  mUpwardsAngleOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                                         mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                                  mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>                                                  mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                  mOnFireTime;
    ::ll::TypedStorage<4, 4, int>                                                    mPotionEffect;
    ::ll::TypedStorage<4, 4, float>                                                  mSplashRange;
    ::ll::TypedStorage<1, 1, bool>                                                   mCatchFire;
    ::ll::TypedStorage<4, 4, float>                                                  mInertiaMod;
    ::ll::TypedStorage<4, 4, float>                                                  mLiquidInertia;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mHitEntitySound;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mHitGroundSound;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mShootSound;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>                                     mAnchor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::OnHitSubcomponent>>> mOnHitCommands;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                             mOnHitEvent;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                                   mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                   mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                   mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                   mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                   mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsHoming;
    ::ll::TypedStorage<1, 1, ::ShouldBounce>                                         mShouldBounce;
    ::ll::TypedStorage<1, 1, bool>                                                   mHitWater;
    ::ll::TypedStorage<1, 1, bool>                                                   mMultipleHits;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionIdentifier>>            mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                                                   mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsolatedPhysics;
    ::ll::TypedStorage<4, 4, float>                                                  mReflectImmunityInSeconds;
    ::ll::TypedStorage<4, 4, int>                                                    mOwnerLaunchImmunityTicks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* getJsonName() const;
#else // @header-generator platform
    virtual char const* getJsonName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ProjectileDescription();
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~ProjectileDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* $getJsonName() const;
#else // @header-generator platform
    MCAPI char const* $getJsonName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

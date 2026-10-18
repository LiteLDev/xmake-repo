#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ProjectileHitState.h"
#include "mc/ShouldBounce.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Difficulty.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/entity/components_json_legacy/ProjectileHitState.h"
#include "mc/entity/components_json_legacy/ShouldBounce.h"
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseGameVersion;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class OnHitSubcomponent;
class Vec2;
// clang-format on

class ProjectileComponent {
public:
    // ProjectileComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum EAxis : int {
        NONE = -1,
#else // @header-generator platform
    enum class EAxis : int {
        None = -1,
#endif // @header-generator platform
        X    = 0,
        Y    = 1,
        Z    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mWasOnGround;
    ::ll::TypedStorage<1, 1, bool>                                   mNoPhysics;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mOwnerId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mThrownPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mApexPos;
    ::ll::TypedStorage<1, 1, bool>                                   mFoundApex;
    ::ll::TypedStorage<4, 4, int>                                    mDespawnTimer;
    ::ll::TypedStorage<4, 4, int>                                    mLifetime;
    ::ll::TypedStorage<4, 4, int>                                    mFlightTime;
    ::ll::TypedStorage<4, 4, int>                                    mOnGroundTime;
    ::ll::TypedStorage<4, 4, int>                                    mShakeTime;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mStuckToBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mCollisionPos;
    ::ll::TypedStorage<4, 4, int>                                    mEnchantPower;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                                       mEnchantImpaler;
    ::ll::TypedStorage<4, 136, ::HitResult>                          mHitResult;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    mEnchantImpaler;
    ::ll::TypedStorage<8, 136, ::HitResult>                          mHitResult;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                  mHitFacing;
    ::ll::TypedStorage<1, 1, bool>                                   mReflect;
    ::ll::TypedStorage<4, 4, int>                                    mReflectImmunityTicks;
    ::ll::TypedStorage<4, 4, float>                                  mPower;
    ::ll::TypedStorage<4, 4, float>                                  mDamage;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                         mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                  mGravity;
    ::ll::TypedStorage<4, 4, float>                                  mUpwardsAngleOffset;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<OnHitSubcomponent*>>       mOnHitCommands;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnHitEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OnHitSubcomponent*>>   mOnHitCommands;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnHitEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>                                  mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, float>                                  mOnFireTime;
    ::ll::TypedStorage<4, 4, int>                                    mPotionEffect;
    ::ll::TypedStorage<4, 4, float>                                  mSplashRange;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackForce;
    ::ll::TypedStorage<1, 1, bool>                                   mCatchFire;
    ::ll::TypedStorage<1, 1, bool>                                   mChanneling;
    ::ll::TypedStorage<4, 4, float>                                  mInertiaMod;
    ::ll::TypedStorage<4, 4, float>                                  mLiquidInertia;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>                     mSpawnPosAnchor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mHitEntitySound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mHitGroundSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mShootSound;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                   mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                   mDamageOwner;
    ::ll::TypedStorage<1, 1, bool>                                   mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                   mHitWater;
    ::ll::TypedStorage<1, 1, bool>                                   mHitActor;
    ::ll::TypedStorage<1, 1, bool>                                   mMultipleHits;
    ::ll::TypedStorage<4, 4, int>                                    mPiercingEnchantLevel;
    ::ll::TypedStorage<4, 4, int>                                    mActorHitCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorType>>                mIgnoredEntities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorType>>            mIgnoredEntities;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                   mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                   mIsHoming;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mPendingTargetID;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                      mTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>                   mTarget;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mTargetID;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetDelta;
    ::ll::TypedStorage<4, 4, int>                                    mFlightSteps;
    ::ll::TypedStorage<4, 4, ::ProjectileComponent::EAxis>           mCurrentMoveDirection;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mLastReflectActor;
    ::ll::TypedStorage<1, 5, ::ProjectileHitState>                   mHitState;
    ::ll::TypedStorage<1, 1, ::ShouldBounce>                         mShouldBounce;
    ::ll::TypedStorage<4, 4, uint>                                   mCurrentDelay;
    ::ll::TypedStorage<1, 1, bool>                                   mWaitingForServer;
    ::ll::TypedStorage<1, 1, bool>                                   mWaitingForServerHitGround;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 136, ::HitResult>                          mCachedHitResult;
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::HitResult>                          mCachedHitResult;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                   mDelayOneFrame;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldRestoreUsesMobTravelComponent;
    ::ll::TypedStorage<1, 1, bool>                                   mIsolatedPhysics;
    ::ll::TypedStorage<4, 4, int>                                    mOwnerLaunchImmunityTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileComponent& operator=(ProjectileComponent const&);

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ProjectileComponent();
#else // @header-generator platform
    MCAPI ProjectileComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ProjectileComponent(::ProjectileComponent&&);
#else // @header-generator platform
    MCAPI ProjectileComponent(::ProjectileComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ProjectileComponent(::ProjectileComponent const&);
#else // @header-generator platform
    MCAPI ProjectileComponent(::ProjectileComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isLoyaltyTrident(::Actor const&) const;
#else // @header-generator platform
    MCAPI void _selectNextMoveDirection(::Actor const& owner, ::ProjectileComponent::EAxis avoidAxis);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _selectNextMoveDirection(::Actor const&, ::ProjectileComponent::EAxis);
#else // @header-generator platform
    MCAPI void _tryReflectOnHurt(::Actor& owner, ::ActorDamageSource const& damageSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryReflectOnHurt(::Actor&, ::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::Vec3 getShooterAngle(::Actor& shooter) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float computeCollisionMargin(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void handleMovementAndGravity(::Actor& owner, bool skipPositionUpdate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ProjectileAnchor getAnchor();
#else // @header-generator platform
    MCAPI void handleMovementHoming(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getCatchFire() const;
#else // @header-generator platform
    MCAPI void hurt(::Actor& owner, ::ActorDamageSource const& damageSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getEnchantChanneling() const;
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getGravity() const;
#else // @header-generator platform
    MCAPI void lerpMotion(::Actor& owner, ::Vec3 const& delta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsDangerous();
#else // @header-generator platform
    MCAPI void onComponentRemoved(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getKnockbackForce() const;
#else // @header-generator platform
    MCAPI void onHit(::Actor& owner, ::HitResult const& hitResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getNoPhysics() const;
#else // @header-generator platform
    MCAPI ::ProjectileComponent& operator=(::ProjectileComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getOffset();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getShootSound();
#else // @header-generator platform
    MCAPI void setActiveTarget(::Actor const& owner, ::Actor* target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getShootTarget();
#else // @header-generator platform
    MCAPI void shoot(::Actor& owner, ::Actor& shooter);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getShooterAngle(::Actor&) const;
#else // @header-generator platform
    MCAPI void
    shoot(::Actor& owner, ::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed, ::Actor* target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ShouldBounce getShouldBounce() const;
#else // @header-generator platform
    MCAPI void tryApplyOffset(::Actor& owner, ::Actor* sender) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getStopOnHurt() const;

    MCNAPI float getThrowPower() const;

    MCNAPI float getUncertainty(::SharedTypes::Legacy::Difficulty) const;

    MCNAPI float getUncertaintyBase() const;

    MCNAPI void handleMovementAndGravity(::Actor&, bool);

    MCNAPI void handleMovementHoming(::Actor&);

    MCNAPI void hurt(::Actor&, ::ActorDamageSource const&);

    MCNAPI int incrementDespawnTimer();

    MCNAPI int incrementFlightTime();

    MCNAPI int incrementLifetime();

    MCNAPI int incrementOnGroundTime();

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void lerpMotion(::Actor&, ::Vec3 const&);

    MCNAPI void onComponentRemoved(::EntityContext&);

    MCNAPI void onHit(::Actor&, ::HitResult const&);

    MCNAPI ::ProjectileComponent& operator=(::ProjectileComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setActiveTarget(::Actor const&, ::Actor*);

    MCNAPI void setCatchFire(bool);

    MCNAPI void setChanneling(bool);

    MCNAPI void setEnchantImpaler(int const&);

    MCNAPI void setGravity(float);

    MCNAPI void setHitSound(::SharedTypes::Legacy::LevelSoundEvent);

    MCNAPI void setKnockbackForce(float);

    MCNAPI void setNoPhysics(bool);

    MCNAPI void setOwnerId(::ActorUniqueID);

    MCNAPI void setPotionEffect(int);

    MCNAPI void setShouldBounce(::ShouldBounce);

    MCNAPI void setSplashRange(float);

    MCNAPI void setStopOnHurt(bool);

    MCNAPI void shoot(::Actor&, ::Actor&);

    MCNAPI void shoot(::Actor&, ::Vec3 const&, float, float, ::Vec3 const&, ::Actor*);

    MCNAPI void tryApplyOffset(::Actor&, ::Actor*) const;

    MCNAPI ~ProjectileComponent();
#else // @header-generator platform
    MCAPI ~ProjectileComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec2 dampenShooterAngle(::Vec2 const&, float, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI static bool _isLoyaltyTrident(::Actor const& owner);

    MCAPI static ::Vec2 dampenShooterAngle(::Vec2 const& angle, float angleOffset, ::BaseGameVersion const& version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ProjectileComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ProjectileComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ProjectileComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ProjectileComponent const&);
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
};

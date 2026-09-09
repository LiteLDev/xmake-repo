#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ProjectileHitState.h"
#include "mc/ShouldBounce.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
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
class Level;
class OnHitSubcomponent;
class Vec2;
// clang-format on

class ProjectileComponent {
public:
    // ProjectileComponent inner types define
    enum EAxis : int {
        NONE = -1,
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
    ::ll::UntypedStorage<4, 8>                                       mEnchantImpaler;
    ::ll::TypedStorage<4, 136, ::HitResult>                          mHitResult;
    ::ll::TypedStorage<1, 1, uchar>                                  mHitFacing;
    ::ll::TypedStorage<1, 1, bool>                                   mReflect;
    ::ll::TypedStorage<4, 4, int>                                    mReflectImmunityTicks;
    ::ll::TypedStorage<4, 4, float>                                  mPower;
    ::ll::TypedStorage<4, 4, float>                                  mDamage;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType>                         mHitParticle;
    ::ll::TypedStorage<4, 4, float>                                  mGravity;
    ::ll::TypedStorage<4, 4, float>                                  mUpwardsAngleOffset;
    ::ll::TypedStorage<8, 24, std::vector<OnHitSubcomponent*>>       mOnHitCommands;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnHitEvent;
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
    ::ll::TypedStorage<8, 24, std::vector<ActorType>>                mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                                   mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                   mIsHoming;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mPendingTargetID;
    ::ll::UntypedStorage<8, 40>                                      mTarget;
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
    ::ll::TypedStorage<4, 136, ::HitResult>                          mCachedHitResult;
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
    MCNAPI ProjectileComponent();

    MCNAPI ProjectileComponent(::ProjectileComponent&&);

    MCNAPI ProjectileComponent(::ProjectileComponent const&);

    MCNAPI bool _isLoyaltyTrident(::Actor const&) const;

    MCNAPI void _selectNextMoveDirection(::Actor const&, ::ProjectileComponent::EAxis);

    MCNAPI void _tryReflectOnHurt(::Actor&, ::ActorDamageSource const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI float computeCollisionMargin(::BaseGameVersion const&);

    MCNAPI ::ProjectileAnchor getAnchor();

    MCNAPI bool getCatchFire() const;

    MCNAPI bool getEnchantChanneling() const;

    MCNAPI float getGravity() const;

    MCNAPI bool getIsDangerous();

    MCNAPI float getKnockbackForce() const;

    MCNAPI bool getNoPhysics() const;

    MCNAPI ::Vec3 getOffset();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getShootSound();

    MCNAPI bool getShootTarget();

    MCNAPI ::Vec3 getShooterAngle(::Actor&) const;

    MCNAPI ::ShouldBounce getShouldBounce() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec2 dampenShooterAngle(::Vec2 const&, float, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ProjectileComponent&&);

    MCNAPI void* $ctor(::ProjectileComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

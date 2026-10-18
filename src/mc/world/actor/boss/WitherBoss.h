#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/WitherBossPreAIStepResult.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
class MobEffectInstance;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtEffectsSettings;
struct HurtParameters;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types define
    enum class WitherAttackType : int {
        Charge        = 0,
        HurtExplosion = 1,
        Projectile    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                MAX_SHIELD_HEALTH;
    ::ll::TypedStorage<4, 4, int>                                mShieldHealth;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                         mHeadRots;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                         mOldHeadRots;
    ::ll::TypedStorage<4, 12, int[3]>                            mNextHeadUpdate;
    ::ll::TypedStorage<4, 12, int[3]>                            mIdleHeadUpdates;
    ::ll::TypedStorage<4, 4, int>                                mDestroyBlocksTick;
    ::ll::TypedStorage<4, 4, int>                                mHealthThreshold;
    ::ll::TypedStorage<4, 4, int>                                mPhase;
    ::ll::TypedStorage<1, 1, bool>                               mWantsToExplode;
    ::ll::TypedStorage<1, 1, bool>                               mCharging;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mChargeDirection;
    ::ll::TypedStorage<4, 4, int>                                mChargeFrames;
    ::ll::TypedStorage<4, 4, int>                                mPreparingCharge;
    ::ll::TypedStorage<4, 4, int>                                mProjectileCounter;
    ::ll::TypedStorage<4, 4, int>                                mSpawningFrames;
    ::ll::TypedStorage<4, 4, int>                                mTimeTillNextShot;
    ::ll::TypedStorage<4, 4, int>                                mFireRate;
    ::ll::TypedStorage<4, 4, float>                              mSpinSpeed;
    ::ll::TypedStorage<4, 4, int>                                mStunTimer;
    ::ll::TypedStorage<4, 4, int>                                mFramesTillMove;
    ::ll::TypedStorage<1, 1, bool>                               mWantsMove;
    ::ll::TypedStorage<1, 1, bool>                               mIsPathing;
    ::ll::TypedStorage<4, 4, int>                                mMaxHealth;
    ::ll::TypedStorage<4, 4, int>                                mNumSkeletons;
    ::ll::TypedStorage<4, 4, int>                                mMaxSkeletons;
    ::ll::TypedStorage<4, 4, int>                                mMovementTime;
    ::ll::TypedStorage<4, 4, int>                                mHealthIntervals;
    ::ll::TypedStorage<4, 4, int>                                mLastHealthValue;
    ::ll::TypedStorage<4, 4, int>                                mDelayShot;
    ::ll::TypedStorage<4, 4, int>                                mTimeSinceLastShot;
    ::ll::TypedStorage<4, 4, float>                              mAttackRange;
    ::ll::TypedStorage<1, 1, bool>                               mSecondVolley;
    ::ll::TypedStorage<4, 4, int>                                mMainHeadAttackCountdown;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDamageSource>> mDeathSource;
    ::ll::TypedStorage<4, 4, int>                                mlastFiredHead;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    MAX_SHIELD_HEALTH;
    ::ll::TypedStorage<4, 4, int>                                    mShieldHealth;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                             mHeadRots;
    ::ll::TypedStorage<4, 24, ::Vec2[3]>                             mOldHeadRots;
    ::ll::TypedStorage<4, 12, int[3]>                                mNextHeadUpdate;
    ::ll::TypedStorage<4, 12, int[3]>                                mIdleHeadUpdates;
    ::ll::TypedStorage<4, 4, int>                                    mDestroyBlocksTick;
    ::ll::TypedStorage<4, 4, int>                                    mHealthThreshold;
    ::ll::TypedStorage<4, 4, int>                                    mPhase;
    ::ll::TypedStorage<1, 1, bool>                                   mWantsToExplode;
    ::ll::TypedStorage<1, 1, bool>                                   mCharging;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mChargeDirection;
    ::ll::TypedStorage<4, 4, int>                                    mChargeFrames;
    ::ll::TypedStorage<4, 4, int>                                    mPreparingCharge;
    ::ll::TypedStorage<4, 4, int>                                    mProjectileCounter;
    ::ll::TypedStorage<4, 4, int>                                    mSpawningFrames;
    ::ll::TypedStorage<4, 4, int>                                    mTimeTillNextShot;
    ::ll::TypedStorage<4, 4, int>                                    mFireRate;
    ::ll::TypedStorage<4, 4, float>                                  mSpinSpeed;
    ::ll::TypedStorage<4, 4, int>                                    mStunTimer;
    ::ll::TypedStorage<4, 4, int>                                    mFramesTillMove;
    ::ll::TypedStorage<1, 1, bool>                                   mWantsMove;
    ::ll::TypedStorage<1, 1, bool>                                   mIsPathing;
    ::ll::TypedStorage<4, 4, int>                                    mMaxHealth;
    ::ll::TypedStorage<4, 4, int>                                    mNumSkeletons;
    ::ll::TypedStorage<4, 4, int>                                    mMaxSkeletons;
    ::ll::TypedStorage<4, 4, int>                                    mMovementTime;
    ::ll::TypedStorage<4, 4, int>                                    mHealthIntervals;
    ::ll::TypedStorage<4, 4, int>                                    mLastHealthValue;
    ::ll::TypedStorage<4, 4, int>                                    mDelayShot;
    ::ll::TypedStorage<4, 4, int>                                    mTimeSinceLastShot;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRange;
    ::ll::TypedStorage<1, 1, bool>                                   mSecondVolley;
    ::ll::TypedStorage<4, 4, int>                                    mMainHeadAttackCountdown;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDamageSource>> mDeathSource;
    ::ll::TypedStorage<4, 4, int>                                    mlastFiredHead;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBoss();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WitherBoss();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual void aiStep() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove();
#else // @header-generator platform
    virtual void newServerAiStep() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getFiringPos() const;
#else // @header-generator platform
    virtual bool canFreeze() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool startRiding(::Actor&, bool);
#else // @header-generator platform
    virtual bool canBeAffected(uint effectId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual void
    hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canFreeze() const;
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeAffected(uint) const;
#else // @header-generator platform
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeAffectedByArrow(::MobEffectInstance const&) const;
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void die(::ActorDamageSource const&);
#else // @header-generator platform
    virtual void die(::ActorDamageSource const& source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual void remove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void aiStep();
#else // @header-generator platform
    virtual ::Vec3 getFiringPos() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorValue() const;

    virtual void newServerAiStep();
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WitherBoss(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI WitherBoss(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _destroyBlocks(::Level&, ::AABB const&, ::BlockSource&, int, ::WitherBoss::WitherAttackType);
#else // @header-generator platform
    MCAPI void _destroyBlocks(
        ::Level&                       level,
        ::AABB const&                  bb,
        ::BlockSource&                 region,
        int                            range,
        ::WitherBoss::WitherAttackType attackType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _performRangedAttack(int, ::Vec3 const&, bool);
#else // @header-generator platform
    MCAPI void _performRangedAttack(int headID, ::Vec3 const& targetPos, bool dangerous);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void awardSpawnWitherAchievement() const;
#else // @header-generator platform
    MCAPI void awardSpawnWitherAchievement() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void baseDie();
#else // @header-generator platform
    MCAPI void postAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec2 getHeadRot(int) const;
#else // @header-generator platform
    MCAPI ::WitherBossPreAIStepResult preAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getInvulnerableTicks() const;

    MCNAPI bool hasAerialAttack() const;

    MCNAPI void postAiStep();

    MCNAPI ::WitherBossPreAIStepResult preAiStep();

    MCNAPI void removeSkeleton();

    MCNAPI void setAlternativeTarget(int, ::ActorUniqueID);

    MCNAPI void setIsPathing(bool);

    MCNAPI void setShotDelay(int);

    MCNAPI void setWantsToMove(bool);

    MCNAPI bool wantsToMove();
#else // @header-generator platform
    MCAPI void setAlternativeTarget(int headIndex, ::ActorUniqueID entityId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canDestroy(::Block const&, ::WitherBoss::WitherAttackType);
#else // @header-generator platform
    MCAPI static bool canDestroy(::Block const& block, ::WitherBoss::WitherAttackType attackType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& MAX_HEALTH_CAP_UUID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& MAX_HEALTH_CAP_UUID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove();
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getFiringPos() const;
#else // @header-generator platform
    MCAPI void $newServerAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startRiding(::Actor&, bool);
#else // @header-generator platform
    MCFOLD bool $canFreeze() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI bool $canBeAffected(uint effectId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFreeze() const;
#else // @header-generator platform
    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeAffected(uint) const;
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const&) const;
#else // @header-generator platform
    MCFOLD float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $die(::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI void $die(::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD bool $startRiding(::Actor& vehicle, bool forceRiding);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $aiStep();
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getFiringPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $newServerAiStep();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

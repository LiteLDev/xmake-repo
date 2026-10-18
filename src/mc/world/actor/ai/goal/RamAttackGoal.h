#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class BlockPos;
class BlockSource;
class LookControlComponent;
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class MoveControlComponent;
class NavigationComponent;
#else // @header-generator platform
#endif // @header-generator platform
class Path;
namespace RamAttackGoalUtils { class RamGoalItemDropperInterface; }
// clang-format on

class RamAttackGoal : public ::BaseGoal {
public:
    // RamAttackGoal inner types declare
    // clang-format off
    struct AttackPos;
    // clang-format on

    // RamAttackGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum State : uint {
#else // @header-generator platform
    enum class Direction : int {
        North = 0,
        South = 1,
        West  = 2,
        East  = 3,
    };

    enum class State : int {
#endif // @header-generator platform
        TakeAttackPos               = 0,
        TurnToTarget                = 1,
        VerifyTargetStillInPosition = 2,
        WaitOneSec                  = 3,
        Charge                      = 4,
        KnockAfterCharge            = 5,
        Done                        = 6,
#if defined(LL_PLAT_A) // @header-generator platform
    };

    enum Direction : uint {
        NORTH = 0,
        SOUTH = 1,
        WEST  = 2,
        EAST  = 3,
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct AttackPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                    mPosition;
        ::ll::TypedStorage<4, 4, float>                      mDistance;
        ::ll::TypedStorage<1, 1, bool>                       mCheckX;
        ::ll::TypedStorage<4, 4, ::RamAttackGoal::Direction> mDirection;
        ::ll::TypedStorage<1, 1, bool>                       mHasChargePos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPrepareChargePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mRamDirection;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mWaitBeforeChargeTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mKnockAfterChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mRamRetryTimeout;
    ::ll::TypedStorage<4, 4, ::RamAttackGoal::State>                 mState;
    ::ll::TypedStorage<8, 24, std::vector<RamAttackGoal::AttackPos>> mAttackPosVector;
    ::ll::TypedStorage<4, 4, int>                                    mRamDistance;
    ::ll::TypedStorage<4, 4, int>                                    mMinRamDistance;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHeight;
    ::ll::TypedStorage<4, 4, float>                                  mBabyKnockbackModifier;
    ::ll::TypedStorage<4, 4, float>                                  mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                  mRamSpeed;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>   mOnStartTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mPreRamSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mRamImpactSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mCooldownTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mTargetId;
    ::ll::TypedStorage<1, 1, bool>                                   mHasKnockbacked;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mCooldownTimeout;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RamAttackGoalUtils::RamGoalItemDropperInterface>> mRamGoalItemDropper;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                  mPath;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mPrepareChargePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mTargetPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                     mRamDirection;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mWaitBeforeChargeTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mKnockAfterChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mRamRetryTimeout;
    ::ll::TypedStorage<4, 4, ::RamAttackGoal::State>                     mState;
    ::ll::TypedStorage<8, 24, ::std::vector<::RamAttackGoal::AttackPos>> mAttackPosVector;
    ::ll::TypedStorage<4, 4, int>                                        mRamDistance;
    ::ll::TypedStorage<4, 4, int>                                        mMinRamDistance;
    ::ll::TypedStorage<4, 4, float>                                      mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                                      mKnockbackHeight;
    ::ll::TypedStorage<4, 4, float>                                      mBabyKnockbackModifier;
    ::ll::TypedStorage<4, 4, float>                                      mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mRamSpeed;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>>   mOnStartTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>     mPreRamSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>     mRamImpactSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mCooldownTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mTargetId;
    ::ll::TypedStorage<1, 1, bool>                                       mHasKnockbacked;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RamAttackGoalUtils::RamGoalItemDropperInterface>> mRamGoalItemDropper;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RamAttackGoal& operator=(RamAttackGoal const&);
    RamAttackGoal(RamAttackGoal const&);
    RamAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RamAttackGoal();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RamAttackGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit RamAttackGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _findTreeBehindTarget();
#else // @header-generator platform
    MCAPI void _findTreeBehindTarget();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _initiateRamAttack();
#else // @header-generator platform
    MCAPI bool _initiateRamAttack();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _pathablePos(::BlockSource const&, ::BlockPos);

    MCNAPI void _resetCooldown();

    MCNAPI void _tryKnockbackTarget();
#else // @header-generator platform
    MCAPI void _tryKnockbackTarget();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

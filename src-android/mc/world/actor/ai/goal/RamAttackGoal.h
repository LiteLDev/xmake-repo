#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class LookControlComponent;
class Mob;
class MoveControlComponent;
class NavigationComponent;
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
    enum State : uint {
        TakeAttackPos               = 0,
        TurnToTarget                = 1,
        VerifyTargetStillInPosition = 2,
        WaitOneSec                  = 3,
        Charge                      = 4,
        KnockAfterCharge            = 5,
        Done                        = 6,
    };

    enum Direction : uint {
        NORTH = 0,
        SOUTH = 1,
        WEST  = 2,
        EAST  = 3,
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
    // NOLINTEND

public:
    // prevent constructor by default
    RamAttackGoal& operator=(RamAttackGoal const&);
    RamAttackGoal(RamAttackGoal const&);
    RamAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RamAttackGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RamAttackGoal(::Mob&);

    MCNAPI void _findTreeBehindTarget();

    MCNAPI bool _initiateRamAttack();

    MCNAPI bool _pathablePos(::BlockSource const&, ::BlockPos);

    MCNAPI void _resetCooldown();

    MCNAPI void _tryKnockbackTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

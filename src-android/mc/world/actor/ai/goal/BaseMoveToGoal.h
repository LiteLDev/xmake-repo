#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
struct GoalId;
// clang-format on

class BaseMoveToGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mTravelTicks;
    ::ll::TypedStorage<4, 4, int>         mNextStartTick;
    ::ll::TypedStorage<4, 4, int>         mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int>         mStayTicks;
    ::ll::TypedStorage<4, 4, int>         mMaxStayTicks;
    ::ll::TypedStorage<1, 1, bool>        mReachedTarget;
    ::ll::TypedStorage<4, 4, float>       mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>       mGoalRadiusSq;
    ::ll::TypedStorage<8, 8, ulong>       mCooldownCounter;
    ::ll::TypedStorage<8, 8, ulong>       mCooldownTimeoutTime;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStartPos;
    ::ll::TypedStorage<4, 12, ::Vec3>     mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>     mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float>       mChanceToStart;
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 4, int>         mInterval;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&);
    BaseMoveToGoal(BaseMoveToGoal const&);
    BaseMoveToGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseMoveToGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual bool hasReachedTarget() const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) = 0;

    virtual int _nextStartTick();

    virtual bool _canReach(::BlockPos const&);

    virtual void _moveToBlock() = 0;

    virtual ::Vec3 _getTargetPosition() const;

    virtual ulong _getRepathTime() const;

    virtual void setInterval(int const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseMoveToGoal(::Mob&, float, float, float);

    MCNAPI ::BlockPos _blockAboveTarget() const;

    MCNAPI void _checkIfStuck();

    MCNAPI bool _isCooldownActive() const;

    MCNAPI void setTargetPositionOffset(::Vec3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, float, float, float);
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

    MCNAPI bool $hasReachedTarget() const;

    MCNAPI int $_nextStartTick();

    MCNAPI bool $_canReach(::BlockPos const&);

    MCNAPI ::Vec3 $_getTargetPosition() const;

    MCNAPI ulong $_getRepathTime() const;

    MCNAPI void $setInterval(int const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

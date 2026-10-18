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
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>       mCooldownCounter;
    ::ll::TypedStorage<8, 8, ulong>       mCooldownTimeoutTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>      mCooldownCounter;
    ::ll::TypedStorage<8, 8, uint64>      mCooldownTimeoutTime;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BaseMoveToGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();

    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

    virtual bool hasReachedTarget() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) = 0;
#else // @header-generator platform
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) = 0;
#endif // @header-generator platform

    virtual int _nextStartTick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canReach(::BlockPos const&);
#else // @header-generator platform
    virtual bool _canReach(::BlockPos const& pos);
#endif // @header-generator platform

    virtual void _moveToBlock() = 0;

    virtual ::Vec3 _getTargetPosition() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getRepathTime() const;
#else // @header-generator platform
    virtual uint64 _getRepathTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void setInterval(int const interval);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCFOLD void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasReachedTarget() const;
#else // @header-generator platform
    MCAPI bool $hasReachedTarget() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_nextStartTick();
#else // @header-generator platform
    MCAPI int $_nextStartTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canReach(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $_canReach(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $_getTargetPosition() const;
#else // @header-generator platform
    MCAPI ::Vec3 $_getTargetPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getRepathTime() const;
#else // @header-generator platform
    MCFOLD uint64 $_getRepathTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setInterval(int const);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $setInterval(int const interval);
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

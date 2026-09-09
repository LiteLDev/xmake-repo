#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class InvestigateSuspiciousLocationGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>     mWantedPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> mChosenEndPos;
    ::ll::TypedStorage<4, 4, float>       mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>       mGoalRadiusSq;
    ::ll::TypedStorage<1, 1, bool>        mPathingInvalid;
    ::ll::TypedStorage<1, 1, bool>        mReachedTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    InvestigateSuspiciousLocationGoal& operator=(InvestigateSuspiciousLocationGoal const&);
    InvestigateSuspiciousLocationGoal(InvestigateSuspiciousLocationGoal const&);
    InvestigateSuspiciousLocationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvestigateSuspiciousLocationGoal();

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
    MCNAPI explicit InvestigateSuspiciousLocationGoal(::Mob&);

    MCNAPI std::optional<BlockPos> _findPosToInvestigate() const;
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

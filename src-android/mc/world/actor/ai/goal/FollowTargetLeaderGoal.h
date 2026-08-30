#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/MoveTowardsTargetGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct GoalId;
// clang-format on

class FollowTargetLeaderGoal : public ::MoveTowardsTargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mLeaderFilters;
    ::ll::TypedStorage<8, 8, ::Tick>              mSearchCooldownInTicks;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextSearchCooldownTick;
    ::ll::TypedStorage<4, 4, float>               mFollowDistSq;
    ::ll::TypedStorage<2, 2, short>               mLocateAttempts;
    ::ll::TypedStorage<1, 1, bool>                mAlwaysLookForLeader;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowTargetLeaderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowTargetLeaderGoal();

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
    MCNAPI explicit FollowTargetLeaderGoal(::Mob&);

    MCNAPI void _determineMovePos();

    MCNAPI bool _evaluateLeaderFilters(::Actor const*) const;
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

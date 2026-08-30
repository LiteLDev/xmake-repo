#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class GoHomeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                               mMob;
    ::ll::TypedStorage<4, 4, float>                                mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                  mInterval;
    ::ll::TypedStorage<4, 4, float>                                mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnFailedTriggers;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mLastEndPos;
    ::ll::TypedStorage<4, 4, float>                                mGoalRadiusSqr;
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoal& operator=(GoHomeGoal const&);
    GoHomeGoal(GoHomeGoal const&);
    GoHomeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GoHomeGoal();

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
    MCNAPI explicit GoHomeGoal(::Mob&);

    MCNAPI ::BlockPos _getHomePos() const;

    MCNAPI bool _hasRequiredComponents() const;

    MCNAPI bool _isInHomeDimension() const;
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

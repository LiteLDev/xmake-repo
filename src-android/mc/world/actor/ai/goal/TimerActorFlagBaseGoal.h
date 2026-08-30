#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TimerActorFlagBaseGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                             mMob;
    ::ll::TypedStorage<4, 4, ::ActorFlags>                                       mActorFlag;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEndEvent;
    ::ll::TypedStorage<4, 8, ::IntRange>                                         mDurationRangeTicks;
    ::ll::TypedStorage<4, 8, ::IntRange>                                         mCooldownRangeTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                                             mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                             mGoalEndTick;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerActorFlagBaseGoal& operator=(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TimerActorFlagBaseGoal();

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
    MCNAPI TimerActorFlagBaseGoal(::Mob&, ::ActorFlags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, ::ActorFlags);
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

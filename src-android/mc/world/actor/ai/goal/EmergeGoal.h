#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class EmergeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<2, 2, ushort>                    mDurationTicks;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnDoneEvent;
    ::ll::TypedStorage<8, 8, ::Tick>                    mCooldownExpiryTick;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEndTick;
    ::ll::TypedStorage<2, 2, ushort>                    mCooldownTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    EmergeGoal& operator=(EmergeGoal const&);
    EmergeGoal(EmergeGoal const&);
    EmergeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmergeGoal();

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
    MCNAPI explicit EmergeGoal(::Mob&);
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

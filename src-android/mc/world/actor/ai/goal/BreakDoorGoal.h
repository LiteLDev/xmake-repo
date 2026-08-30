#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class BreakDoorGoal : public ::DoorInteractGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mBreakTime;
    ::ll::TypedStorage<4, 4, int const> mBreakDoorTime;
    ::ll::TypedStorage<4, 4, int>       mLastBreakProgress;
    ::ll::TypedStorage<8, 8, ::Mob&>    mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakDoorGoal& operator=(BreakDoorGoal const&);
    BreakDoorGoal(BreakDoorGoal const&);
    BreakDoorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BreakDoorGoal();

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
    MCNAPI explicit BreakDoorGoal(::Mob&);
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

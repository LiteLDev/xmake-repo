#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class FollowParentGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>     mMob;
    ::ll::UntypedStorage<8, 40>          mParent;
    ::ll::TypedStorage<4, 4, float>      mSpeed;
    ::ll::TypedStorage<4, 4, int>        mTimeToRecalcPath;
    ::ll::TypedStorage<1, 1, bool const> mStopNavigationOnStop;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowParentGoal& operator=(FollowParentGoal const&);
    FollowParentGoal(FollowParentGoal const&);
    FollowParentGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowParentGoal();

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
    MCNAPI explicit FollowParentGoal(::Mob&);
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

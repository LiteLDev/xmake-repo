#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct GoalId;
// clang-format on

class HoldGroundGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::UntypedStorage<8, 40>                         mLookAt;
    ::ll::TypedStorage<4, 4, float>                     mHostileRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                      mBroadcast;
    ::ll::TypedStorage<4, 4, float>                     mBroadcastRange;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mWithinRangeEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    HoldGroundGoal& operator=(HoldGroundGoal const&);
    HoldGroundGoal(HoldGroundGoal const&);
    HoldGroundGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HoldGroundGoal();

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
    MCNAPI explicit HoldGroundGoal(::Mob&);
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

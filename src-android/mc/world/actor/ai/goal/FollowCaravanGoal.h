#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class FollowCaravanGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::UntypedStorage<8, 40>                           mParent;
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifierO;
    ::ll::TypedStorage<4, 4, int>                         mDistanceCheckCounter;
    ::ll::TypedStorage<4, 4, int>                         mCaravanSize;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowCaravanGoal& operator=(FollowCaravanGoal const&);
    FollowCaravanGoal(FollowCaravanGoal const&);
    FollowCaravanGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowCaravanGoal();

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
    MCNAPI explicit FollowCaravanGoal(::Mob&);

    MCNAPI bool checkCaravanType(::Mob*);

    MCNAPI bool firstIsLeashed(::Mob*, int);
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

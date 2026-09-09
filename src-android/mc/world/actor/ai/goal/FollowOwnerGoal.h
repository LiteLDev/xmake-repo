#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
class Player;
class Vec3;
struct DimensionType;
struct GoalId;
// clang-format on

class FollowOwnerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::UntypedStorage<8, 40>      mOwner;
    ::ll::TypedStorage<4, 4, int>    mTimeToRecalculatePath;
    ::ll::TypedStorage<4, 4, float>  mSpeed;
    ::ll::TypedStorage<4, 4, float>  mStartDistance;
    ::ll::TypedStorage<4, 4, float>  mStopDistance;
    ::ll::TypedStorage<4, 4, float>  mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>   mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>   mOldAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>   mCanTeleport;
    ::ll::TypedStorage<1, 1, bool>   mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, int>    mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool>   mRandomizeAndCheckForClearanceWhenTeleporting;
    ::ll::TypedStorage<1, 1, bool>   mKeepFollowingAfterTeleporting;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowOwnerGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FollowOwnerGoal(::Mob&);

    MCNAPI bool _canReachOwner(::Mob&, ::NavigationComponent&) const;

    MCNAPI void _tryToTeleport(::Mob&) const;
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

    MCNAPI void $onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

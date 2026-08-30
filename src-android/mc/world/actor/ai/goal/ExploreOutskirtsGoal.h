#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class ExploreOutskirtsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, int>     mMinimumWaitTimeTicks;
    ::ll::TypedStorage<4, 4, int>     mNextXZDistance;
    ::ll::TypedStorage<4, 4, int>     mNextYDistance;
    ::ll::TypedStorage<8, 8, ::Tick>  mMaximumWaitTimeTicks;
    ::ll::TypedStorage<8, 8, ::Tick>  mTravelTimeout;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mExploreDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumPerimeter;
    ::ll::TypedStorage<4, 4, float>   mMinimumDistanceFromTarget;
    ::ll::TypedStorage<4, 4, float>   mWaitTimerRatio;
    ::ll::TypedStorage<4, 12, ::Vec3> mDistanceFromBoundary;
    ::ll::TypedStorage<1, 1, bool>    mFailedToPath;
    ::ll::TypedStorage<1, 1, bool>    mTraveling;
    ::ll::TypedStorage<8, 8, ::Tick>  mShiftLocationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>  mWaitTimer;
    ::ll::TypedStorage<8, 8, ::Tick>  mTravelTimer;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedPos;
    // NOLINTEND

public:
    // prevent constructor by default
    ExploreOutskirtsGoal& operator=(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExploreOutskirtsGoal();

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
    MCNAPI explicit ExploreOutskirtsGoal(::Mob&);
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

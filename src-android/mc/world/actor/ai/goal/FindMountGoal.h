#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
struct GoalId;
// clang-format on

class FindMountGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                     mTarget;
    ::ll::TypedStorage<4, 4, float>                 mTargetDist;
    ::ll::TypedStorage<4, 4, int>                   mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                   mStartCounter;
    ::ll::TypedStorage<4, 4, int>                   mStartDelay;
    ::ll::TypedStorage<1, 1, bool>                  mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                  mTargetNeeded;
    ::ll::TypedStorage<4, 4, float>                 mMountDistance;
    ::ll::TypedStorage<4, 4, int>                   mFailedAttemptsCounter;
    ::ll::TypedStorage<4, 4, int>                   mMaxFailedAttempts;
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&);
    FindMountGoal(FindMountGoal const&);
    FindMountGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FindMountGoal();

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
    MCNAPI explicit FindMountGoal(::Mob&);

    MCNAPI bool isInMountRange();
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

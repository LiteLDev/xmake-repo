#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct GoalId;
// clang-format on

class FollowMobGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::UntypedStorage<8, 40>                   mFollowingMob;
    ::ll::TypedStorage<8, 24, std::string>        mPreferredActorType;
    ::ll::TypedStorage<4, 4, float>               mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>               mStopDistance;
    ::ll::TypedStorage<4, 4, int>                 mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                 mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                mUseHomePositionRestriction;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowMobGoal& operator=(FollowMobGoal const&);
    FollowMobGoal(FollowMobGoal const&);
    FollowMobGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowMobGoal();

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
    MCNAPI FollowMobGoal(::Mob&, float, float, int, bool, std::string const&, ::ActorFilterGroup const&);

    MCNAPI ::gsl::span<gsl::not_null<Actor*>> _findCandidateMobs();

    MCNAPI void setFilters(::ActorFilterGroup&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, float, float, int, bool, std::string const&, ::ActorFilterGroup const&);
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

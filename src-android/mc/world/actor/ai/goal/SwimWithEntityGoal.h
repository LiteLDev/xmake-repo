#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class SwimWithEntityGoal : public ::BaseGoal {
public:
    // SwimWithEntityGoal inner types define
    enum EntityGoals : uint {
        CATCH_UP_TO_ENTITY     = 0,
        MATCH_ENTITY_DIRECTION = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::UntypedStorage<8, 40>                                 mFollowing;
    ::ll::TypedStorage<4, 4, int>                               mIntervalRefreshTicks;
    ::ll::TypedStorage<4, 4, int>                               mIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                             mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                             mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                             mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSearchRange;
    ::ll::TypedStorage<4, 4, float>                             mStopDistance;
    ::ll::TypedStorage<4, 4, ::SwimWithEntityGoal::EntityGoals> mCurrentGoal;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>>       mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&);
    SwimWithEntityGoal(SwimWithEntityGoal const&);
    SwimWithEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwimWithEntityGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _setWantedMob();
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

    MCNAPI bool $canBeInterrupted();

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

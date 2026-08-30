#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
class Vec3;
// clang-format on

class StalkAndPounceOnTargetGoal : public ::BaseGoal {
public:
    // StalkAndPounceOnTargetGoal inner types define
    enum class StalkAndPounceState : uchar {
        Stalking   = 0,
        Interested = 1,
        Pouncing   = 2,
        Stuck      = 3,
        Done       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mStalkSpeed;
    ::ll::TypedStorage<4, 4, float>                                             mStalkingMaxDistanceSqr;
    ::ll::TypedStorage<4, 4, float>                                             mLeapHeight;
    ::ll::TypedStorage<4, 4, float>                                             mLeapDistance;
    ::ll::TypedStorage<4, 4, float>                                             mMaxPounceDistanceSqr;
    ::ll::TypedStorage<4, 4, float>                                             mStrikeDistanceSqr;
    ::ll::TypedStorage<4, 4, int>                                               mInterestedTicks;
    ::ll::TypedStorage<4, 4, int>                                               mStuckTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                                            mEndTimestamp;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                               mStuckBlockList;
    ::ll::TypedStorage<1, 1, ::StalkAndPounceOnTargetGoal::StalkAndPounceState> mState;
    ::ll::TypedStorage<8, 8, ::Mob&>                                            mMob;
    ::ll::TypedStorage<1, 1, bool>                                              mSetPersistent;
    // NOLINTEND

public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StalkAndPounceOnTargetGoal();

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
    MCNAPI explicit StalkAndPounceOnTargetGoal(::Mob&);
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

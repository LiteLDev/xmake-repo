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

class FindCoverGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, float>   mSpeed;
    ::ll::TypedStorage<4, 4, int>     mCooldownTicks;
    ::ll::TypedStorage<8, 8, ::Tick>  mCooldownTimer;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    FindCoverGoal& operator=(FindCoverGoal const&);
    FindCoverGoal(FindCoverGoal const&);
    FindCoverGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FindCoverGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FindCoverGoal(::Mob&);

    MCNAPI bool getHidePos(::Vec3&) const;
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

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class CroakGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mIntervalRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mDurationRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilters;
    ::ll::TypedStorage<8, 8, ::Tick>                    mTickOfNextCroak;
    ::ll::TypedStorage<8, 8, ::Tick>                    mTickOfEndCroak;
    // NOLINTEND

public:
    // prevent constructor by default
    CroakGoal& operator=(CroakGoal const&);
    CroakGoal(CroakGoal const&);
    CroakGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CroakGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CroakGoal(::Mob&);
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

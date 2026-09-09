#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class TargetWhenPushedGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                      mSelf;
    ::ll::TypedStorage<4, 4, float>                       mPercentChance;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TargetWhenPushedGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TargetWhenPushedGoal(::Mob&);
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

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

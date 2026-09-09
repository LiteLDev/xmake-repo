#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomBreachingGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCooldown;
    ::ll::TypedStorage<4, 4, int> mTimer;
    ::ll::TypedStorage<4, 4, int> mAttempts;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBreachingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomBreachingGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool _setWantedPosition();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RandomBreachingGoal(::Mob&);
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

    MCNAPI bool $_setWantedPosition();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

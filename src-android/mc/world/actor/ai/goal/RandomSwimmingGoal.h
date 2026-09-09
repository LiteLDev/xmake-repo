#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
// clang-format on

class RandomSwimmingGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAvoidSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSwimmingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomSwimmingGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool _setWantedPosition();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RandomSwimmingGoal(::Mob&);
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

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $_setWantedPosition();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

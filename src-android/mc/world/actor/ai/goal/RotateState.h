#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

// auto generated forward declare list
// clang-format off
class PetSleepWithOwnerGoal;
// clang-format on

class RotateState : public ::PetSleepWithOwnerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> SETTLE_TICKS;
    ::ll::TypedStorage<4, 4, int>       mSettleTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RotateState();

    virtual void tick();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

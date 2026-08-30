#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LookAtPlayerGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtPlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtPlayerGoal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

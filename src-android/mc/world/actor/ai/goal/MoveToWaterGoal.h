#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveToWaterGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToWaterGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToWaterGoal();
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

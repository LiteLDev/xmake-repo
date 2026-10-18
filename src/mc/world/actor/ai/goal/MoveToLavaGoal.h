#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveToLavaGoal : public ::MoveToLiquidGoal {
public:
    // prevent constructor by default
    MoveToLavaGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToLavaGoal();
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
#else // @header-generator platform
class MoveToLavaGoal : public ::MoveToLiquidGoal {};
#endif // @header-generator platform

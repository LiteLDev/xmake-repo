#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LookAtEntityGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtEntityGoal();
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
class LookAtEntityGoal : public ::LookAtActorGoal {};
#endif // @header-generator platform

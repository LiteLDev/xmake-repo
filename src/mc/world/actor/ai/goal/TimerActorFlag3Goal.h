#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TimerActorFlag3Goal : public ::TimerActorFlagBaseGoal {
public:
    // prevent constructor by default
    TimerActorFlag3Goal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TimerActorFlag3Goal();
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
class TimerActorFlag3Goal : public ::TimerActorFlagBaseGoal {};
#endif // @header-generator platform

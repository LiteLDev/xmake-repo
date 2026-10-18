#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ActorMoveSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createActorMoveSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createActorMoveSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createConfigureDepenetrationSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createConfigureDepenetrationSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createUpdateDepenetrationSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createUpdateDepenetrationSystem();
#endif // @header-generator platform
    // NOLINTEND
};

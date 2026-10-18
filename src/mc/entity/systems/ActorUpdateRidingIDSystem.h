#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorUpdateRidingIDSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createClearPrevRidingIDSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createClearPrevRidingIDSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createClearRidingIDSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createClearRidingIDSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createUpdatePrevRidingIDSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createUpdatePrevRidingIDSystem();
#endif // @header-generator platform
    // NOLINTEND
};

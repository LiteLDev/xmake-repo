#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ActorDataSyncSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createActorDataSyncSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createActorDataSyncSystem();
#endif // @header-generator platform
    // NOLINTEND
};

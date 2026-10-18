#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorPostNormalTickSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystemClient();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystemClient();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystemServer();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystemServer();
#endif // @header-generator platform
    // NOLINTEND
};

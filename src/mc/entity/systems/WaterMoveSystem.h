#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class WaterMoveSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createWaterMoveSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createWaterMoveSystem();
#endif // @header-generator platform
    // NOLINTEND
};

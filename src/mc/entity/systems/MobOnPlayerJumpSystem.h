#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MobOnPlayerJumpSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem(bool);

    MCNAPI static float getPlayerJumpPendingScale(int);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PlayerMoveSystems {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createLocalPlayerFilterAutoJumpSystem();

    MCNAPI static ::TickingSystemWithInfo createPlayerPostMoveSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPlayerPostMoveSystem();
#endif // @header-generator platform
    // NOLINTEND
};

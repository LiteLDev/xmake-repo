#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameConnectionReason : int {
    LoginSucceeded             = 0,
    NotSpecified               = 1,
    LocalPrimaryClientNoReason = 2,
    HostSuspended              = 3,
    NotAllowed                 = 4,
    MultiplayerNoReason        = 5,
    OutOfStorage               = 6,
    RealmsVersionMismatch      = 7,
};
#else // @header-generator platform
enum class GameConnectionReason : int {};
#endif // @header-generator platform

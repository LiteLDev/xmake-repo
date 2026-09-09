#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

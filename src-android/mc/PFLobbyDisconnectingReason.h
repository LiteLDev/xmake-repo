#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PFLobbyDisconnectingReason : uint {
    NoLocalMembers         = 0,
    LobbyDeleted           = 1,
    ConnectionInterruption = 2,
    LobbyServerLeft        = 3,
};

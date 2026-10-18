#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PFLobbyDisconnectingReason : uint {
    NoLocalMembers         = 0,
    LobbyDeleted           = 1,
    ConnectionInterruption = 2,
    LobbyServerLeft        = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

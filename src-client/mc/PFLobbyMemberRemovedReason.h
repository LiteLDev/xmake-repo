#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PFLobbyMemberRemovedReason : uint {
    LocalUserLeftLobby       = 0,
    LocalUserForciblyRemoved = 1,
    RemoteUserLeftLobby      = 2,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class JoinGameStatus : int {
    MultiplayerNotEnabled           = 0,
    Succeeded                       = 1,
    Succeeded_Realm                 = 2,
    Succeeded_ThirdPartyServer      = 3,
    Succeeded_Experience            = 4,
    NotSignedIntoMultiplayerService = 5,
    BlockedByXBLPermissions         = 6,
    BlockedByPlatformPermissions    = 7,
    SessionFull                     = 8,
    SessionNotFound                 = 9,
    SessionAccessDenied             = 10,
    CrossPlayDisabled               = 11,
    HostLeft                        = 12,
    OutdatedServer                  = 13,
    OutdatedClient                  = 14,
    ClientCancelled                 = 15,
};
#else // @header-generator platform
enum class JoinGameStatus : int {};
#endif // @header-generator platform

}

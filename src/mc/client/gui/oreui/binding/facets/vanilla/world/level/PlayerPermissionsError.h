#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerPermissionsError : uchar {
    PlayerIdInvalid                   = 0,
    PlayerPermissionsMissing          = 1,
    SelectedPlayerLeft                = 2,
    SelectedPlayerPermissionsChanged  = 3,
    OperatorCommandsPermissionRevoked = 4,
    KickCommandFailed                 = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PlayerPermissionsError : uchar {
    PlayerIdInvalid                   = 0,
    PlayerPermissionsMissing          = 1,
    SelectedPlayerLeft                = 2,
    SelectedPlayerPermissionsChanged  = 3,
    OperatorCommandsPermissionRevoked = 4,
    KickCommandFailed                 = 5,
};
#else // @header-generator platform
enum class PlayerPermissionsError : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

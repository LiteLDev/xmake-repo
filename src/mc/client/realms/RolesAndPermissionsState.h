#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RolesAndPermissionsState : int {
    Idle      = 0,
    Fetching  = 1,
    Posting   = 2,
    Error     = 3,
    PostError = 4,
};
#else // @header-generator platform
enum class RolesAndPermissionsState : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MultiplayerServiceIdentifier : int {
    XboxLive    = 0,
    Nintendo    = 1,
    AdHoc       = 2,
    Playstation = 3,
    EDU         = 4,
    Mock        = 5,
    Undefined   = -1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class MultiplayerServiceIdentifier : int {
    XboxLive    = 0,
    Nintendo    = 1,
    AdHoc       = 2,
    Playstation = 3,
    Edu         = 4,
    Mock        = 5,
    Undefined   = -1,
};
#else // @header-generator platform
enum class MultiplayerServiceIdentifier : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

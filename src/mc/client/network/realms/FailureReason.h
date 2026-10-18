#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FailureReason : int {
    None                    = 0,
    Generic                 = 1,
    TooManyRealms           = 2,
    InvalidRealmName        = 3,
    InvalidRealmDescription = 4,
    InvalidResponse         = 5,
    InvalidWorldName        = 6,
    Forbidden               = 7,
    TimelineRequired        = 8,
    RealmSuspended          = 9,
};
#else // @header-generator platform
enum class FailureReason : int {};
#endif // @header-generator platform

}

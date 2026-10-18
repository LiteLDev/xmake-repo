#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SocialGroupState : int {
    Unavailable = 0,
    Loading     = 1,
    Ready       = 2,
    Error       = 3,
};
#else // @header-generator platform
enum class SocialGroupState : int {};
#endif // @header-generator platform

}

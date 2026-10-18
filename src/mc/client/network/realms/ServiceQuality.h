#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ServiceQuality : int {
    PING_HIGH  = 1,
    PING_MED   = 2,
    PING_LOW   = 3,
    PING_WORST = 4,
    PING_NONE  = 5,
};
#else // @header-generator platform
enum class ServiceQuality : int {};
#endif // @header-generator platform

}

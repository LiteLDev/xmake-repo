#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UserPresenceResult : uint {
    Unknown = 0,
    Online  = 1,
    Away    = 2,
    Offline = 3,
};
#else // @header-generator platform
enum class UserPresenceResult : uint {};
#endif // @header-generator platform

}

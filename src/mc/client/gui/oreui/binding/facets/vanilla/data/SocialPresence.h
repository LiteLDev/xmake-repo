#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SocialPresence : uint {
    Unknown = 0,
    Online  = 1,
    Away    = 2,
    Offline = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SocialPresence : uint {
    Unknown = 0,
    Online  = 1,
    Away    = 2,
    Offline = 3,
};
#else // @header-generator platform
enum class SocialPresence : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}

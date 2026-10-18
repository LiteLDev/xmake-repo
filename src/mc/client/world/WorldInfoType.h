#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WorldInfoType : uint {
    None     = 0,
    Local    = 1,
    Remote   = 2,
    External = 3,
    XboxLive = 4,
    Realms   = 5,
    Template = 6,
};
#else // @header-generator platform
enum class WorldInfoType : uint {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameConnectionType : int {
    Local                     = 0,
    LAN                       = 1,
    External                  = 2,
    Realms                    = 3,
    CreativeOnlineMultiplayer = 4,
    Undefined                 = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GameConnectionType : int {
    Local                     = 0,
    Lan                       = 1,
    External                  = 2,
    Realms                    = 3,
    CreativeOnlineMultiplayer = 4,
    Undefined                 = 5,
};
#else // @header-generator platform
enum class GameConnectionType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

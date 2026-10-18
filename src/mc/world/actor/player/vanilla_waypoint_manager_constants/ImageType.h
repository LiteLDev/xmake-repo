#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaWaypointManagerConstants {

enum class ImageType : uint {
#if defined(LL_PLAT_A) // @header-generator platform
    ARROWUP      = 0,
    ARROWDOWN    = 1,
    PLAYER_DOT_0 = 2,
    PLAYER_DOT_1 = 3,
    PLAYER_DOT_2 = 4,
    PLAYER_DOT_3 = 5,
    COUNT        = 6,
#else // @header-generator platform
    Arrowup    = 0,
    Arrowdown  = 1,
    PlayerDot0 = 2,
    PlayerDot1 = 3,
    PlayerDot2 = 4,
    PlayerDot3 = 5,
    Count      = 6,
#endif // @header-generator platform
};

}

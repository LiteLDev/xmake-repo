#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClubsPresenceType : int {
    NotInClub = 0,
    InClub    = 1,
    InFeed    = 2,
    InGame    = 3,
    NotInGame = 4,
    Count     = 5,
};
#else // @header-generator platform
enum class ClubsPresenceType : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

enum class ClubsPresenceType : int {
    NotInClub = 0,
    InClub    = 1,
    InFeed    = 2,
    InGame    = 3,
    NotInGame = 4,
    Count     = 5,
};

}

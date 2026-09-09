#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::multiplayer::appearance {

enum class RequestRemovalReason : uint64 {
    Finished                 = 0,
    InvalidSkinName          = 1,
    InvalidCharacter         = 2,
    LevelDestruction         = 3,
    PlayerNotFound           = 4,
    RelevancyCheckFailed     = 5,
    SessionErased            = 6,
    SkinNotFoundForCharacter = 7,
    SupersededByNewRequest   = 8,
    Count                    = 9,
};

}

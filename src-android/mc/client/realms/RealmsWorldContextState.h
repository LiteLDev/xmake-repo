#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsWorldContextState : int {
    IDLE            = 0,
    FETCHING_WORLD  = 1,
    FAILED          = 2,
    WORLD_AVAILABLE = 3,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorInitializationMethod : uchar {
    INVALID     = 0,
    LOADED      = 1,
    SPAWNED     = 2,
    BORN        = 3,
    TRANSFORMED = 4,
    UPDATED     = 5,
    EVENT       = 6,
    LEGACY      = 7,
};

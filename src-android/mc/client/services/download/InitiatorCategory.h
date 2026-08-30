#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InitiatorCategory : int {
    Critical       = 0,
    Exclusive      = 1,
    UserImmediate  = 2,
    Automatic      = 3,
    AutoUpdatePack = 4,
    Unknown        = 5,
};

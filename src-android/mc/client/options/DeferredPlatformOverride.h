#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DeferredPlatformOverride : int {
    None      = 0,
    Android   = 1,
    IOS       = 2,
    Switch    = 3,
    Console   = 4,
    Console_1 = 5,
    Console_2 = 6,
    Console_3 = 7,
    PC        = 8,
};

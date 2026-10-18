#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DebugRotationSpeedMultipliers : int {
    Invalid = -1,
    One     = 0,
    Two     = 1,
    Three   = 2,
    Four    = 3,
    Count   = 4,
};
#else // @header-generator platform
enum class DebugRotationSpeedMultipliers : int {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClientInstanceState : int {
    Idle             = 0,
    WaitingForPlayer = 1,
    WaitingToPlay    = 2,
    Playing          = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ClientInstanceState : int {
    Idle             = 0,
    WaitingForPlayer = 1,
    WaitingToPlay    = 2,
    Playing          = 3,
};
#else // @header-generator platform
enum class ClientInstanceState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

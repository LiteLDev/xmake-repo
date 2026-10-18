#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameControllerStickState : int {
    Press   = 0,
    Move    = 1,
    Release = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GameControllerStickState : int {
    Press   = 0,
    Move    = 1,
    Release = 2,
};
#else // @header-generator platform
enum class GameControllerStickState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

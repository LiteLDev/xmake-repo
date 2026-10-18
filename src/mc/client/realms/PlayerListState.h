#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerListState : int {
    Idle       = 0,
    Error      = 1,
    InProgress = 2,
    Done       = 3,
};
#else // @header-generator platform
enum class PlayerListState : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsListState : int {
    Unknown = 0,
    Loading = 1,
    Idle    = 2,
    Error   = 3,
};
#else // @header-generator platform
enum class RealmsListState : int {};
#endif // @header-generator platform

}

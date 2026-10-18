#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerPermissionsActionState : uchar {
    Success = 0,
    Error   = 1,
    Idle    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PlayerPermissionsActionState : uchar {
    Success = 0,
    Error   = 1,
    Idle    = 2,
};
#else // @header-generator platform
enum class PlayerPermissionsActionState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsWorldContextState : int {
    IDLE            = 0,
    FETCHING_WORLD  = 1,
    FAILED          = 2,
    WORLD_AVAILABLE = 3,
};
#else // @header-generator platform
enum class RealmsWorldContextState : int {};
#endif // @header-generator platform

}

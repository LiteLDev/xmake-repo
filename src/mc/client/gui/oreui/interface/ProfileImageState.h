#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProfileImageState : int {
    Undefined = 0,
    Requested = 1,
    Success   = 2,
    Failure   = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ProfileImageState : int {
    Undefined = 0,
    Requested = 1,
    Success   = 2,
    Failure   = 3,
};
#else // @header-generator platform
enum class ProfileImageState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

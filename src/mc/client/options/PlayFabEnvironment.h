#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayFabEnvironment : int {
    Development = 0,
    Test        = 1,
    Production  = 2,
};
#else // @header-generator platform
enum class PlayFabEnvironment : int {};
#endif // @header-generator platform

}

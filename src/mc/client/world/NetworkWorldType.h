#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NetworkWorldType : int {
    None                = 0,
    Remote              = 1,
    External            = 2,
    Friend              = 3,
    CrossPlatformFriend = 4,
    ThirdParty          = 5,
};
#else // @header-generator platform
enum class NetworkWorldType : int {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UserPlatformBanType : int {
    Xbox      = 0,
    Minecraft = 1,
};
#else // @header-generator platform
enum class UserPlatformBanType : int {};
#endif // @header-generator platform

}

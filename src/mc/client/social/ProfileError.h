#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProfileError : int {
    None         = 0,
    UserNotFound = 1,
};
#else // @header-generator platform
enum class ProfileError : int {};
#endif // @header-generator platform

}

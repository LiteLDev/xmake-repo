#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UserPlatformConnectionResult : int {
    Anonymous        = 0,
    NotConnected     = 1,
    Connected        = 2,
    ConnectionFailed = 3,
    OfflineOnly      = 4,
    UserBanned       = 5,
};
#else // @header-generator platform
enum class UserPlatformConnectionResult : int {};
#endif // @header-generator platform

}

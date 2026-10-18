#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UserPlatformConnectionState : int {
    Anonymous        = 0,
    NotConnected     = 1,
    Connecting       = 2,
    Connected        = 3,
    ConnectionFailed = 4,
    OfflineOnly      = 5,
    UserBanned       = 6,
};
#else // @header-generator platform
enum class UserPlatformConnectionState : int {};
#endif // @header-generator platform

}

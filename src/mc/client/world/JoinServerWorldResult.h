#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class JoinServerWorldResult : int {
    OK                                    = 0,
    InvalidServerIdError                  = 1,
    InvalidUserError                      = 2,
    NoInternetError                       = 3,
    UserNeedsToBeSignedInError            = 4,
    BlockedByPlatformError                = 5,
    BlockedByXBLError                     = 6,
    UserBannedError                       = 7,
    ThirdPartyBadIPError                  = 8,
    ThirdPartyNoServerOrServerLockedError = 9,
    ExternalLocalhostError                = 10,
    ExternalPrivateNetworkError           = 11,
    UnknownError                          = 12,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class JoinServerWorldResult : int {
    Ok                                    = 0,
    InvalidServerIdError                  = 1,
    InvalidUserError                      = 2,
    NoInternetError                       = 3,
    UserNeedsToBeSignedInError            = 4,
    BlockedByPlatformError                = 5,
    BlockedByXBLError                     = 6,
    UserBannedError                       = 7,
    ThirdPartyBadIPError                  = 8,
    ThirdPartyNoServerOrServerLockedError = 9,
    ExternalLocalhostError                = 10,
    ExternalPrivateNetworkError           = 11,
    UnknownError                          = 12,
};
#else // @header-generator platform
enum class JoinServerWorldResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

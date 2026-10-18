#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum RNS2BindResult : uint {
    BR_SUCCESS                             = 0,
    BR_REQUIRES_RAKNET_SUPPORT_IPV6_DEFINE = 1,
    BR_FAILED_TO_BIND_SOCKET               = 2,
    BR_FAILED_SEND_TEST                    = 3,
#else // @header-generator platform
enum class RNS2BindResult : int {
    Success                         = 0,
    RequiresRaknetSupportIpv6Define = 1,
    FailedToBindSocket              = 2,
    FailedSendTest                  = 3,
#endif // @header-generator platform
};

}

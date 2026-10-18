#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ConnectionType : short {
    Undefined                        = -1,
    Local                            = 0,
    IPv4                             = 1,
    IPv6                             = 2,
    WebSocketsWebRTCSignaling        = 3,
    LANWebRTCSignaling               = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    NAT                              = 5,
    UPNP                             = 6,
#else // @header-generator platform
    Nat                              = 5,
    Upnp                             = 6,
#endif // @header-generator platform
    WebSocketsWebRTCJsonRpcSignaling = 7,
    UnknownIP                        = 8,
};

}

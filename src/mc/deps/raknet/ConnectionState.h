#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum ConnectionState : uint {
    IS_PENDING                = 0,
    IS_CONNECTING             = 1,
    IS_CONNECTED              = 2,
    IS_DISCONNECTING          = 3,
    IS_SILENTLY_DISCONNECTING = 4,
    IS_DISCONNECTED           = 5,
    IS_NOT_CONNECTED          = 6,
#else // @header-generator platform
enum class ConnectionState : int {
    Pending               = 0,
    Connecting            = 1,
    Connected             = 2,
    Disconnecting         = 3,
    SilentlyDisconnecting = 4,
    Disconnected          = 5,
    NotConnected          = 6,
#endif // @header-generator platform
};

}

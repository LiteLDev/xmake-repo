#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceTransportState : int {
    KNew          = 0,
    KChecking     = 1,
    KConnected    = 2,
    KCompleted    = 3,
    KFailed       = 4,
    KDisconnected = 5,
    KClosed       = 6,
};

}
#endif // @header-generator platform

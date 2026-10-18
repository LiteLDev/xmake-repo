#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SocketState : int {
    KClosed       = 0,
    KConnecting   = 1,
    KConnected    = 2,
    KShuttingDown = 3,
};

}
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum PI2_LostConnectionReason : uint {
    LCR_CLOSED_BY_USER             = 0,
    LCR_DISCONNECTION_NOTIFICATION = 1,
    LCR_CONNECTION_LOST            = 2,
#else // @header-generator platform
enum class PI2_LostConnectionReason : int {
    ClosedByUser              = 0,
    DisconnectionNotification = 1,
    ConnectionLost            = 2,
#endif // @header-generator platform
};

}

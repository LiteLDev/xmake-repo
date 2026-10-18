#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum RNSPerSecondMetrics : uint {
    USER_MESSAGE_BYTES_PUSHED             = 0,
    USER_MESSAGE_BYTES_SENT               = 1,
    USER_MESSAGE_BYTES_RESENT             = 2,
    USER_MESSAGE_BYTES_RECEIVED_PROCESSED = 3,
    USER_MESSAGE_BYTES_RECEIVED_IGNORED   = 4,
    ACTUAL_BYTES_SENT                     = 5,
    ACTUAL_BYTES_RECEIVED                 = 6,
    RNS_PER_SECOND_METRICS_COUNT          = 7,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

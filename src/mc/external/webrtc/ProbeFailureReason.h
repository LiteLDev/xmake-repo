#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ProbeFailureReason : int {
    KInvalidSendReceiveInterval = 0,
    KInvalidSendReceiveRatio    = 1,
    KTimeout                    = 2,
    KLast                       = 3,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairEventType : int {
    KCheckSent             = 0,
    KCheckReceived         = 1,
    KCheckResponseSent     = 2,
    KCheckResponseReceived = 3,
    KNumValues             = 4,
};

}
#endif // @header-generator platform

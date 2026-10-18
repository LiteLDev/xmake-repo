#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class BandwidthLimitedCause : int {
    KLossLimitedBweIncreasing        = 0,
    KLossLimitedBwe                  = 1,
    KDelayBasedLimited               = 2,
    KDelayBasedLimitedDelayIncreased = 3,
    KRttBasedBackOffHighRtt          = 4,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LossBasedState : int {
    KIncreasing           = 0,
    KIncreaseUsingPadding = 1,
    KDecreasing           = 2,
    KDelayBasedEstimate   = 3,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DecodeTargetIndication : int {
    KNotPresent  = 0,
    KDiscardable = 1,
    KSwitch      = 2,
    KRequired    = 3,
};

}
#endif // @header-generator platform

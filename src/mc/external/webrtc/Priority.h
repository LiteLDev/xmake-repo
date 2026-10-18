#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class Priority : int {
    KVeryLow = 0,
    KLow     = 1,
    KMedium  = 2,
    KHigh    = 3,
};

}
#endif // @header-generator platform

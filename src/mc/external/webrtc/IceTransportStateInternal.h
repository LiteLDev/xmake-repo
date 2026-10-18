#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceTransportStateInternal : int {
    Init       = 0,
    Connecting = 1,
    Completed  = 2,
    Failed     = 3,
};

}
#endif // @header-generator platform

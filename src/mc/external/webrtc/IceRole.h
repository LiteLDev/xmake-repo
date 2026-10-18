#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceRole : int {
    Controlling = 0,
    Controlled  = 1,
    Unknown     = 2,
};

}
#endif // @header-generator platform

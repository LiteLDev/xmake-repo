#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LogErrorContext : int {
    // bitfield representation
    None    = 0,
    Errno   = 1 << 0,
    En      = 1 << 0,
    Hresult = 1 << 1,
    Hr      = 1 << 1,
};

}
#endif // @header-generator platform

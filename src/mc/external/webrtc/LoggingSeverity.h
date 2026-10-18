#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LoggingSeverity : int {
    Verbose = 0,
    Info    = 1,
    Warning = 2,
    Error   = 3,
    None    = 4,
};

}
#endif // @header-generator platform

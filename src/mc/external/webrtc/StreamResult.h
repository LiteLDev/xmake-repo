#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class StreamResult : int {
    Error   = 0,
    Success = 1,
    Block   = 2,
    Eos     = 3,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class NominationMode : int {
    Regular        = 0,
    Aggressive     = 1,
    SemiAggressive = 2,
};

}
#endif // @header-generator platform

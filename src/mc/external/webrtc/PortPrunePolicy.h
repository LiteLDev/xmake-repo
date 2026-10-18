#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class PortPrunePolicy : int {
    NoPrune              = 0,
    PruneBasedOnPriority = 1,
    KeepFirstReady       = 2,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairConfigType : int {
    KAdded     = 0,
    KUpdated   = 1,
    KDestroyed = 2,
    KSelected  = 3,
    KNumValues = 4,
};

}
#endif // @header-generator platform

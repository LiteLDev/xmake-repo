#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class EcnMarking : int {
    KNotEct = 0,
    KEct1   = 1,
    KEct0   = 2,
    KCe     = 3,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ECCurve : int {
    NistP256 = 0,
    Last     = 1,
};

}
#endif // @header-generator platform

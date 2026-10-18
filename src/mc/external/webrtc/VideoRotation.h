#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoRotation : int {
    KVideoRotation0   = 0,
    KVideoRotation90  = 90,
    KVideoRotation180 = 180,
    KVideoRotation270 = 270,
};

}
#endif // @header-generator platform

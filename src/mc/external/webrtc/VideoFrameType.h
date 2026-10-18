#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoFrameType : int {
    KEmptyFrame      = 0,
    KVideoFrameKey   = 3,
    KVideoFrameDelta = 4,
};

}
#endif // @header-generator platform

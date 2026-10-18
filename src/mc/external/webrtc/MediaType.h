#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class MediaType : int {
    Audio       = 0,
    Video       = 1,
    Data        = 2,
    Unsupported = 3,
    Any         = 4,
};

}
#endif // @header-generator platform

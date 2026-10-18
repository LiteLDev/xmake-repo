#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class FecMaskType : int {
    KFecMaskRandom = 0,
    KFecMaskBursty = 1,
};

}
#endif // @header-generator platform

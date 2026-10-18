#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ResourceUsageState : int {
    KOveruse  = 0,
    KUnderuse = 1,
};

}
#endif // @header-generator platform

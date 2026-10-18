#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceMode : int {
    Full = 0,
    Lite = 1,
};

}
#endif // @header-generator platform

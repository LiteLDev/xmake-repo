#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class AV1Profile : int {
    KProfile0 = 0,
    KProfile1 = 1,
    KProfile2 = 2,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SSLRole : int {
    Client = 0,
    Server = 1,
};

}
#endif // @header-generator platform

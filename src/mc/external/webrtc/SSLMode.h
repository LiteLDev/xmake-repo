#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SSLMode : int {
    Tls  = 0,
    Dtls = 1,
};

}
#endif // @header-generator platform

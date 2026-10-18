#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SSLHandshakeError : int {
    Unknown                 = 0,
    IncompatibleCiphersuite = 1,
    MaxValue                = 2,
};

}
#endif // @header-generator platform

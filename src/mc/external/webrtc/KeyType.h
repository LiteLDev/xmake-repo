#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class KeyType : int {
    Rsa     = 0,
    Ecdsa   = 1,
    Last    = 2,
    Default = 1,
};

}
#endif // @header-generator platform

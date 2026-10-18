#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

enum class OperationMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
    ECB    = 0,
    CBC    = 1,
    CFB    = 2,
    CFB128 = 3,
    OFB    = 4,
    GCM    = 5,
    CTR    = 6,
#else // @header-generator platform
    Ecb    = 0,
    Cbc    = 1,
    Cfb    = 2,
    Cfb128 = 3,
    Ofb    = 4,
    Gcm    = 5,
    Ctr    = 6,
#endif // @header-generator platform
};

}

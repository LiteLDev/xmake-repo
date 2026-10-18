#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Certificate {

enum class Encoding : int {
#if defined(LL_PLAT_A) // @header-generator platform
    PEM = 0,
    DER = 1,
    PFX = 2,
#else // @header-generator platform
    Pem = 0,
    Der = 1,
    Pfx = 2,
#endif // @header-generator platform
};

}

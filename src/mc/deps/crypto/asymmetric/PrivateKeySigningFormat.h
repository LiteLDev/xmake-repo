#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class PrivateKeySigningFormat : int {
    AutoDetect = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    PEM        = 1,
#else // @header-generator platform
    Pem        = 1,
#endif // @header-generator platform
};

}

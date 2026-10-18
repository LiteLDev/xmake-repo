#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class Padding : int {
#if defined(LL_PLAT_A) // @header-generator platform
    RSA_PKCS1      = 0,
    RSA_PKCS1_OAEP = 1,
#else // @header-generator platform
    Pkcs1     = 0,
    Pkcs1Oaep = 1,
#endif // @header-generator platform
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class System : int {
#if defined(LL_PLAT_A) // @header-generator platform
    RSA_1024      = 0,
    RSA_2048      = 1,
    RSA_4096      = 2,
    EC_prime256v1 = 3,
    EC_secp256k1  = 4,
    EC_secp384r1  = 5,
    EC_secp521r1  = 6,
#else // @header-generator platform
    Rsa1024      = 0,
    Rsa2048      = 1,
    Rsa4096      = 2,
    EcPrime256v1 = 3,
    EcSecp256k1  = 4,
    EcSecp384r1  = 5,
    EcSecp521r1  = 6,
#endif // @header-generator platform
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class System : int {
    RSA_1024      = 0,
    RSA_2048      = 1,
    RSA_4096      = 2,
    EC_prime256v1 = 3,
    EC_secp256k1  = 4,
    EC_secp384r1  = 5,
    EC_secp521r1  = 6,
};

}

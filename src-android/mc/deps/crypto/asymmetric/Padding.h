#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class Padding : int {
    RSA_PKCS1      = 0,
    RSA_PKCS1_OAEP = 1,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

enum class System : int {
#if defined(LL_PLAT_A) // @header-generator platform
    AES_128 = 0,
    AES_256 = 1,
#else // @header-generator platform
    Aes128 = 0,
    Aes256 = 1,
#endif // @header-generator platform
};

}

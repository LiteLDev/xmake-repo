#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

enum class HashType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    MD5    = 0,
    SHA1   = 1,
    SHA256 = 2,
    SHA384 = 3,
    SHA512 = 4,
#else // @header-generator platform
    Md5    = 0,
    Sha1   = 1,
    Sha256 = 2,
    Sha384 = 3,
    Sha512 = 4,
#endif // @header-generator platform
};

}

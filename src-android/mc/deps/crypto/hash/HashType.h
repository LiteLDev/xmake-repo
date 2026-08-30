#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

enum class HashType : int {
    MD5    = 0,
    SHA1   = 1,
    SHA256 = 2,
    SHA384 = 3,
    SHA512 = 4,
};

}

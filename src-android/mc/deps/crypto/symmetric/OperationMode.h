#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

enum class OperationMode : int {
    ECB    = 0,
    CBC    = 1,
    CFB    = 2,
    CFB128 = 3,
    OFB    = 4,
    GCM    = 5,
    CTR    = 6,
};

}

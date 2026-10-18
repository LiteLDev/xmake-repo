#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class ErrorKind : int {
    KNoError              = 0,
    KTooManyRetries       = 1,
    KNotConnected         = 2,
    KParseFailed          = 3,
    KWrongSequence        = 4,
    KPeerReported         = 5,
    KProtocolViolation    = 6,
    KResourceExhaustion   = 7,
    KUnsupportedOperation = 8,
};

}
#endif // @header-generator platform

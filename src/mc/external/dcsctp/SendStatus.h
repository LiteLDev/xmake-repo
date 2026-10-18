#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SendStatus : int {
    KSuccess                 = 0,
    KErrorMessageEmpty       = 1,
    KErrorMessageTooLarge    = 2,
    KErrorResourceExhaustion = 3,
    KErrorShuttingDown       = 4,
};

}
#endif // @header-generator platform

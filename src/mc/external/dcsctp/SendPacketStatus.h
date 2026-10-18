#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SendPacketStatus : int {
    KSuccess          = 0,
    KTemporaryFailure = 1,
    KError            = 2,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SctpImplementation : int {
    KUnknown = 0,
    KDcsctp  = 1,
    KUsrSctp = 2,
    KOther   = 3,
};

}
#endif // @header-generator platform

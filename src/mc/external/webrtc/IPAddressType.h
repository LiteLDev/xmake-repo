#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IPAddressType : int {
    KUnknown  = 0,
    KAny      = 1,
    KLoopback = 2,
    KPrivate  = 3,
    KPublic   = 4,
    KMaxValue = 4,
};

}
#endif // @header-generator platform

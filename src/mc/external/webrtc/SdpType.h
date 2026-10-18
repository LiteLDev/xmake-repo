#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SdpType : int {
    KOffer    = 0,
    KPrAnswer = 1,
    KAnswer   = 2,
    KRollback = 3,
};

}
#endif // @header-generator platform

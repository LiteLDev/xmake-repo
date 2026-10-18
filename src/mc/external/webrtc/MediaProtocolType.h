#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class MediaProtocolType : int {
    KRtp   = 0,
    KSctp  = 1,
    KOther = 2,
};

}
#endif // @header-generator platform

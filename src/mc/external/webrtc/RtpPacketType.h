#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtpPacketType : int {
    KRtp     = 0,
    KRtcp    = 1,
    KUnknown = 2,
};

}
#endif // @header-generator platform

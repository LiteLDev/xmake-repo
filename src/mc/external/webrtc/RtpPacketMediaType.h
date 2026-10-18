#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtpPacketMediaType : uint64 {
    KAudio                  = 0,
    KVideo                  = 1,
    KRetransmission         = 2,
    KForwardErrorCorrection = 3,
    KPadding                = 4,
};

}
#endif // @header-generator platform

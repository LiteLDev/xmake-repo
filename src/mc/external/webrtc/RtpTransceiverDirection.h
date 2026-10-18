#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtpTransceiverDirection : int {
    KSendRecv = 0,
    KSendOnly = 1,
    KRecvOnly = 2,
    KInactive = 3,
    KStopped  = 4,
};

}
#endif // @header-generator platform

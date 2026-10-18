#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpFeedbackMessageType : int {
    GenericNack = 0,
    Pli         = 1,
    Fir         = 2,
};

}
#endif // @header-generator platform

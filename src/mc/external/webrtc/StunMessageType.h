#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class StunMessageType : ushort {
    StunInvalidMessageType   = 0,
    StunBindingRequest       = 1,
    StunBindingIndication    = 17,
    StunBindingResponse      = 257,
    StunBindingErrorResponse = 273,
    GoogPingRequest          = 512,
    GoogPingResponse         = 768,
    GoogPingErrorResponse    = 784,
};

}
#endif // @header-generator platform

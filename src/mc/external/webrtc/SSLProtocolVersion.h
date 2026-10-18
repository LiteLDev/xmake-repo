#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SSLProtocolVersion : int {
    // bitfield representation
    NotGiven = -1,
    Tls10    = 0,
    Tls11    = 1 << 0,
    Dtls10   = 1 << 0,
    Tls12    = 1 << 1,
    Dtls12   = 1 << 1,
    Dtls13   = Dtls10 | Dtls12,
    Tls13    = Dtls10 | Dtls12,
};

}
#endif // @header-generator platform

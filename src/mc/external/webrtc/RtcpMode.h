#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpMode : int {
    KOff         = 0,
    KCompound    = 1,
    KReducedSize = 2,
};

}
#endif // @header-generator platform

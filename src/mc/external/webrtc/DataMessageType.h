#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DataMessageType : int {
    KText    = 0,
    KBinary  = 1,
    KControl = 2,
};

}
#endif // @header-generator platform

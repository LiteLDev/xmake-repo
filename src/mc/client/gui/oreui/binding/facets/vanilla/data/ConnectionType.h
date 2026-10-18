#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ConnectionType : uchar {
    LAN       = 0,
    PLATFORM  = 1,
    XBOX_LIVE = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ConnectionType : uchar {
    Lan      = 0,
    Platform = 1,
    XboxLive = 2,
};
#else // @header-generator platform
enum class ConnectionType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

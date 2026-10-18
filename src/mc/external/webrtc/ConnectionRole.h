#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ConnectionRole : int {
    None     = 0,
    Active   = 1,
    Passive  = 2,
    Actpass  = 3,
    Holdconn = 4,
};

}
#endif // @header-generator platform

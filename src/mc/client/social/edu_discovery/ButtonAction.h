#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonAction : uchar {
    CloseDialog   = 0,
    IpEntry       = 1,
    JoincodeEntry = 2,
};
#else // @header-generator platform
enum class ButtonAction : uchar {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsBackupsState : uchar {
    Idle      = 0,
    Fetching  = 1,
    Error     = 2,
    Available = 3,
};
#else // @header-generator platform
enum class RealmsBackupsState : uchar {};
#endif // @header-generator platform

}

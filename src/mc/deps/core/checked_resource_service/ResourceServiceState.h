#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ResourceServiceState : uchar {
    Enabled  = 0,
    Disabled = 1,
};
#else // @header-generator platform
enum class ResourceServiceState : uchar {};
#endif // @header-generator platform

}

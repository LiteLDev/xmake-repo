#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceIoCacheState : uchar {
    Cold    = 0,
    Warm    = 1,
    Partial = 2,
};

}
#endif // @header-generator platform

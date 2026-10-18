#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceLoadResult : uchar {
    Success = 0,
    Failed  = 1,
};

}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceLoadPhase : uchar {
    ResourceProcessing = 0,
    ContentLoad        = 1,
    ChunkGen           = 2,
    Count              = 3,
};

}
#endif // @header-generator platform

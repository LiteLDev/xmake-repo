#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {

enum class PlaceFeatureResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Success                 = 0,
    Failure_InvalidPosition = 1,
    Failure_ChunkNotLoaded  = 2,
#else // @header-generator platform
    Success                = 0,
    FailureInvalidPosition = 1,
    FailureChunkNotLoaded  = 2,
#endif // @header-generator platform
};

}

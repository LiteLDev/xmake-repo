#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BiomeSourceType : int {
    BiomeSource3d              = 0,
    BiomeSourceBase            = 1,
    FixedBiomeSource           = 2,
    NodeGraphBiomeSource       = 3,
    ReplacememtBiomeSource     = 4,
    DensityFunctionBiomeSource = 5,
#if defined(LL_PLAT_A) // @header-generator platform
    _count                     = 6,
#else // @header-generator platform
    Count                      = 6,
#endif // @header-generator platform
};

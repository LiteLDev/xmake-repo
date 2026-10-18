#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeBlendingSample {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, std::array<uchar, 8>>  mBiomeIndices;
    ::ll::TypedStorage<4, 32, std::array<float, 8>> mBlendWeights;
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeBlendingSample {};
#endif // @header-generator platform

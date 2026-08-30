#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeBlendingSample {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, std::array<uchar, 8>>  mBiomeIndices;
    ::ll::TypedStorage<4, 32, std::array<float, 8>> mBlendWeights;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<const std::array<float, 13824>> createBeardKernel();

    MCNAPI static float getContribution(int const, int const, int const);
    // NOLINTEND
};

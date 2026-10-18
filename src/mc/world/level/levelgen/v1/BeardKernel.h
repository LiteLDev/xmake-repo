#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<const std::array<float, 13824>> createBeardKernel();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::std::array<float, 13824> const> createBeardKernel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float getContribution(int const, int const, int const);
#else // @header-generator platform
    MCAPI static float getContribution(int dx, int dy, int dz);
#endif // @header-generator platform
    // NOLINTEND
};

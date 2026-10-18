#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionDimmingScalars {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, std::array<float, 6>> mScalars;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DimensionDimmingScalars {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::std::array<float, 6>> mScalars;
    // NOLINTEND
};
#else // @header-generator platform
struct DimensionDimmingScalars {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline

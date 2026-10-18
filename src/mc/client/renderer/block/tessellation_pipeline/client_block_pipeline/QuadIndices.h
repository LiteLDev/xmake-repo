#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct QuadIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::array<ulong, 4>> mIndices;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct QuadIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::array<uint64, 4>> mIndices;
    // NOLINTEND
};
#else // @header-generator platform
struct QuadIndices {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline

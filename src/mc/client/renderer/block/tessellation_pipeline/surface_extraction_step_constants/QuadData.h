#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::SurfaceExtractionStepConstants {

#if defined(LL_PLAT_A) // @header-generator platform
struct QuadData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, std::array<int, 4>> vertices;
    ::ll::TypedStorage<1, 1, uchar>               facing;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct QuadData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::array<int, 4>> vertices;
    ::ll::TypedStorage<1, 1, uchar>                 facing;
    // NOLINTEND
};
#else // @header-generator platform
struct QuadData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::SurfaceExtractionStepConstants

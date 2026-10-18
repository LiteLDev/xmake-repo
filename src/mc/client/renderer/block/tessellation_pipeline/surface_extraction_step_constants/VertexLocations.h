#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::SurfaceExtractionStepConstants {

#if defined(LL_PLAT_A) // @header-generator platform
enum VertexLocations : uint {
    RightUpFront   = 0,
    RightUpBack    = 1,
    RightDownFront = 2,
    RightDownBack  = 3,
    LeftUpFront    = 4,
    LeftUpBack     = 5,
    LeftDownFront  = 6,
    LeftDownBack   = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class VertexLocations : int {
    RightUpFront   = 0,
    RightUpBack    = 1,
    RightDownFront = 2,
    RightDownBack  = 3,
    LeftUpFront    = 4,
    LeftUpBack     = 5,
    LeftDownFront  = 6,
    LeftDownBack   = 7,
};
#else // @header-generator platform
enum class VertexLocations : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

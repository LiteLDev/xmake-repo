#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framegraph {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ErrorResult : int {
    UNSUPPORTED_DEPENDENCY            = 0,
    INVALID_FRAMEBUFFER_CONFIGURATION = 1,
    INVALID_TRANSIENT_RESOURCE        = 2,
    INVALID_MATERIAL_CONFIGURATION    = 3,
    NO_STARTING_POINT                 = 4,
    CANNOT_MAKE_BACKING_RESOURCE      = 5,
    CIRCULAR_DEPENDENCY               = 6,
};
#else // @header-generator platform
enum class ErrorResult : int {};
#endif // @header-generator platform

}

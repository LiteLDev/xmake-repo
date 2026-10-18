#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CoordinateCaptureType : uchar {
    CoordinateMyPosition    = 0,
    CoordinateBlockPosition = 1,
};
#else // @header-generator platform
enum class CoordinateCaptureType : uchar {};
#endif // @header-generator platform

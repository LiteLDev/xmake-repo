#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum ImageOrigin : uint {
    TopLeft    = 0,
    BottomLeft = 1,
    Default    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ImageOrigin : int {
    TopLeft    = 0,
    BottomLeft = 1,
    Default    = 2,
};
#else // @header-generator platform
enum class ImageOrigin : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

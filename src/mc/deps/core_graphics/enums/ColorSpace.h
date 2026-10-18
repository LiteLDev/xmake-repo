#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#include "mc/deps/core/image/ImageUsage.h"
#endif // @header-generator platform

namespace cg {

enum class ColorSpace : uchar {
    Unknown = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    sRGB    = 1,
#else // @header-generator platform
    SRGB    = 1,
#endif // @header-generator platform
    Linear  = 2,
};

#if defined(LL_PLAT_A) // @header-generator platform
}
#else // @header-generator platform
LLAPI cg::ColorSpace translateImageUsage(const mce::ImageUsage imageUsage);

} // namespace cg
#endif // @header-generator platform

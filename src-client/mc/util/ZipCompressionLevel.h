#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

enum class ZipCompressionLevel : int {
    Default         = 0,
    NoCompression   = 1,
    BestSpeed       = 2,
    BestCompression = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

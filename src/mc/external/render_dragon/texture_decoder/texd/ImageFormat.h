#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

enum class ImageFormat : int {
    Unknown = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    DDS     = 1,
    KTX1    = 2,
    KTX2    = 3,
#else // @header-generator platform
    Dds     = 1,
    Ktx1    = 2,
    Ktx2    = 3,
#endif // @header-generator platform
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ECapabilities : uchar {
    None              = 0,
    MultipleInstances = 2,
    Updatable         = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ECapabilities : uchar {
    None              = 0,
    MultipleInstances = 2,
    Updatable         = 4,
};
#else // @header-generator platform
enum class ECapabilities : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

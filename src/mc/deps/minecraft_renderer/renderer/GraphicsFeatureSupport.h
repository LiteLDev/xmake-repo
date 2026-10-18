#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GraphicsFeatureSupport : ushort {
    None                 = 0,
    HardwareSupported    = 1,
    PerformanceSupported = 2,
    UserEnabled          = 4,
};
#else // @header-generator platform
enum class GraphicsFeatureSupport : ushort {};
#endif // @header-generator platform

}

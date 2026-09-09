#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class GraphicsFeatureSupport : ushort {
    None                 = 0,
    HardwareSupported    = 1,
    PerformanceSupported = 2,
    UserEnabled          = 4,
};

}

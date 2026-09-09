#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

enum class DynamicResolutionScalingMethod : uchar {
    Basic           = 0,
    BottleneckAware = 1,
};

}

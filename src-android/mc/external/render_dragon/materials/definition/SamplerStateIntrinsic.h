#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class SamplerStateIntrinsic : uchar {
    ClampPoint  = 0,
    ClampLinear = 1,
    WrapPoint   = 2,
    WrapLinear  = 3,
};

}

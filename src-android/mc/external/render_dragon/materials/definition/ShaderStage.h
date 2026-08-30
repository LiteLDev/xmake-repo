#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class ShaderStage : uchar {
    Vertex      = 0,
    Fragment    = 1,
    Compute     = 2,
    Passthrough = 3,
    COUNT       = 4,
};

}

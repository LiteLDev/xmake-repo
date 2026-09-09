#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class ShaderStage : int {
    Vertex   = 0,
    Fragment = 1,
    Compute  = 2,
};

}

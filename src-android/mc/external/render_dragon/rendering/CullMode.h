#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class CullMode : int {
    None             = 0,
    Clockwise        = 1,
    CounterClockwise = 2,
};

}

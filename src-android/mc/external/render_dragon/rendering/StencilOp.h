#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class StencilOp : int {
    Keep      = 0,
    Zero      = 1,
    Replace   = 2,
    Increment = 6,
    Decrement = 7,
};

}

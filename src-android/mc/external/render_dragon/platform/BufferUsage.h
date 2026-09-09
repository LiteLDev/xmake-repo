#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

enum class BufferUsage : int {
    UnboundedRange        = 0,
    AccelerationStructure = 1,
};

}

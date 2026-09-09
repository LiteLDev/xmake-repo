#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class ThreadAllocationMode : int {
    Concurrent = 0,
    Locked     = 1,
};

}

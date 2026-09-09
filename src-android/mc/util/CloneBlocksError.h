#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CloneBlocksUtils {

enum class CloneBlocksError : int {
    CloneFailed   = 0,
    TooManyBlocks = 1,
    OutOfWorld    = 2,
    Overlap       = 3,
};

}

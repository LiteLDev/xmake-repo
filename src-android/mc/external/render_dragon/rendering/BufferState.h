#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class BufferState : int {
    Pending           = 0,
    CreateQueued      = 1,
    Created           = 2,
    MarkedForDeletion = 3,
};

}

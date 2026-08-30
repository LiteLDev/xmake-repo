#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks::coroutine {

enum class DispatchTarget : int {
    Resource  = 0,
    Rendering = 1,
};

}

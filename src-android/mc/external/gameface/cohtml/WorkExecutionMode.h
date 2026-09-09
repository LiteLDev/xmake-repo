#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum WorkExecutionMode : uint {
    WEM_UntilQueueEmpty = 0,
    WEM_UntilQuit       = 1,
};

}

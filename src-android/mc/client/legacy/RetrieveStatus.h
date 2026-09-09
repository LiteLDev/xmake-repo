#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

enum class RetrieveStatus : int {
    NewData = 0,
    Done    = 1,
    Failed  = 2,
};

}

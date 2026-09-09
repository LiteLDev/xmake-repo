#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsSubscriptionsState : int {
    IDLE    = 0,
    LOADING = 1,
    FAILED  = 2,
    DONE    = 3,
};

}

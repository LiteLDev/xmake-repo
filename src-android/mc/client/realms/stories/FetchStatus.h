#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class FetchStatus : int {
    Idle          = 0,
    InProgress    = 1,
    Success       = 2,
    InternalError = 3,
    FetchFailed   = 4,
    RateLimit     = 5,
};

}

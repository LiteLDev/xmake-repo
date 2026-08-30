#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

enum class GenericStatus : int {
    Success   = 0,
    Fail      = 1,
    RateLimit = 2,
    Unknown   = 3,
};

}

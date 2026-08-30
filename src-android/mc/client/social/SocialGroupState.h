#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class SocialGroupState : int {
    Unavailable = 0,
    Loading     = 1,
    Ready       = 2,
    Error       = 3,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class ServiceQuality : int {
    PING_HIGH  = 1,
    PING_MED   = 2,
    PING_LOW   = 3,
    PING_WORST = 4,
    PING_NONE  = 5,
};

}

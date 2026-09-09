#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class ServerStatus : uchar {
    None             = 0,
    Initializing     = 1,
    FetchingJoinCode = 2,
    Invalid          = 3,
    Running          = 4,
};

}

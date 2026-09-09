#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class JoinStatus : uchar {
    Joining          = 0,
    Error            = 1,
    ServerDiscovered = 2,
    ServerJoined     = 3,
};

}

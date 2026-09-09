#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum AdapterAttributes : uint {
    NO_ATTRIBUTES  = 0,
    IS_MULTICAST   = 1,
    IS_LOOPBACK    = 2,
    HAS_NO_GATEWAY = 4,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum ConnectionState : uint {
    IS_PENDING                = 0,
    IS_CONNECTING             = 1,
    IS_CONNECTED              = 2,
    IS_DISCONNECTING          = 3,
    IS_SILENTLY_DISCONNECTING = 4,
    IS_DISCONNECTED           = 5,
    IS_NOT_CONNECTED          = 6,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum PI2_LostConnectionReason : uint {
    LCR_CLOSED_BY_USER             = 0,
    LCR_DISCONNECTION_NOTIFICATION = 1,
    LCR_CONNECTION_LOST            = 2,
};

}

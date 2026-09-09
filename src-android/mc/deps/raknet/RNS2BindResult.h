#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum RNS2BindResult : uint {
    BR_SUCCESS                             = 0,
    BR_REQUIRES_RAKNET_SUPPORT_IPV6_DEFINE = 1,
    BR_FAILED_TO_BIND_SOCKET               = 2,
    BR_FAILED_SEND_TEST                    = 3,
};

}

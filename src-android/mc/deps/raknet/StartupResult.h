#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum StartupResult : uint {
    RAKNET_STARTED                  = 0,
    RAKNET_ALREADY_STARTED          = 1,
    INVALID_SOCKET_DESCRIPTORS      = 2,
    INVALID_MAX_CONNECTIONS         = 3,
    SOCKET_FAMILY_NOT_SUPPORTED     = 4,
    SOCKET_PORT_ALREADY_IN_USE      = 5,
    SOCKET_FAILED_TO_BIND           = 6,
    SOCKET_FAILED_TEST_SEND         = 7,
    PORT_CANNOT_BE_ZERO             = 8,
    FAILED_TO_CREATE_NETWORK_THREAD = 9,
    COULD_NOT_GENERATE_GUID         = 10,
    STARTUP_OTHER_FAILURE           = 11,
};

}

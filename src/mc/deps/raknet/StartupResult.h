#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
enum class StartupResult : int {
    RaknetStarted               = 0,
    RaknetAlreadyStarted        = 1,
    InvalidSocketDescriptors    = 2,
    InvalidMaxConnections       = 3,
    SocketFamilyNotSupported    = 4,
    SocketPortAlreadyInUse      = 5,
    SocketFailedToBind          = 6,
    SocketFailedTestSend        = 7,
    PortCannotBeZero            = 8,
    FailedToCreateNetworkThread = 9,
    CouldNotGenerateGuid        = 10,
    StartupOtherFailure         = 11,
#endif // @header-generator platform
};

}

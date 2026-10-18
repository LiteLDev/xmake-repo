#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum ConnectionAttemptResult : uint {
    CONNECTION_ATTEMPT_STARTED             = 0,
    INVALID_PARAMETER                      = 1,
    CANNOT_RESOLVE_DOMAIN_NAME             = 2,
    ALREADY_CONNECTED_TO_ENDPOINT          = 3,
    CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS = 4,
    SECURITY_INITIALIZATION_FAILED         = 5,
#else // @header-generator platform
enum class ConnectionAttemptResult : int {
    ConnectionAttemptStarted           = 0,
    InvalidParameter                   = 1,
    CannotResolveDomainName            = 2,
    AlreadyConnectedToEndpoint         = 3,
    ConnectionAttemptAlreadyInProgress = 4,
    SecurityInitializationFailed       = 5,
#endif // @header-generator platform
};

}

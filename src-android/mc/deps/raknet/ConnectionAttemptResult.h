#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum ConnectionAttemptResult : uint {
    CONNECTION_ATTEMPT_STARTED             = 0,
    INVALID_PARAMETER                      = 1,
    CANNOT_RESOLVE_DOMAIN_NAME             = 2,
    ALREADY_CONNECTED_TO_ENDPOINT          = 3,
    CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS = 4,
    SECURITY_INITIALIZATION_FAILED         = 5,
};

}

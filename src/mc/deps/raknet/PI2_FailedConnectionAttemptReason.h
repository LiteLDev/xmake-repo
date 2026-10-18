#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum PI2_FailedConnectionAttemptReason : uint {
    FCAR_CONNECTION_ATTEMPT_FAILED         = 0,
    FCAR_ALREADY_CONNECTED                 = 1,
    FCAR_NO_FREE_INCOMING_CONNECTIONS      = 2,
    FCAR_SECURITY_PUBLIC_KEY_MISMATCH      = 3,
    FCAR_CONNECTION_BANNED                 = 4,
    FCAR_INVALID_PASSWORD                  = 5,
    FCAR_INCOMPATIBLE_PROTOCOL             = 6,
    FCAR_IP_RECENTLY_CONNECTED             = 7,
    FCAR_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY = 8,
    FCAR_OUR_SYSTEM_REQUIRES_SECURITY      = 9,
    FCAR_PUBLIC_KEY_MISMATCH               = 10,
#else // @header-generator platform
enum class PI2_FailedConnectionAttemptReason : int {
    ConnectionAttemptFailed       = 0,
    AlreadyConnected              = 1,
    NoFreeIncomingConnections     = 2,
    SecurityPublicKeyMismatch     = 3,
    ConnectionBanned              = 4,
    InvalidPassword               = 5,
    IncompatibleProtocol          = 6,
    IpRecentlyConnected           = 7,
    RemoteSystemRequiresPublicKey = 8,
    OurSystemRequiresSecurity     = 9,
    PublicKeyMismatch             = 10,
#endif // @header-generator platform
};

}

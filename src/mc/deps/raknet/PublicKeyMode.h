#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum PublicKeyMode : uint {
    PKM_INSECURE_CONNECTION        = 0,
    PKM_ACCEPT_ANY_PUBLIC_KEY      = 1,
    PKM_USE_KNOWN_PUBLIC_KEY       = 2,
    PKM_USE_TWO_WAY_AUTHENTICATION = 3,
#else // @header-generator platform
enum class PublicKeyMode : int {
    InsecureConnection      = 0,
    AcceptAnyPublicKey      = 1,
    UseKnownPublicKey       = 2,
    UseTwoWayAuthentication = 3,
#endif // @header-generator platform
};

}

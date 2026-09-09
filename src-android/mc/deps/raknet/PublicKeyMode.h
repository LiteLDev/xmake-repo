#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum PublicKeyMode : uint {
    PKM_INSECURE_CONNECTION        = 0,
    PKM_ACCEPT_ANY_PUBLIC_KEY      = 1,
    PKM_USE_KNOWN_PUBLIC_KEY       = 2,
    PKM_USE_TWO_WAY_AUTHENTICATION = 3,
};

}

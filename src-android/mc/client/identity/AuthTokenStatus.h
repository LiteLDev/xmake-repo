#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class AuthTokenStatus : int {
    Success      = 0,
    Fail         = 1,
    IdentityNull = 2,
    NotSignedIn  = 3,
};

}

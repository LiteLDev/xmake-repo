#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class UploadToRealmsError : int {
    InvalidWorldId          = 0,
    TooManyRealms           = 1,
    InvalidRealmName        = 2,
    InvalidRealmDescription = 3,
    InvalidResponse         = 4,
    InvalidWorldName        = 5,
    CrossPlatformRestricted = 6,
    UnknownError            = 7,
};

}

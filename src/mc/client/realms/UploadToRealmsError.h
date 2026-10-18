#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
enum class UploadToRealmsError : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CreateOnRealmsError : int {
    UnassignedDevVersion    = 0,
    MemberOfTooManyRealms   = 1,
    CannotConnectToRealm    = 2,
    CrossPlatformRestricted = 3,
    UnknownError            = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CreateOnRealmsError : int {
    UnassignedDevVersion    = 0,
    MemberOfTooManyRealms   = 1,
    CannotConnectToRealm    = 2,
    CrossPlatformRestricted = 3,
    UnknownError            = 4,
};
#else // @header-generator platform
enum class CreateOnRealmsError : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

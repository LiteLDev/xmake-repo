#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ServerPreference : int {
    AUTOMATIC_FIRST_JOIN = 0,
    AUTOMATIC_OWNER      = 1,
    MANUAL               = 2,
};
#else // @header-generator platform
enum class ServerPreference : int {};
#endif // @header-generator platform

}

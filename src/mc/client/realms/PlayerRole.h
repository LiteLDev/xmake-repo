#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerRole : int {
    Player = 0,
    Admin  = 1,
    Owner  = 2,
};
#else // @header-generator platform
enum class PlayerRole : int {};
#endif // @header-generator platform

}

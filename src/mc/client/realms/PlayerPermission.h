#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerPermission : int {
    NonMember = 0,
    Visitor   = 1,
    Member    = 2,
    Operator  = 3,
    Owner     = 4,
};
#else // @header-generator platform
enum class PlayerPermission : int {};
#endif // @header-generator platform

}

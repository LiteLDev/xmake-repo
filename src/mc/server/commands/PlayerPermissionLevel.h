#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PlayerPermissionLevel : uchar {
#else // @header-generator platform
enum class PlayerPermissionLevel : schar {
#endif // @header-generator platform
    Visitor  = 0,
    Member   = 1,
    Operator = 2,
    Custom   = 3,
};

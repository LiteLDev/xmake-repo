#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameServerTokenValidationResult : int {
    Success       = 0,
    Expired       = 1,
    BadSignature  = 2,
    WrongAudience = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

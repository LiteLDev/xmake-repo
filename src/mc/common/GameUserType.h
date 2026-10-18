#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameUserType : int {
    Primary   = 0,
    Secondary = 1,
    None      = 2,
};
#else // @header-generator platform
enum class GameUserType : int {};
#endif // @header-generator platform

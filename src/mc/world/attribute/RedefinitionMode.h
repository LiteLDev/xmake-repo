#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RedefinitionMode : uchar {
#else // @header-generator platform
enum class RedefinitionMode : schar {
#endif // @header-generator platform
    KeepCurrent        = 0,
    UpdateToNewDefault = 1,
};

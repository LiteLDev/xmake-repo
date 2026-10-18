#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TriggerIndiciesEnum : int {
    LT   = 0,
    RT   = 1,
    SIZE = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TriggerIndiciesEnum : int {
    Lt   = 0,
    Rt   = 1,
    Size = 2,
};
#else // @header-generator platform
enum class TriggerIndiciesEnum : int {};
#endif // @header-generator platform
#endif // @header-generator platform

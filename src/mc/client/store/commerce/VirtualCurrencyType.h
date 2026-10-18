#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class VirtualCurrencyType : uint {
    Minecoin = 0,
    Token    = 1,
};
#else // @header-generator platform
enum class VirtualCurrencyType : uint {};
#endif // @header-generator platform

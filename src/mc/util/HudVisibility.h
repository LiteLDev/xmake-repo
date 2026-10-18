#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class HudVisibility : uint {
#else // @header-generator platform
enum class HudVisibility : int {
#endif // @header-generator platform
    Hide  = 0,
    Reset = 1,
    Count = 2,
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonMappingType : uint {
    Global        = 0,
    DoublePressed = 1,
    Pressed       = 2,
    Focused       = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ButtonMappingType : uint {
    Global        = 0,
    DoublePressed = 1,
    Pressed       = 2,
    Focused       = 3,
};
#else // @header-generator platform
enum class ButtonMappingType : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

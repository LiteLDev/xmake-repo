#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonMappingInputModeCondition : uint {
    None       = 0,
    NotGamepad = 1,
    Gamepad    = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ButtonMappingInputModeCondition : uint {
    None       = 0,
    NotGamepad = 1,
    Gamepad    = 2,
};
#else // @header-generator platform
enum class ButtonMappingInputModeCondition : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

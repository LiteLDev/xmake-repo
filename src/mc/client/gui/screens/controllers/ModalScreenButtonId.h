#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ModalScreenButtonId : int {
    ButtonLeft         = 0,
    ButtonMiddle       = 1,
    ButtonRightCancel  = 2,
    CheckboxSelected   = 3,
    CheckboxUnselected = 4,
    ButtonClose        = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ModalScreenButtonId : int {
    ButtonLeft         = 0,
    ButtonMiddle       = 1,
    ButtonRightCancel  = 2,
    CheckboxSelected   = 3,
    CheckboxUnselected = 4,
    ButtonClose        = 5,
};
#else // @header-generator platform
enum class ModalScreenButtonId : int {};
#endif // @header-generator platform
#endif // @header-generator platform

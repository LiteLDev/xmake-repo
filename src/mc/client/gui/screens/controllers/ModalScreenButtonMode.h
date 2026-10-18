#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ModalScreenButtonMode : int {
    ThreeButtons                   = 0,
    DestructiveThreeButtons        = 1,
    TwoButtonsCheckbox             = 2,
    TwoButtonsLeftRight            = 3,
    DestructiveTwoButtonsLeftRight = 4,
    OneButtonMiddle                = 5,
    OneButtonMiddleCheckbox        = 6,
    NoButtons                      = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ModalScreenButtonMode : int {
    ThreeButtons                   = 0,
    DestructiveThreeButtons        = 1,
    TwoButtonsCheckbox             = 2,
    TwoButtonsLeftRight            = 3,
    DestructiveTwoButtonsLeftRight = 4,
    OneButtonMiddle                = 5,
    OneButtonMiddleCheckbox        = 6,
    NoButtons                      = 7,
};
#else // @header-generator platform
enum class ModalScreenButtonMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

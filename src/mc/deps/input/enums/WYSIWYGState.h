#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WYSIWYGState : uint {
    NoControlSelected              = 0,
    ControlSelected                = 1,
    ModifyingOpacity               = 2,
    ModifyingScale                 = 3,
    ResetConfirmation              = 4,
    CloseWithoutSavingConfirmation = 5,
    Exiting                        = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WYSIWYGState : uint {
    NoControlSelected              = 0,
    ControlSelected                = 1,
    ModifyingOpacity               = 2,
    ModifyingScale                 = 3,
    ResetConfirmation              = 4,
    CloseWithoutSavingConfirmation = 5,
    Exiting                        = 6,
};
#else // @header-generator platform
enum class WYSIWYGState : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

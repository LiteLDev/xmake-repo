#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum Platform : uint {
    Android_Fire   = 0,
    Android_FireTV = 1,
    Android_Google = 2,
    Android_GearVR = 3,
    iOS            = 4,
    WinPhone       = 5,
    Win10          = 6,
    CommonPreview  = 7,
    Xbox           = 8,
    Switch         = 9,
    Berwick        = 10,
    XboxPreview    = 11,
};
#else // @header-generator platform
enum class Platform : int {};
#endif // @header-generator platform

}

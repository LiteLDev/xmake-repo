#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScreenshotPostProcessFilter : int {
#if defined(LL_PLAT_A) // @header-generator platform
    NONE                  = 0,
    GRAYSCALE             = 1,
    SEPIA                 = 2,
    INVERTED              = 3,
    WARM                  = 4,
    COOL                  = 5,
    ACHROMATOPSIA_XLINKED = 6,
    DEUTERANOPIA          = 7,
    PROTANOPIA            = 8,
    TRITANOPIA            = 9,
#else // @header-generator platform
    None                 = 0,
    Grayscale            = 1,
    Sepia                = 2,
    Inverted             = 3,
    Warm                 = 4,
    Cool                 = 5,
    AchromatopsiaXlinked = 6,
    Deuteranopia         = 7,
    Protanopia           = 8,
    Tritanopia           = 9,
#endif // @header-generator platform
};

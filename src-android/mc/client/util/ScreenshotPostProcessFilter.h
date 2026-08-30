#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScreenshotPostProcessFilter : int {
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
};

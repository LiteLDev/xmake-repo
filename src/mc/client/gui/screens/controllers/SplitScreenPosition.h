#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SplitScreenPosition : int {
    Center            = 0,
    Horizontal_Top    = 1,
    Horizontal_Bottom = 2,
    Vertical_Left     = 3,
    Vertical_Right    = 4,
    Top_Left          = 5,
    Top_Right         = 6,
    Bottom_Left       = 7,
    Bottom_Right      = 8,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SplitScreenPosition : int {
    Center           = 0,
    HorizontalTop    = 1,
    HorizontalBottom = 2,
    VerticalLeft     = 3,
    VerticalRight    = 4,
    TopLeft          = 5,
    TopRight         = 6,
    BottomLeft       = 7,
    BottomRight      = 8,
};
#else // @header-generator platform
enum class SplitScreenPosition : int {};
#endif // @header-generator platform
#endif // @header-generator platform

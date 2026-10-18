#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayoutVariableType : uchar {
    X                    = 0,
    Y                    = 1,
    Width                = 2,
    Height               = 3,
    XOffsetDelta         = 4,
    YOffsetDelta         = 5,
    XGridPosition        = 6,
    YGridPosition        = 7,
    XGridDimention       = 8,
    YGridDimention       = 9,
    StackPanelVisibility = 10,
    Count                = 11,
    Unused               = 100,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayoutVariableType : uchar {
    X                    = 0,
    Y                    = 1,
    Width                = 2,
    Height               = 3,
    XOffsetDelta         = 4,
    YOffsetDelta         = 5,
    XGridPosition        = 6,
    YGridPosition        = 7,
    XGridDimention       = 8,
    YGridDimention       = 9,
    StackPanelVisibility = 10,
    Count                = 11,
    Unused               = 100,
};
#else // @header-generator platform
enum class LayoutVariableType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

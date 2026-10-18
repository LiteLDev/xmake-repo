#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class VisibilityFlag : uchar {
    None                = 0,
    Visible             = 1,
    VisibleInStackPanel = 2,
    All                 = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class VisibilityFlag : uchar {
    None                = 0,
    Visible             = 1,
    VisibleInStackPanel = 2,
    All                 = 3,
};
#else // @header-generator platform
enum class VisibilityFlag : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

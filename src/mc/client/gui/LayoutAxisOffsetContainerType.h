#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LayoutAxisOffsetContainerType : int {
    Default   = 0,
    Specified = 1,
    Fill      = 2,
    None      = 3,
    Count     = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class LayoutAxisOffsetContainerType : int {
    Default   = 0,
    Specified = 1,
    Fill      = 2,
    None      = 3,
    Count     = 4,
};
#else // @header-generator platform
enum class LayoutAxisOffsetContainerType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

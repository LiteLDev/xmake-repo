#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PriorityRule : uchar {
    Default                   = 0,
    ShowWhenControlsAreHidden = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PriorityRule : schar {
    Default                   = 0,
    ShowWhenControlsAreHidden = 1,
};
#else // @header-generator platform
enum class PriorityRule : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIControlIdType : uint {
    DefaultNavigationListOption = 0,
    DefaultNavigationOption     = 1,
    DefaultNavigationButton     = 2,
    Fill                        = 3,
    Line                        = 4,
    None                        = 5,
    Custom                      = 6,
    Count                       = 7,
    Invalid                     = 7,
};
#else // @header-generator platform
enum class UIControlIdType : uint {};
#endif // @header-generator platform

}

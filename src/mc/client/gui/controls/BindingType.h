#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BindingType : int {
    None              = 0,
    Global            = 1,
    Collection        = 2,
    CollectionDetails = 3,
    View              = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BindingType : int {
    None              = 0,
    Global            = 1,
    Collection        = 2,
    CollectionDetails = 3,
    View              = 4,
};
#else // @header-generator platform
enum class BindingType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

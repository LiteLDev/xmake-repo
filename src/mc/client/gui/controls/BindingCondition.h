#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BindingCondition : int {
    None              = 0,
    Once              = 1,
    Always            = 2,
    AlwaysWhenVisible = 3,
    Visible           = 4,
    VisibilityChanged = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BindingCondition : int {
    None              = 0,
    Once              = 1,
    Always            = 2,
    AlwaysWhenVisible = 3,
    Visible           = 4,
    VisibilityChanged = 5,
};
#else // @header-generator platform
enum class BindingCondition : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ToastChannel : int {
    All         = 0,
    OnlyRecipes = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ToastChannel : int {
    All         = 0,
    OnlyRecipes = 1,
};
#else // @header-generator platform
enum class ToastChannel : int {};
#endif // @header-generator platform
#endif // @header-generator platform

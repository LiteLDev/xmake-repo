#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProgressContentType : int {
    Default = 0,
    Vanilla = 1,
    Editor  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ProgressContentType : int {
    Default = 0,
    Vanilla = 1,
    Editor  = 2,
};
#else // @header-generator platform
enum class ProgressContentType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

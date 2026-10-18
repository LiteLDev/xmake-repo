#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum InterceptRequestStatus : uint {
    Allow    = 0,
    Restrict = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InterceptRequestStatus : int {
    Allow    = 0,
    Restrict = 1,
};
#else // @header-generator platform
enum class InterceptRequestStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

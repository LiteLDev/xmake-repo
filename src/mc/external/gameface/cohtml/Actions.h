#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::EventAction {

#if defined(LL_PLAT_A) // @header-generator platform
enum Actions : uint {
    ContinueHandling  = 0,
    InterruptHandling = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Actions : int {
    ContinueHandling  = 0,
    InterruptHandling = 1,
};
#else // @header-generator platform
enum class Actions : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum AppFocusState : uint {
#else // @header-generator platform
enum class AppFocusState : int {
#endif // @header-generator platform
    Focused   = 0,
    Unfocused = 1,
};

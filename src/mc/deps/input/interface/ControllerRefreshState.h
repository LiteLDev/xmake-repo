#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ControllerRefreshState : int {
    WaitingForApplet  = 0,
    WaitingForRefresh = 1,
    Complete          = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ControllerRefreshState : int {
    WaitingForApplet  = 0,
    WaitingForRefresh = 1,
    Complete          = 2,
};
#else // @header-generator platform
enum class ControllerRefreshState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

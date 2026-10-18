#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ToastState : int {
    NoToast                = 0,
    ToastIdle              = 1,
    AnimateToastIn         = 2,
    ReadyToAnimateToastOut = 3,
    AnimateToastOut        = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ToastState : int {
    NoToast                = 0,
    ToastIdle              = 1,
    AnimateToastIn         = 2,
    ReadyToAnimateToastOut = 3,
    AnimateToastOut        = 4,
};
#else // @header-generator platform
enum class ToastState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DlcUIWrapperResult : int {
    Processing     = 0,
    ModalDisplayed = 1,
    EnteringGame   = 2,
    Error          = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DlcUIWrapperResult : int {
    Processing     = 0,
    ModalDisplayed = 1,
    EnteringGame   = 2,
    Error          = 3,
};
#else // @header-generator platform
enum class DlcUIWrapperResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

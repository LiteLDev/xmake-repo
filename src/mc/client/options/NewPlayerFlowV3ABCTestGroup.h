#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class NewPlayerFlowV3ABCTestGroup : int {
    Uninitialized      = 0,
    Current            = 1,
    VB_NoSignInScreen  = 2,
    VD_NoControlScreen = 3,
    Count              = 4,
};
#else // @header-generator platform
enum class NewPlayerFlowV3ABCTestGroup : int {};
#endif // @header-generator platform

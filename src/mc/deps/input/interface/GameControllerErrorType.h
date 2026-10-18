#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameControllerErrorType : uchar {
    NoError                          = 0,
    ControllerRequired               = 1,
    InvalidConfiguration             = 2,
    AdhocOverWirelessConnectionLimit = 3,
    AdhocInvalidConfiguration        = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GameControllerErrorType : uchar {
    NoError                          = 0,
    ControllerRequired               = 1,
    InvalidConfiguration             = 2,
    AdhocOverWirelessConnectionLimit = 3,
    AdhocInvalidConfiguration        = 4,
};
#else // @header-generator platform
enum class GameControllerErrorType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FileReadResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    SUCCESS             = 0,
    FAILED_TO_OPEN_FILE = 1,
    MALFORMED           = 2,
#else // @header-generator platform
    Success          = 0,
    FailedToOpenFile = 1,
    Malformed        = 2,
#endif // @header-generator platform
};

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ExternalServerFileError : int {
    ManualServersUnsupported = 0,
    DuplicateAddressAndPort  = 1,
    UnknownError             = 2,
    IdNotFound               = 3,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

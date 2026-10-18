#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSONSchemaArea : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    BOTH   = 0,
    CLIENT = 1,
    SERVER = 2,
#else // @header-generator platform
    Both   = 0,
    Client = 1,
    Server = 2,
#endif // @header-generator platform
};

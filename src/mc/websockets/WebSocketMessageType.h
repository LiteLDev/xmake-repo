#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WebSocketMessageType : uint {
#if defined(LL_PLAT_A) // @header-generator platform
    UNKNOWN = 0,
    TEXT    = 1,
    BINARY  = 2,
#else // @header-generator platform
    Unknown = 0,
    Text    = 1,
    Binary  = 2,
#endif // @header-generator platform
};

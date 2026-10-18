#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum SubClientId : uchar {
#else // @header-generator platform
enum class SubClientId : uchar {
#endif // @header-generator platform
    Server           = 0,
    PrimaryClient    = 0,
    Client2          = 1,
    Client3          = 2,
    Client4          = 3,
    ExtraIdSlotStart = 100,
    EditorUI         = 101,
};

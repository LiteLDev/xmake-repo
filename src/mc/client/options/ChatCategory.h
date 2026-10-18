#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChatCategory : uchar {
    Font  = 0,
    Color = 1,
};
#else // @header-generator platform
enum class ChatCategory : uchar {};
#endif // @header-generator platform

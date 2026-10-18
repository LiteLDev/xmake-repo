#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ChatAvailability : uchar {
    ChatScreenDisabled = 0,
    ChattingDisabled   = 1,
    Normal             = 2,
};
#else // @header-generator platform
enum class ChatAvailability : uchar {};
#endif // @header-generator platform

}
#endif // @header-generator platform

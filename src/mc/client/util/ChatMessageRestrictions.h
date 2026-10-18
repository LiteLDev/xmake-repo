#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChatMessageRestrictions : uchar {
    Allowed           = 0,
    BlockedByPlatform = 1,
    BlockedByXBL      = 2,
    Muted             = 3,
    CommandDisabled   = 4,
};
#else // @header-generator platform
enum class ChatMessageRestrictions : uchar {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ChatMessageType : uint {
    Status  = 0,
    Party   = 1,
    Warning = 2,
};
#else // @header-generator platform
enum class ChatMessageType : uint {};
#endif // @header-generator platform

}

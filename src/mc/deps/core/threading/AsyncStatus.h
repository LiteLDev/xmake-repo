#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
enum AsyncStatus : uint {
#else // @header-generator platform
enum class AsyncStatus : int {
#endif // @header-generator platform
    Started   = 0,
    Completed = 1,
    Canceled  = 2,
    Error     = 3,
};

}

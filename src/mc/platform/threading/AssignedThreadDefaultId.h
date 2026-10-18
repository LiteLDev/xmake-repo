#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum class AssignedThreadDefaultId : int {
#if defined(LL_PLAT_A) // @header-generator platform
    EMPTY_THREAD_ID   = 0,
    CURRENT_THREAD_ID = 1,
#else // @header-generator platform
    EmptyThreadId   = 0,
    CurrentThreadId = 1,
#endif // @header-generator platform
};

}

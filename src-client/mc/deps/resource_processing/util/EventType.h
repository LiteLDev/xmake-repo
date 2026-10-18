#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources::PackDirectoryIterator {

enum class EventType : int {
    EnterPackDirectory    = 0,
    LeavePackDirectory    = 1,
    FileFound             = 2,
    FileFoundOutsidePacks = 3,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

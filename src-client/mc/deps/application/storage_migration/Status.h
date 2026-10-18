#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

enum class Status : int {
    Complete           = 0,
    Partial            = 1,
    NotStarted         = 2,
    SourceInaccessible = 3,
    UnsupportedStatus  = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

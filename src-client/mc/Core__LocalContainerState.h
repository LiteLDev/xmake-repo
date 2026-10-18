#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class LocalContainerState : uint {
    Unknown         = 0,
    LocalSynced     = 1,
    LocalOutOfDate  = 2,
    LocalOnly       = 3,
    LocalExempt     = 4,
    LocalOnboarding = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

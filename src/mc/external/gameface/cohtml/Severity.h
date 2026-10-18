#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Logging {

#if defined(LL_PLAT_A) // @header-generator platform
enum Severity : uint {
    Trace           = 0,
    Debug           = 1,
    Info            = 2,
    Warning         = 3,
    Error           = 4,
    AssertFailure   = 5,
    Critical        = 5,
    SeveritiesCount = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Severity : int {
    Trace           = 0,
    Debug           = 1,
    Info            = 2,
    Warning         = 3,
    Error           = 4,
    AssertFailure   = 5,
    Critical        = 5,
    SeveritiesCount = 6,
};
#else // @header-generator platform
enum class Severity : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}

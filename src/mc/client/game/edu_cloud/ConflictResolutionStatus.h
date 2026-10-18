#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ConflictResolutionStatus : int {
    CloudChange = 0,
    LocalChange = 1,
    BothChange  = 2,
    NoChange    = 3,
    Error       = 4,
};
#else // @header-generator platform
enum class ConflictResolutionStatus : int {};
#endif // @header-generator platform

}

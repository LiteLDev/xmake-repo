#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FetchOutcome : int {
    Success   = 0,
    Failure   = 1,
    Cancelled = 2,
};
#else // @header-generator platform
enum class FetchOutcome : int {};
#endif // @header-generator platform

}

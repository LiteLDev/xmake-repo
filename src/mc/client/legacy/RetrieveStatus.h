#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RetrieveStatus : int {
    NewData = 0,
    Done    = 1,
    Failed  = 2,
};
#else // @header-generator platform
enum class RetrieveStatus : int {};
#endif // @header-generator platform

}

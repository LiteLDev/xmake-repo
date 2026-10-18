#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InitResult : int {
    Successful           = 0,
    Partial_SyncOptional = 1,
    Partial_SyncRequired = 2,
    Failed               = 3,
};
#else // @header-generator platform
enum class InitResult : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MSAASupport : uint {
    NonMSAA = 1,
    MSAA    = 2,
    Both    = 3,
};
#else // @header-generator platform
enum class MSAASupport : uint {};
#endif // @header-generator platform

}

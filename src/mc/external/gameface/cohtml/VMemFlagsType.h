#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::VMemFlags {

#if defined(LL_PLAT_C) // @header-generator platform
enum class VMemFlagsType : int {
    // bitfield representation
    ProtectionChange = 0,
    Reserve          = 1 << 0,
    Commit           = 1 << 1,
    Decommit         = 1 << 2,
    Release          = 1 << 3,
};
#else // @header-generator platform
enum class VMemFlagsType : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BlockActorVersion : ushort {
#else // @header-generator platform
enum class BlockActorVersion : short {
#endif // @header-generator platform
    Inception = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    _Count    = 1,
#else // @header-generator platform
    Count     = 1,
#endif // @header-generator platform
    Current   = 0,
};

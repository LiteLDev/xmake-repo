#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class StartIntent : int {
    JoinWorld          = 0,
    CreateAndJoinWorld = 1,
    UploadToRealm      = 2,
};
#else // @header-generator platform
enum class StartIntent : int {};
#endif // @header-generator platform

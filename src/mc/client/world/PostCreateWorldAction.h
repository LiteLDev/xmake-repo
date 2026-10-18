#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PostCreateWorldAction : int {
    Join          = 0,
    UploadToRealm = 1,
};
#else // @header-generator platform
enum class PostCreateWorldAction : int {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FileStorageDirectory : int {
    External = 1,
    AppData  = 2,
    None     = 3,
};
#else // @header-generator platform
enum class FileStorageDirectory : int {};
#endif // @header-generator platform

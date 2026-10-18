#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
enum class StorageResult : uint {
    Unexpected        = 0,
    Success           = 1,
    Started           = 2,
    QuotaExceeded     = 3,
    OutOfLocalStorage = 4,
    NotFound          = 5,
};
#else // @header-generator platform
enum class StorageResult : uint {};
#endif // @header-generator platform

}

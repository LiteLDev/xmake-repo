#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class QueryResult : int {
    Success = 0,
    Fail    = 1,
};
#else // @header-generator platform
enum class QueryResult : int {};
#endif // @header-generator platform

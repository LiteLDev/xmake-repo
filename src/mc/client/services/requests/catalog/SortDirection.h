#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SortDirection : uint {
    Ascending  = 0,
    Descending = 1,
};
#else // @header-generator platform
enum class SortDirection : uint {};
#endif // @header-generator platform

}

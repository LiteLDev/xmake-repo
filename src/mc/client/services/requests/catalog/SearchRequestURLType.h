#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SearchRequestURLType : int {
    Search      = 0,
    SearchStore = 1,
};
#else // @header-generator platform
enum class SearchRequestURLType : int {};
#endif // @header-generator platform

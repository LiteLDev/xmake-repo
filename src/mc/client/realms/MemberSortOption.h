#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MemberSortOption : int {
    MostRecent             = 0,
    AlphabeticalAscending  = 1,
    AlphabeticalDescending = 2,
    LeastRecent            = 3,
    Permission             = 4,
    Count                  = 5,
};
#else // @header-generator platform
enum class MemberSortOption : int {};
#endif // @header-generator platform

}

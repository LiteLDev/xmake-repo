#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class MemberSortOption : int {
    MostRecent             = 0,
    AlphabeticalAscending  = 1,
    AlphabeticalDescending = 2,
    LeastRecent            = 3,
    Permission             = 4,
    Count                  = 5,
};

}

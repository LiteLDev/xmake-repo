#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class MemberFilterOption : int {
    All       = 0,
    Online    = 1,
    Operators = 2,
    Members   = 3,
    Visitors  = 4,
    Friends   = 5,
    Count     = 6,
};

}

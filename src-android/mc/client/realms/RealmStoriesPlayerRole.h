#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class RealmStoriesPlayerRole : int {
    NonMember = -1,
    Visitor   = 0,
    Member    = 1,
    Operator  = 2,
    Owner     = 3,
};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmStoriesPlayerRole : int {
    NonMember = -1,
    Visitor   = 0,
    Member    = 1,
    Operator  = 2,
    Owner     = 3,
};
#else // @header-generator platform
enum class RealmStoriesPlayerRole : int {};
#endif // @header-generator platform

}

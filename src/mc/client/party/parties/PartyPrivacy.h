#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PartyPrivacy : int {
    Open       = 0,
    InviteOnly = 1,
};
#else // @header-generator platform
enum class PartyPrivacy : int {};
#endif // @header-generator platform

}

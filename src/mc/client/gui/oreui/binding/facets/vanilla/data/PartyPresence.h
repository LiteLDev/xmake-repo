#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PartyPresence : uint {
    NotInParty    = 0,
    InParty       = 1,
    Disconnecting = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PartyPresence : uint {
    NotInParty    = 0,
    InParty       = 1,
    Disconnecting = 2,
};
#else // @header-generator platform
enum class PartyPresence : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}

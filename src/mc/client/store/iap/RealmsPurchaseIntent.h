#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsPurchaseIntent : int {
    CreateRealm = 0,
    RenewRealm  = 1,
};
#else // @header-generator platform
enum class RealmsPurchaseIntent : int {};
#endif // @header-generator platform

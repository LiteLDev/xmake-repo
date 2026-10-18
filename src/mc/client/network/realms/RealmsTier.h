#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsTier : int {
    Core = 0,
    Plus = 1,
    Pro  = 2,
};
#else // @header-generator platform
enum class RealmsTier : int {};
#endif // @header-generator platform

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CSSGameplayFlags : int {
    // bitfield representation
    None                 = 0,
    IsUnderwater         = 1 << 0,
    IsOnFire             = 1 << 1,
    IsFrozen             = 1 << 2,
    IsEnchantedOrCharged = 1 << 3,
    IsPowered            = 1 << 4,
    Last                 = IsUnderwater | IsPowered,
};
#else // @header-generator platform
enum class CSSGameplayFlags : int {};
#endif // @header-generator platform

}

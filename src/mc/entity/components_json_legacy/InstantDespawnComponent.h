#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class InstantDespawnDefinition;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class InstantDespawnComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onDespawn(::Actor&);

    MCNAPI void tick(::Actor&);
#else // @header-generator platform
    MCAPI void onDespawn(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND
};

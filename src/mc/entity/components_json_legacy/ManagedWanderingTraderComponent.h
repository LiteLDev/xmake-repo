#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ManagedWanderingTraderComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reloadComponent(::Actor&);
#else // @header-generator platform
    MCAPI void reloadComponent(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND
};

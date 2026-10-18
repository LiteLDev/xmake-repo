#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RailActivatorComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ejectAllPassengers(::Actor&);
#else // @header-generator platform
    MCAPI void ejectAllPassengers(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};

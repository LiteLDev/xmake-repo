#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct VanillaClientGameplayComponent;
// clang-format on

struct VehicleInputSwitchRequestSystemImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(::StrictEntityContext&, ::ActorOwnerComponent const&, ::VanillaClientGameplayComponent&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

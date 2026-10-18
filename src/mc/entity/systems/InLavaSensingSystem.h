#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
struct WasInLavaFlagComponent;
// clang-format on

struct InLavaSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doInLavaSensing(
        ::StrictEntityContext const&,
        ::UpdateWaterStateRequestComponent const&,
        ::EntityModifier<WasInLavaFlagComponent>
#else // @header-generator platform
    MCAPI static void doInLavaSensing(
        ::StrictEntityContext const&               entity,
        ::UpdateWaterStateRequestComponent const&  updateWaterStateRequestComponent,
        ::EntityModifier<::WasInLavaFlagComponent> mod
#endif // @header-generator platform
    );
    // NOLINTEND
};

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
class ActorOwnerComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _upgrade(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<NeedsUpgradeToBodySlotFlagComponent, SkipBodySlotUpgradeFlagComponent>&
#else // @header-generator platform
    MCAPI static void _upgrade(
        ::StrictEntityContext& strictEntityContext,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};

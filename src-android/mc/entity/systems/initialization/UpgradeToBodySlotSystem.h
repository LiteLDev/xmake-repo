#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _upgrade(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<NeedsUpgradeToBodySlotFlagComponent, SkipBodySlotUpgradeFlagComponent>&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

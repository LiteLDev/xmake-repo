#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EquippableComponent;
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct EntityNeedsInitializeFlagComponent;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class MarkEquippableMobForUpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _markForUpgradeIfNeeded(
        ::StrictEntityContext&,
        ::EquippableComponent&,
        ::EntityModifier<NeedsUpgradeToBodySlotFlagComponent, SkipBodySlotUpgradeFlagComponent>&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

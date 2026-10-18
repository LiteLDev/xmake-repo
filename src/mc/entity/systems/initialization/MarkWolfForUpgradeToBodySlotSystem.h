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
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct EntityNeedsInitializeFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct NeedsUpgradeToBodySlotFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct SkipBodySlotUpgradeFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct WolfFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MarkWolfForUpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void _markForUpgrade(
        ::StrictEntityContext&                                   strictEntityContext,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent>& modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};

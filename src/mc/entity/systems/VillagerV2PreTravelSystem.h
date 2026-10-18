#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct SkipMobTravelComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace VillagerV2PreTravelSystem {
// functions
// NOLINTBEGIN
MCAPI void _doVillagerV2PreTravel(
    ::StrictEntityContext const&               entity,
    ::ActorDataFlagComponent const&            synchedActorDataComponent,
    ::EntityModifier<::SkipMobTravelComponent> modifier
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace VillagerV2PreTravelSystem
#endif // @header-generator platform

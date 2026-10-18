#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct CanVehicleSprintFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct PlayerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct VehicleComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MobTravelUpdateSpeedsSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();
#endif // @header-generator platform
    // NOLINTEND
};

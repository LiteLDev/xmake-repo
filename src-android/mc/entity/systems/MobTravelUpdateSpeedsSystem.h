#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
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
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MobTravelUpdateSpeedsSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorSetPositionRequestComponent;
struct HorseFlagComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

struct StandingVehiclePostPositionPassengerSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _impl(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::ActorSetPositionRequestComponent&,
        ::ViewT<
            StrictEntityContext,
            Include<HorseFlagComponent>,
            const StandAnimationComponent,
            const RenderRotationComponent,
            Include<VehicleComponent>,
            const RenderPositionComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorSetPositionRequestComponent;
struct HorseFlagComponent;
struct PassengerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PositionPassengerRequestComponent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _impl(
#else // @header-generator platform
    MCAPI static void _impl(
#endif // @header-generator platform
        ::StrictEntityContext&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::PassengerComponent const&,
        ::ActorSetPositionRequestComponent&,
#else // @header-generator platform
        ::PassengerComponent const&         passengerComponent,
        ::ActorSetPositionRequestComponent& setPositionRequest,
#endif // @header-generator platform
        ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
            StrictEntityContext,
            Include<HorseFlagComponent>,
            const StandAnimationComponent,
            const RenderRotationComponent,
            Include<VehicleComponent>,
            const RenderPositionComponent>
#else // @header-generator platform
            ::StrictEntityContext,
            ::Include<::HorseFlagComponent>,
            ::StandAnimationComponent const,
            ::RenderRotationComponent const,
            ::Include<::VehicleComponent>,
            ::RenderPositionComponent const> horseView
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};

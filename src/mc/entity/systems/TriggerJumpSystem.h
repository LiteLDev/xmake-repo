#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct DashActionComponent;
struct JumpPendingScaleComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct VehicleComponent;
struct WasInLavaFlagComponent;
struct WasInWaterFlagComponent;
#endif // @header-generator platform
// clang-format on

struct TriggerJumpSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // TriggerJumpSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobTravelComponent>,
        ::ActorDataFlagComponent const,
        ::ActorDataControllingSeatIndexComponent const,
        ::VehicleComponent const,
        ::AABBShapeComponent const,
        ::StateVectorComponent const,
        ::JumpPendingScaleComponent const,
        ::MovementAttributesComponent const,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::DashActionComponent const>,
        ::Optional<::MobIsJumpingFlagComponent const>,
        ::Optional<::WasInLavaFlagComponent const>,
        ::Optional<::WasInWaterFlagComponent const>>;

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createCleanupSystem();

    MCNAPI static ::TickingSystemWithInfo createTriggerJumpSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createTriggerJumpSystem();
#endif // @header-generator platform
    // NOLINTEND
};
